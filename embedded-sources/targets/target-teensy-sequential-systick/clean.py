#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os
import atexit

#----------------------------------------------------------------------------------------------------------------------*

def cleanup():
  if childProcess.poll () == None :
    childProcess.kill ()

#----------------------------------------------------------------------------------------------------------------------*

#--- Register a function for killing subprocess
atexit.register (cleanup)
#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
#--- Directories to clean
dir1 = scriptDir + "/objects"
dir2 = scriptDir + "/product"
dir3 = scriptDir + "/as"
#---
childProcess = subprocess.Popen (["rm", "-fr", dir1, dir2, dir3], cwd=scriptDir)
#--- Wait for subprocess termination
if childProcess.poll () == None :
  childProcess.wait ()
if childProcess.returncode != 0 :
  sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*
