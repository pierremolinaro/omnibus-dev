#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os
import atexit

#------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
#---
tool = os.path.expanduser ("~/plm-tools/plm-teensy-i386-Darwin-arm-gcc-4.9.2/bin/teensy-loader-cli")
source = "product/product.ihex"
childProcess = subprocess.Popen ([tool, "-w", "-v", "-mmcu=mk20dx128", source], cwd=scriptDir)
#--- Wait for subprocess termination
if childProcess.poll () == None :
  childProcess.wait ()
if childProcess.returncode != 0 :
  sys.exit (childProcess.returncode)

#------------------------------------------------------------------------------*
