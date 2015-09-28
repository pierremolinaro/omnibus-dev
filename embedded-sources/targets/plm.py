#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import sys, os, subprocess, urllib

#----------------------------------------------------------------------------------------------------------------------*

import make

#----------------------------------------------------------------------------------------------------------------------*
#   Run process and wait for termination                                                                               *
#----------------------------------------------------------------------------------------------------------------------*

def runProcess (command) :
  childProcess = subprocess.Popen (command)
#--- Wait for subprocess termination
  if childProcess.poll () == None :
    childProcess.wait ()
  if childProcess.returncode != 0 :
    print make.BOLD_RED () + "Error " + str (childProcess.returncode) + make.ENDC ()
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*
#   Run process, get output and wait for termination                                                                   *
#----------------------------------------------------------------------------------------------------------------------*

def runProcessAndGetOutput (command) :
  result = ""
  childProcess = subprocess.Popen (command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
  while True:
    out = childProcess.stdout.read(1)
    if out == '' and childProcess.poll() != None:
      break
    if out != '':
      result += out
#--- Wait for subprocess termination
  if childProcess.poll () == None :
    childProcess.wait ()
  if childProcess.returncode != 0 :
    print make.BOLD_RED () + "Error " + str (childProcess.returncode) + make.ENDC ()
    sys.exit (childProcess.returncode)
  return result

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

def runMakefile (toolDirectory, archiveBaseURL, LLVMsourceList, \
                 objectDir, LLCcompiler, llvmOptimizerCompiler, \
                 asAssembler, \
                 productDir, linker, objcopy, \
                 dumpObjectCode, displayObjectSize, runExecutableOnTarget, \
                 currentFile) :
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
  #print "Product directory: " + scriptDir
  #--- Build python makefile
  makefile = make.Make ()
  #--- Add C files compile rule
  objectList = []
  for source in LLVMsourceList:
  #--- Optimize LLVM source
    optimizedSource = objectDir + "/" + source + "-opt.ll"
    rule = make.Rule (optimizedSource, "Optimizing " + source)
    rule.mDependences.append ("sources/" + source)
    rule.mDependences.append (currentFile)
    rule.mCommand += llvmOptimizerCompiler
    rule.mCommand += ["sources/" + source]
    rule.mCommand += ["-o", optimizedSource]
    makefile.addRule (rule)
  #--- Compile LLVM source
    asSource = objectDir + "/" + source + ".s"
    rule = make.Rule (asSource, "Compiling " + optimizedSource)
    rule.mDependences.append (optimizedSource)
    rule.mCommand += LLCcompiler
    rule.mCommand += [optimizedSource]
    rule.mCommand += ["-o", asSource]
    makefile.addRule (rule)
  #--- Assembling
    asObject = objectDir + "/" + source + ".s.o"
    rule = make.Rule (asObject, "Assembling " + asSource)
    rule.mDependences.append (asSource)
    rule.mCommand += asAssembler
    rule.mCommand += [asSource]
    rule.mCommand += ["-o", asObject]
    makefile.addRule (rule)
    objectList.append (asObject)
  #--- Add linker rule
  productELF = productDir + "/product.elf"
  rule = make.Rule (productELF, "Linking " + productELF)
  rule.mDependences += objectList
  rule.mCommand += linker
  rule.mCommand += objectList
  rule.mCommand += ["-o", productELF]
  rule.mCommand += ["-Tsources/linker.ld"]
  rule.mCommand += ["-Map=" + productELF + ".map"]
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
  makefile.addGoal ("display-object-size", [productHEX], "Display Object Size")
  makefile.addGoal ("object-dump", [productHEX], "Dump Object Code")
  #--- Build
  #makefile.printRules ()
  makefile.runGoal (goal, maxParallelJobs, maxParallelJobs == 1)
  #--- Build Ok ?
  makefile.printErrorCountAndExitOnError ()
  #--- Run or all ? Display size
  if (goal == "run") or (goal == "all") :
    s = runProcessAndGetOutput (displayObjectSize + objectList)
    secondLine = s.split('\n')[1]
    numbers = [int(s) for s in secondLine.split() if s.isdigit()]
    print "Code:   " + str (numbers [0]) + " bytes"
    print "Data:   " + str (numbers [1]) + " bytes"
    print "Global: " + str (numbers [2]) + " bytes"
  #--- Run ?
  if goal == "run":
    print make.BOLD_BLUE () + "Loading Teensy..." + make.ENDC ()
    runProcess (runExecutableOnTarget + [productHEX])
    print make.BOLD_GREEN () + "Success" + make.ENDC ()
  elif goal == "display-object-size":
    print make.BOLD_BLUE () + "Display Object Sizes" + make.ENDC ()
    runProcess (displayObjectSize + objectList)
    print make.BOLD_GREEN () + "Success" + make.ENDC ()
  elif goal == "object-dump":
    print make.BOLD_BLUE () + "Dump Object Code" + make.ENDC ()
    runProcess (dumpObjectCode + [productELF])
    print make.BOLD_GREEN () + "Success" + make.ENDC ()


#----------------------------------------------------------------------------------------------------------------------*
