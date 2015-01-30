#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import shutil, sys, os

#----------------------------------------------------------------------------------------------------------------------*
# http://stackoverflow.com/questions/120656/directory-listing-in-python

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
#--- get subdirectories
for dirname, dirnames, filenames in os.walk (scriptDir):
  for subdirname in dirnames:
    fullPath = os.path.join(dirname, subdirname)
    print "-- Deleting " + fullPath
    shutil.rmtree (fullPath)
#---
print "Done."

#----------------------------------------------------------------------------------------------------------------------*
