#!/usr/bin/python
# -*- coding: utf-8 -*-
 
#----------------------------------------------------------------------------------------------------------------------*

import os
import sys
import subprocess

#----------------------------------------------------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                                                              *
#----------------------------------------------------------------------------------------------------------------------*

def BLACK () :
  return '\033[90m'

#----------------------------------------------------------------------------*

def RED () :
  return '\033[91m'

#----------------------------------------------------------------------------*

def GREEN () :
  return '\033[92m'

#----------------------------------------------------------------------------*

def YELLOW () :
  return '\033[93m'

#----------------------------------------------------------------------------*

def BLUE () :
  return '\033[94m'

#----------------------------------------------------------------------------*

def MAGENTA () :
  return '\033[95m'

#----------------------------------------------------------------------------*

def CYAN () :
  return '\033[96m'

#----------------------------------------------------------------------------*

def WHITE () :
  return '\033[97m'

#----------------------------------------------------------------------------*

def ENDC () :
  return '\033[0m'

#----------------------------------------------------------------------------*

def BOLD () :
  return '\033[1m'

#----------------------------------------------------------------------------*

def UNDERLINE () :
  return '\033[4m'

#----------------------------------------------------------------------------*

def BLINK () :
  return '\033[5m'

#----------------------------------------------------------------------------------------------------------------------*

def runCommand (command) :
  childProcess = subprocess.Popen (command)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*

def compileSource (source) :
  print MAGENTA() + BOLD () + "********** Compile " + source + ENDC ()
  command = ["../makefile-macosx/plm", "-v", "--Oz", source]
  childProcess = subprocess.Popen (command)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--- Compile PLM
print MAGENTA() + BOLD () + "********** Compile PLM" + ENDC ()
runCommand (["python", "../makefile-macosx/build+release.py"])
#--- Compile PLM
compileSource ("01-blinkled.plm")
compileSource ("02-blinkled-systick.plm")
compileSource ("03-blinkled-systick-enum.plm")
compileSource ("04-blinkled-systick-struct.plm")
compileSource ("05-blinkled-systick-string.plm")
compileSource ("06-blinkled-lcd.plm")
compileSource ("07-blinkled-urem-test.plm")
compileSource ("08-blinkled-exception.plm")
compileSource ("09-pit-unprivileged-mode.plm")

#----------------------------------------------------------------------------------------------------------------------*
