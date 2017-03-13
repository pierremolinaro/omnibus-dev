#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import os

#----------------------------------------------------------------------------------------------------------------------*
#   Tool dir                                                                                                           *
#----------------------------------------------------------------------------------------------------------------------*

def toolDir ():
  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()
  if SYSTEM_NAME == "Darwin":
    MACHINE = "i386"
  return os.path.expanduser ("~/plm-tools/plm-" + SYSTEM_NAME + "-" + MACHINE + "-llvm-4.0.0-binutils-2.28-openocd-0.8.0-libusb-1.0.21")
  #return os.path.expanduser ("~/plm-tools/plm-" + SYSTEM_NAME + "-" + MACHINE + "-llvm-3.9.1-binutils-2.27-openocd-0.8.0-libusb-1.0.20")

#----------------------------------------------------------------------------------------------------------------------*
