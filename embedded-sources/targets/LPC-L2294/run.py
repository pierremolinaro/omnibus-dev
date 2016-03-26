#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import subprocess, sys, time, os, socket

#----------------------------------------------------------------------------------------------------------------------*
#   Colors                                                                                                           *
#----------------------------------------------------------------------------------------------------------------------*

def RED () :
  return '\033[91m'

#----------------------------------------------------------------------------------------------------------------------*

def GREEN () :
  return '\033[92m'

#----------------------------------------------------------------------------------------------------------------------*

def BLUE () :
  return '\033[94m'

#----------------------------------------------------------------------------------------------------------------------*

def ENDC () :
  return '\033[0m'

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
sys.path.append (scriptDir + "/sources")
import toolpath
#--- Build project
returncode = subprocess.call (["python", "build.py"])
if returncode != 0 :
  sys.exit (returncode)
#---
openOCD = [
  toolpath.toolDir () + "/bin/openocd",
  "--search",
  toolpath.toolDir (),
  "-f",
  "openocd-interface/olimex-arm-usb-ocd.cfg",
  "-f",
  "openocd-board/olimex-lpc-l2294-1Mo.cfg",
]
str = "+"
for s in openOCD :
  str += " " + s
print BLUE () + str + ENDC ()
openOCDProcess = subprocess.Popen (openOCD, cwd=scriptDir)
#--- Wait for openOCD is listening on port 4444
time.sleep (1)
#print ("openOCD pid: ", openOCDProcess.pid)
#--- Read script file
f = open (scriptDir + "/sources/external-ram.openOCD", 'r')
content = f.read ()
f.close ()
#--- 
client = socket.socket (socket.AF_INET, socket.SOCK_STREAM)
ok = False
if openOCDProcess.poll () == None :
  try:
    client.connect (('localhost', 4444))
    try:
      client.send (content)
      ok = True
    except:
      print ("Cannot send data")
  except:
    print ("Connection refused")
#--- Wait for openOCD to exit
if openOCDProcess.poll () == None :
  openOCDProcess.wait ()
if openOCDProcess.returncode == 0 :
  print GREEN () + "Success" + ENDC ()
else:
  print RED () + "Error" + ENDC ()

#----------------------------------------------------------------------------------------------------------------------*
