#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import sys, os, subprocess, urllib

#----------------------------------------------------------------------------------------------------------------------*

import make

#----------------------------------------------------------------------------------------------------------------------*
#   ARCHIVE DOWNLOAD                                                                                                   *
#----------------------------------------------------------------------------------------------------------------------*

downloadProgression = 0.0

def downloadReportHook (a, b, fileSize) :
  global downloadProgression
  newProgression = min (100.0, float(a * b) / fileSize * 100.0)
  if newProgression > downloadProgression :
    downloadProgression = downloadProgression + 1.0
    sys.stdout.write(".")
    sys.stdout.flush()

#----------------------------------------------------------------------------------------------------------------------*

def downloadArchive (archiveURL, archivePath):
  global downloadProgression
  downloadProgression = 0.0
  make.runHiddenCommand (["rm", "-f", archivePath + ".downloading"])
  make.runHiddenCommand (["rm", "-f", archivePath + ".tar.bz2"])
  make.runHiddenCommand (["mkdir", "-p", os.path.dirname (archivePath)])
  #print "URL: "+ archiveURL
  #print "Downloading... " + archivePath + ".downloading"
  try:
    urllib.urlretrieve (archiveURL,  archivePath + ".downloading", downloadReportHook)
    print ""
    fileSize = os.path.getsize (archivePath + ".downloading")
    ok = fileSize > 1000000
    if ok:
      make.runHiddenCommand (["mv", archivePath + ".downloading", archivePath + ".tar.bz2"])
    else:
      print make.BOLD_RED () + "Error: cannot download file" + make.ENDC ()
      sys.exit (1)
  except:
    print make.BOLD_RED () + "Error: no network connection" + make.ENDC ()
    sys.exit (1)
    
#----------------------------------------------------------------------------------------------------------------------*

def runMakefile (toolDirectory, archiveBaseURL, cSourceList, \
                 objectDir, compiler, cCompilerOptions, \
                 productDir, linker, linkerOptions, objcopy, \
                 dumpObjectCode, displayObjectSize, runExecutableOnTarget) :
  #--- Get max parallel jobs as first argument
  goal = "all"
  if len (sys.argv) > 1 :
    goal = sys.argv [1]
  #--- Get max parallel jobs as first argument
  maxParallelJobs = 0 # 0 means use host processor count
  if len (sys.argv) > 2 :
    maxParallelJobs = int (sys.argv [2])
  #--- Get script absolute path
  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
  #--- Download compiler tool if needed
  if not os.path.exists (toolDirectory):
    print make.BOLD_GREEN () + "Downloading compiler tool chain" + make.ENDC ()
    archiveName = os.path.basename (toolDirectory)
    archiveURL = archiveBaseURL + archiveName + ".tar.bz2"
    downloadArchive (archiveURL, toolDirectory)
    installDir = os.path.normpath (toolDirectory + "/..")
    os.chdir (installDir)
    make.runHiddenCommand (["bunzip2", "-k", archiveName + ".tar.bz2"])
    make.runHiddenCommand (["rm", archiveName + ".tar.bz2"])
    make.runHiddenCommand (["tar", "xf", archiveName + ".tar"])
    make.runHiddenCommand (["rm", archiveName + ".tar"])
  #---
  os.chdir (scriptDir)
  print "Product directory: " + scriptDir
  #--- Build python makefile
  makefile = make.Make ()
  #--- Add C files compile rule
  objectList = []
  asObjectList = []
  for source in cSourceList:
  #--- Compile
    object = objectDir + "/" + source + ".o"
    rule = make.Rule (object, "Compiling " + source)
    rule.mDependences.append ("sources/" + source)
    rule.mCommand += compiler
    rule.mCommand += cCompilerOptions
    rule.mCommand += ["-c", "sources/" + source]
    rule.mCommand += ["-o", object]
    rule.enterSecondaryDependanceFile (object + ".dep")
    makefile.addRule (rule)
    objectList.append (object)
  #--- Assembling
    asObject = objectDir + "/" + source + ".s"
    rule = make.Rule (asObject, "Assembling " + source)
    rule.mDependences.append ("sources/" + source)
    rule.mCommand += compiler
    rule.mCommand += cCompilerOptions
    rule.mCommand += ["-S", "sources/" + source]
    rule.mCommand += ["-o", asObject]
    rule.enterSecondaryDependanceFile (asObject + ".dep")
    makefile.addRule (rule)
    asObjectList.append (asObject)
  #--- Add linker rule
  productELF = productDir + "/product.elf"
  rule = make.Rule (productELF, "Linking " + productELF)
  rule.mDependences += objectList
  rule.mCommand += linker
  rule.mCommand += linkerOptions
  rule.mCommand += objectList
  rule.mCommand += ["-o", productELF]
  rule.mCommand += ["-Tsources/linker.ld"]
  rule.mCommand += ["-Wl,-Map=" + productELF + ".map"]
  makefile.addRule (rule)
  #--- Add objcopy rule
  productHEX = productDir + "/product.ihex"
  rule = make.Rule (productHEX, "Hexing " + productHEX)
  rule.mDependences += [productELF]
  rule.mCommand += objcopy
  rule.mCommand += ["-O", "ihex"]
  rule.mCommand += [productELF]
  rule.mCommand += [productHEX]
  makefile.addRule (rule)
  #--- Add goals
  makefile.addGoal ("run", [productHEX], "Building all and run")
  makefile.addGoal ("all", [productHEX], "Building all")
  makefile.addGoal ("as", asObjectList, "Assembling C files")
  makefile.addGoal ("display-object-size", [productHEX], "Display Object Size")
  makefile.addGoal ("object-dump", [productHEX], "Dump Object Code")
  #--- Build
  #makefile.printRules ()
  makefile.runGoal (goal, maxParallelJobs, maxParallelJobs == 1)
  #--- Build Ok ?
  makefile.printErrorCountAndExitOnError ()
  #--- Run ?
  if goal == "run":
    print make.BOLD_BLUE () + "Loading Teensy..." + make.ENDC ()
    childProcess = subprocess.Popen (runExecutableOnTarget + [productHEX])
  #--- Wait for subprocess termination
    if childProcess.poll () == None :
      childProcess.wait ()
    if childProcess.returncode != 0 :
      print make.BOLD_RED () + "Error " + str (childProcess.returncode) + make.ENDC ()
      sys.exit (childProcess.returncode)
    else:
      print make.BOLD_GREEN () + "Success" + make.ENDC ()
  elif goal == "display-object-size":
    print make.BOLD_BLUE () + "Display Object Sizes" + make.ENDC ()
    childProcess = subprocess.Popen (displayObjectSize + objectList)
  #--- Wait for subprocess termination
    if childProcess.poll () == None :
      childProcess.wait ()
    if childProcess.returncode != 0 :
      print make.BOLD_RED () + "Error " + str (childProcess.returncode) + make.ENDC ()
      sys.exit (childProcess.returncode)
    else:
      print make.BOLD_GREEN () + "Success" + make.ENDC ()
  elif goal == "object-dump":
    print make.BOLD_BLUE () + "Dump Object Code" + make.ENDC ()
    childProcess = subprocess.Popen (dumpObjectCode + [productELF])
  #--- Wait for subprocess termination
    if childProcess.poll () == None :
      childProcess.wait ()
    if childProcess.returncode != 0 :
      print make.BOLD_RED () + "Error " + str (childProcess.returncode) + make.ENDC ()
      sys.exit (childProcess.returncode)
    else:
      print make.BOLD_GREEN () + "Success" + make.ENDC ()


#----------------------------------------------------------------------------------------------------------------------*
