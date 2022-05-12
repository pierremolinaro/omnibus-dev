#!/usr/bin/python3
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import os
import sys
import subprocess

#----------------------------------------------------------------------------------------------------------------------*

def runCommand (command) :
  childProcess = subprocess.Popen (command)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#---
runCommand (["LPC-L2294/+build-debug.py"])
runCommand (["teensy-3-1/+build-debug.py"])
runCommand (["teensy-3-6/+build-debug.py"])

#----------------------------------------------------------------------------------------------------------------------*
