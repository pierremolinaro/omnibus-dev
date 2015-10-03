#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import sys, os, subprocess, urllib

#----------------------------------------------------------------------------------------------------------------------*

import makefile

#----------------------------------------------------------------------------------------------------------------------*
#   Run process and wait for termination                                                                               *
#----------------------------------------------------------------------------------------------------------------------*

def runProcess (command) :
  childProcess = subprocess.Popen (command)
#--- Wait for subprocess termination
  if childProcess.poll () == None :
    childProcess.wait ()
  if childProcess.returncode != 0 :
    print makefile.BOLD_RED () + "Error " + str (childProcess.returncode) + makefile.ENDC ()
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
    print makefile.BOLD_RED () + "Error " + str (childProcess.returncode) + makefile.ENDC ()
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
  makefile.runHiddenCommand (["rm", "-f", archivePath + ".downloading"])
  makefile.runHiddenCommand (["rm", "-f", archivePath + ".tar.bz2"])
  makefile.runHiddenCommand (["mkdir", "-p", os.path.dirname (archivePath)])
  #print "URL: "+ archiveURL
  #print "Downloading... " + archivePath + ".downloading"
  try:
    urllib.urlretrieve (archiveURL,  archivePath + ".downloading", downloadReportHook)
    print ""
    fileSize = os.path.getsize (archivePath + ".downloading")
    ok = fileSize > 1000000
    if ok:
      makefile.runHiddenCommand (["mv", archivePath + ".downloading", archivePath + ".tar.bz2"])
    else:
      print makefile.BOLD_RED () + "Error: cannot download file" + makefile.ENDC ()
      sys.exit (1)
  except:
    print makefile.BOLD_RED () + "Error: no network connection" + makefile.ENDC ()
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
    print makefile.BOLD_GREEN () + "Downloading compiler tool chain" + makefile.ENDC ()
    archiveName = os.path.basename (toolDirectory)
    archiveURL = archiveBaseURL + archiveName + ".tar.bz2"
    downloadArchive (archiveURL, toolDirectory)
    installDir = os.path.normpath (toolDirectory + "/..")
    os.chdir (installDir)
    makefile.runHiddenCommand (["bunzip2", "-k", archiveName + ".tar.bz2"])
    makefile.runHiddenCommand (["rm", archiveName + ".tar.bz2"])
    makefile.runHiddenCommand (["tar", "xf", archiveName + ".tar"])
    makefile.runHiddenCommand (["rm", archiveName + ".tar"])
  #---
  os.chdir (scriptDir)
  #print "Product directory: " + scriptDir
  #--- Build python makefile
  make = makefile.Make (goal)
  #--- Add C files compile rule
  objectList = []
  for source in LLVMsourceList:
  #--- Optimize LLVM source
    optimizedSource = objectDir + "/" + source + "-opt.ll"
    rule = makefile.Rule ([optimizedSource], "Optimizing " + source)
    rule.mDependences.append ("sources/" + source)
    rule.mDependences.append (currentFile)
    rule.mCommand += llvmOptimizerCompiler
    rule.mCommand += ["sources/" + source]
    rule.mCommand += ["-o", optimizedSource]
    make.addRule (rule)
  #--- Compile LLVM source
    asSource = objectDir + "/" + source + ".s"
    rule = makefile.Rule ([asSource], "Compiling " + optimizedSource)
    rule.mDependences.append (optimizedSource)
    rule.mCommand += LLCcompiler
    rule.mCommand += [optimizedSource]
    rule.mCommand += ["-o", asSource]
    make.addRule (rule)
  #--- Assembling
    asObject = objectDir + "/" + source + ".s.o"
    rule = makefile.Rule ([asObject], "Assembling " + asSource)
    rule.mDependences.append (asSource)
    rule.mCommand += asAssembler
    rule.mCommand += [asSource]
    rule.mCommand += ["-o", asObject]
    make.addRule (rule)
    objectList.append (asObject)
  #--- Add linker rule
  productELF = productDir + "/product.elf"
  rule = makefile.Rule ([productELF], "Linking " + productELF)
  rule.mDependences += objectList
  rule.mCommand += linker
  rule.mCommand += objectList
#  rule.mCommand += [toolDirectory + "/lib/libgcc.a"]
  rule.mCommand += ["-o", productELF]
  rule.mCommand += ["-Tsources/linker.ld"]
  rule.mCommand += ["-Map=" + productELF + ".map"]
  make.addRule (rule)
  #--- Add objcopy rule
  productHEX = productDir + "/product.ihex"
  rule = makefile.Rule ([productHEX], "Hexing " + productHEX)
  rule.mDependences += [productELF]
  rule.mCommand += objcopy
  rule.mCommand += ["-O", "ihex"]
  rule.mCommand += [productELF]
  rule.mCommand += [productHEX]
  make.addRule (rule)
  #--- Add goals
  make.addGoal ("run", [productHEX], "Building all and run")
  make.addGoal ("all", [productHEX], "Building all")
  make.addGoal ("display-object-size", [productHEX], "Display Object Size")
  make.addGoal ("object-dump", [productHEX], "Dump Object Code")
  #--- Build
  #make.printRules ()
  make.runGoal (maxParallelJobs, maxParallelJobs == 1)
  #--- Build Ok ?
  make.printErrorCountAndExitOnError ()
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
    print makefile.BOLD_BLUE () + "Loading Teensy..." + makefile.ENDC ()
    runProcess (runExecutableOnTarget + [productHEX])
    print makefile.BOLD_GREEN () + "Success" + makefile.ENDC ()
  elif goal == "display-object-size":
    print makefile.BOLD_BLUE () + "Display Object Sizes" + makefile.ENDC ()
    runProcess (displayObjectSize + objectList)
    print makefile.BOLD_GREEN () + "Success" + makefile.ENDC ()
  elif goal == "object-dump":
    print makefile.BOLD_BLUE () + "Dump Object Code" + makefile.ENDC ()
    runProcess (dumpObjectCode + [productELF])
    print makefile.BOLD_GREEN () + "Success" + makefile.ENDC ()


#----------------------------------------------------------------------------------------------------------------------*
