#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os

#----------------------------------------------------------------------------------------------------------------------*

sys.path.append (os.path.dirname (os.path.abspath (sys.argv [0])) + "/sources")
import plm

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                         Object files directories                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def archiveBaseURL ():
  return "http://crossgcc.rts-software.org/downloads/plm-tools/"

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Tool dir                                                                                                           *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def toolDir ():
  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()
  if SYSTEM_NAME == "Darwin":
    MACHINE = "i386"
  return os.path.expanduser ("~/plm-tools/plm-" + SYSTEM_NAME + "-" + MACHINE + "-binutils-2.25-gcc-5.2.0-newlib-2.2.0.20150623-libusb-1.0.19")

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Compiler invocation                                                                                                *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def compiler ():
  return [toolDir () + "/bin/arm-eabi-gcc", "-mthumb", "-mcpu=cortex-m4"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Display object size invocation                                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def displayObjectSize ():
  return [toolDir () + "/bin/arm-eabi-size", "-t"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Object Dump invocation                                                                                             *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def dumpObjectCode ():
  return [toolDir () + "/bin/arm-eabi-objdump", "-Sdh", "-Mforce-thumb"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#    C Compiler options                                                                                                *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def cCompilerOptions ():
  result = []
  result.append ("-Wall")
  result.append ("-Werror")
  result.append ("-Wreturn-type")
  result.append ("-Wformat")
  result.append ("-Wsign-compare")
  result.append ("-Wpointer-arith")
  result.append ("-Wparentheses")
  result.append ("-Wcast-align")
  result.append ("-Wcast-qual")
  result.append ("-Wwrite-strings")
  result.append ("-Wswitch")
  result.append ("-Wuninitialized")
  result.append ("-fno-builtin")
  result.append ("-Wno-aggressive-loop-optimizations")
  result.append ("-ffunction-sections")
  result.append ("-fdata-sections")
  result.append ("-std=c99")
  result.append ("-Wstrict-prototypes")
  result.append ("-Wbad-function-cast")
  result.append ("-Wmissing-declarations")
  result.append ("-Wimplicit-function-declaration")
  result.append ("-Wno-int-to-pointer-cast")
  result.append ("-Wno-pointer-to-int-cast")
  result.append ("-Wmissing-prototypes")
  result.append ("-Os")
  result.append ("-fomit-frame-pointer")
  result.append ("-foptimize-register-move") 
  return result

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Linker invocation                                                                                                  *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def linker ():
  return [toolDir () + "/bin/arm-eabi-gcc", "-mthumb", "-mcpu=cortex-m4"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Linker options                                                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def linkerOptions ():
  result = []
  result.append ("-nostartfiles")
  result.append ("-Wl,--fatal-warnings")
  result.append ("-Wl,--warn-common")
  result.append ("-Wl,--no-undefined")
  result.append ("-Wl,--cref")
  result.append ("-lc")
  result.append ("-lgcc")
  result.append ("-Wl,-static")
  result.append ("-Wl,-s")
  result.append ("-Wl,--gc-sections")
  return result

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   objcopy invocation                                                                                                 *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def objcopy ():
  return [toolDir () + "/bin/arm-eabi-objcopy"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Source files                                                                                                       *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def cSourceList ():
  return ["plm.c"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Product directory                                                                                                  *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def productDir ():
  return "product"

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                         Object files directories                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def objectDir ():
  return "objects"

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   Run executable                                                                                                      *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

def runExecutableOnTarget ():
  return [toolDir () + "/bin/teensy-loader-cli", "-w", "-v", "-mmcu=mk20dx128"]

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#   MAIN                                                                                                               *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

plm.runMakefile (toolDir (), archiveBaseURL (), cSourceList (), objectDir (), \
                 compiler (), cCompilerOptions (), productDir (), \
                 linker (), linkerOptions (), \
                 objcopy (), dumpObjectCode (), displayObjectSize (), runExecutableOnTarget ())

#----------------------------------------------------------------------------------------------------------------------*
