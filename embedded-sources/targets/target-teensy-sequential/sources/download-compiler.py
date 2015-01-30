#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os
import urllib

#----------------------------------------------------------------------------------------------------------------------*

def downloadReportHook (a,b,c): 
    # ',' at the end of the line is important!
    print "% 3.1f%% of %d bytes\r" % (min(100, float(a * b) / c * 100), c),
    sys.stdout.flush()

#----------------------------------------------------------------------------------------------------------------------*

def runCommand (cmd) :
  print "+ " + cmd
  childProcess = subprocess.Popen (cmd.split ())
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--- Get home directory
homeDir = os.path.expanduser ("~")
#--- Get installation directory
installDir = homeDir + "/plm-tools"
#---
archiveName = "teensy-i386-Darwin-arm-gcc-4.9.2"
compilerURL = "http://moniteur-tp-micro.rts-software.org/plm-tools/" + archiveName + ".tar.bz2"
urllib.urlretrieve (compilerURL,  archiveName + ".tar.bz2", downloadReportHook)
print ""
runCommand ("bunzip2 -k " + archiveName + ".tar.bz2")
runCommand ("rm " + archiveName + ".tar.bz2")
runCommand ("tar xf " + archiveName + ".tar")
runCommand ("rm " + archiveName + ".tar")
runCommand ("rm -fr " + installDir + "/" + archiveName)
runCommand ("mkdir -p " + installDir)
runCommand ("mv " + archiveName + " " + installDir + "/" + archiveName)

#----------------------------------------------------------------------------------------------------------------------*
