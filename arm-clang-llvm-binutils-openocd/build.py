#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#———————————————————————————————————————————————————————————————————————————————
#   Imports
#———————————————————————————————————————————————————————————————————————————————

import time
import subprocess, sys, os
import urllib, shutil
import subprocess, re
import platform

#———————————————————————————————————————————————————————————————————————————————
# This script cross compiles binutils and LLVM/CLANG for ARM targets.
# It also compiles OpenOCD, TeensyLoader and ARM STACK COMPUTATIONS
#———————————————————————————————————————————————————————————————————————————————
#  SETTINGS
#———————————————————————————————————————————————————————————————————————————————

LLVM_VERSION = "5.0.1"
LLVM_SUFFIX = ""

BINUTILS_VERSION = "2.29.1"

LIBUSB_VERSION   = "1.0.21"

OPENOCD_VERSION = "0.10.0"

XZ_VERSION = "5.2.3"

CMAKE_VERSION = "3.9.0"

#--------------------------------------- Target
TARGET = "arm-eabi"
LLVM_TARGET_TO_BUILD = "ARM"

#--------------------------------------- Building LLVM with GCC for OSX ?
USE_GCC_OSX = False
STATIC_LINK_WITH_LIBSTDCXX = True

GCC_VERSION  = "7.2.0"

#--- For accepted versions of GMP, MPC, MPFR and ISL,
#    see contrib/download_prerequisites file in GCC source directory
#  GCC |  7.1.0 | 6.3.0 |
#  GMP |  6.1.0 | 4.3.2 |
#  MPC |  1.0.3 | 0.8.1 |
# MPFR |  3.1.4 | 2.4.2 |
#  ISL | 0.16.1 | 0.15  |

GMP_VERSION  = "6.1.0"
MPC_VERSION  = "1.0.3"
MPFR_VERSION = "3.1.4"

USE_ISL = True
ISL_VERSION  = "0.16.1"

#———————————————————————————————————————————————————————————————————————————————
#   Directories
#———————————————————————————————————————————————————————————————————————————————

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
ARCHIVE_DIR = os.path.abspath (scriptDir + "/../+archives-for-cross-compilation")
GCC_OSX_INSTALL_DIR = os.path.abspath (scriptDir + "/../+utilities/gcc-" + GCC_VERSION + "-for-osx")
UTILITY_DIR = os.path.abspath (scriptDir + "/../+utilities")

#———————————————————————————————————————————————————————————————————————————————
#   processorCount
#———————————————————————————————————————————————————————————————————————————————

def processorCount () :
  if sys.version_info >= (2, 6) :
    import multiprocessing
    coreCount = str (multiprocessing.cpu_count () + 1)
  else:
    coreCount = "1"
  return coreCount

#———————————————————————————————————————————————————————————————————————————————
#   FOR PRINTING IN COLOR
#———————————————————————————————————————————————————————————————————————————————

class bcolors:
    HEADER = '\033[95m'
    BLUE = '\033[94m'
    GREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    BOLD_BLUE = '\033[1m' + '\033[94m'
    BOLD_GREEN = '\033[1m' + '\033[92m'
    BOLD_RED = '\033[1m' + '\033[91m'

#———————————————————————————————————————————————————————————————————————————————
#   myChDir
#———————————————————————————————————————————————————————————————————————————————

def myChDir (dir):
  print bcolors.BOLD_BLUE + "+ chdir " + dir + bcolors.ENDC
  os.chdir (dir)

#———————————————————————————————————————————————————————————————————————————————
#   COPY TREE
#———————————————————————————————————————————————————————————————————————————————
# http://stackoverflow.com/questions/1868714/how-do-i-copy-an-entire-directory-of-files-into-an-existing-directory-using-pyth

def myCopyTree (src, dst):
  print bcolors.BOLD_BLUE + "+ copytree " + src + " " + dst + bcolors.ENDC
  for item in os.listdir (src):
    s = os.path.join (src, item)
    d = os.path.join (dst, item)
    if os.path.isdir (s):
      if not os.path.exists (d):
        os.mkdir (d)
      myCopyTree (s, d)
    else:
      shutil.copy2 (s, d)

#———————————————————————————————————————————————————————————————————————————————
#   myDeleteDir
#———————————————————————————————————————————————————————————————————————————————
# http://unix.stackexchange.com/questions/77127/rm-rf-all-files-and-all-hidden-files-without-error
# http://unix.stackexchange.com/questions/233576/recursively-delete-subdirectories-not-containing-pattern-on-osx

def myDeleteDir (dir):
  while os.path.exists (dir):
    print bcolors.BOLD_BLUE + "+ remove '" + dir + "' directory" + bcolors.ENDC
    shutil.rmtree (dir, True) # Ignore errors

#———————————————————————————————————————————————————————————————————————————————
#   ARCHIVE DOWNLOAD
#———————————————————————————————————————————————————————————————————————————————

def downloadReportHook (a,b,fileSize):
  # "," at the end of the line is important!
  if fileSize < (1 << 10):
    sizeString = str (fileSize)
  else:
    if fileSize < (1 << 20):
      sizeString = str (fileSize >> 10) + "Ki"
    else:
      sizeString = str (fileSize >> 20) + "Mi"
  print "% 3.1f%% of %sB\r" % (min(100.0, float(a * b) / fileSize * 100.0), sizeString),
  sys.stdout.flush()

#———————————————————————————————————————————————————————————————————————————————

def downloadArchive (archiveURL, archivePath, startTime):
  if not os.path.exists (archivePath):
    print bcolors.BOLD_BLUE + "+Download " + os.path.basename (archivePath) + bcolors.ENDC
    print "URL '" + archiveURL + "'"
    urllib.urlretrieve (archiveURL,  archivePath, downloadReportHook)
    print ""
    print "Done at %3.1f s" % (time.time () - startTime)

#———————————————————————————————————————————————————————————————————————————————
#   Build GCC for OSX
#———————————————————————————————————————————————————————————————————————————————
# http://solarianprogrammer.com/2017/05/21/compiling-gcc-macos/

def build_gcc_for_osx (startTime, GCC_OSX_INSTALL_DIR, ARCHIVE_DIR, GCC, GCC_VERSION, GMP, MPFR, USE_ISL, ISL) :
  print bcolors.BOLD_GREEN + "-------------- GCC" + bcolors.ENDC
  if not os.path.exists (GCC_OSX_INSTALL_DIR + "/bin/gcc-" + GCC_VERSION):
    runCommand (["rm", "-f", GCC + ".tar"])
    myDeleteDir ("build-gcc")
    myDeleteDir (GCC)
    runCommand (["cp", ARCHIVE_DIR + "/" + GCC + ".tar.bz2", GCC + ".tar.bz2"])
    runCommand (["bunzip2", GCC + ".tar.bz2"])
    runCommand (["tar", "xf", GCC + ".tar"])
    runCommand (["rm", GCC + ".tar"])
    #--- GMP
    runCommand (["cp", ARCHIVE_DIR + "/" + GMP + ".tar.bz2", GMP + ".tar.bz2"])
    runCommand (["bunzip2", GMP + ".tar.bz2"])
    runCommand (["tar", "xf", GMP + ".tar"])
    runCommand (["rm", GMP + ".tar"])
    runCommand (["mv", GMP, GCC + "/gmp"])
    #--- MPFR
    runCommand (["cp", ARCHIVE_DIR + "/" + MPFR + ".tar.bz2",  MPFR + ".tar.bz2"])
    runCommand (["bunzip2", MPFR + ".tar.bz2"])
    runCommand (["tar", "xf", MPFR + ".tar"])
    runCommand (["rm", MPFR + ".tar"])
    runCommand (["mv", MPFR, GCC + "/mpfr"])
    #--- MPC
    runCommand (["cp", MPC_ARCHIVE_PATH, MPC + ".tar.gz"])
    runCommand (["gunzip", MPC + ".tar.gz"])
    runCommand (["tar", "xf", MPC + ".tar"])
    runCommand (["rm", MPC + ".tar"])
    runCommand (["mv", MPC, GCC + "/mpc"])
    #--- ISL
    if USE_ISL:
      runCommand (["cp", ARCHIVE_DIR + "/" + ISL + ".tar.bz2",  ISL + ".tar.bz2"])
      runCommand (["bunzip2", ISL + ".tar.bz2"])
      runCommand (["tar", "xf", ISL + ".tar"])
      runCommand (["rm", ISL + ".tar"])
      runCommand (["mv", ISL, GCC + "/isl"])
    #--- Build GCC
    runCommand (["mkdir", "build-gcc"])
    myChDir (scriptDir + "/build-gcc")
    runCommand (["../" + GCC + "/configure", "--help"])
    GCC_CONFIGURE_COMMAND = [
      "../" + GCC + "/configure",
      "--prefix=" + GCC_OSX_INSTALL_DIR,
      "--enable-checking=release",
      "--enable-languages=c,c++",
      "--program-suffix=-" + GCC_VERSION
    ]
    runCommand (GCC_CONFIGURE_COMMAND)
    runCommand (["make", "all", "-j" + processorCount ()])
    runCommand (["make", "install"])
    myChDir (scriptDir)
    myDeleteDir ("build-gcc")
    myDeleteDir (GCC)
    displayDurationFromStartTime (startTime)

#———————————————————————————————————————————————————————————————————————————————
#   runCommand
#———————————————————————————————————————————————————————————————————————————————

def runCommand (cmd, environnement=None) :
  str = "+"
  for s in cmd:
    str += " " + s
  print bcolors.BOLD_BLUE + str + bcolors.ENDC
  childProcess = subprocess.Popen (cmd, env=environnement)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#———————————————————————————————————————————————————————————————————————————————
#   displayDurationFromStartTime
#———————————————————————————————————————————————————————————————————————————————

def displayDurationFromStartTime (startTime) :
  totalDurationInSeconds = int (time.time () - startTime)
  durationInSecondes = totalDurationInSeconds % 60
  durationInMinutes = (totalDurationInSeconds / 60) % 60
  durationInHours = totalDurationInSeconds / 3600
  s = ""
  if durationInHours > 0:
    s += str (durationInHours) + "h"
  if durationInMinutes > 0:
    s += str (durationInMinutes) + "min"
  s += str (durationInSecondes) + "s"
  print "Done at +" + s

#———————————————————————————————————————————————————————————————————————————————
#  build
#———————————————————————————————————————————————————————————————————————————————

startTime = time.time ()
#--------------------------------------------------------------------------- Get script absolute path
myChDir (scriptDir)
#--------------------------------------------------------------------------- Product
(SYSTEM_NAME, MODE_NAME, SYSTEM_RELEASE, SYSTEM_VERSION, MACHINE) = os.uname ()
if SYSTEM_NAME == "Darwin":
  MACHINE = "i386"
PRODUCT_NAME = "plm-" + SYSTEM_NAME + "-" + MACHINE
PRODUCT_NAME += "-llvm-" + LLVM_VERSION + LLVM_SUFFIX
PRODUCT_NAME += "-binutils-" + BINUTILS_VERSION
PRODUCT_NAME += "-openocd-" + OPENOCD_VERSION
PRODUCT_NAME += "-libusb-" + LIBUSB_VERSION
INSTALL_DIR = scriptDir + "/" + PRODUCT_NAME
PRODUCT_DIR = scriptDir + "/PRODUCT"
#--------------------------------------------------------------------------- Archives
BINUTILS = "binutils-" + BINUTILS_VERSION
BINUTILS_ARCHIVE_PATH = ARCHIVE_DIR + "/" + BINUTILS + ".tar.bz2"
LIBUSB = "libusb-" + LIBUSB_VERSION
LIBUSB_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LIBUSB + ".tar.bz2"
XZ = "xz-" + XZ_VERSION
XZ_ARCHIVE_PATH = ARCHIVE_DIR + "/" + XZ + ".tar.bz2"
LLVM = "llvm-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
LLVM_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LLVM + ".tar.xz"
CLANG = "cfe-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
CLANG_ARCHIVE_PATH = ARCHIVE_DIR + "/" + CLANG + ".tar.xz"
LLD = "lld-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
LLD_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LLD + ".tar.xz"
OPENOCD = "openocd-" + OPENOCD_VERSION
OPENOCD_ARCHIVE_PATH = ARCHIVE_DIR + "/" + OPENOCD + ".tar.bz2"
CMAKE = "cmake-" + CMAKE_VERSION
CMAKE_ARCHIVE_PATH = ARCHIVE_DIR + "/" + CMAKE + ".tar.gz"
#-------------------------------------- GCC Archives
GCC = "gcc-" + GCC_VERSION
GCC_ARCHIVE_PATH = ARCHIVE_DIR + "/" + GCC + ".tar.bz2"
GMP = "gmp-" + GMP_VERSION
GMP_ARCHIVE_PATH = ARCHIVE_DIR + "/" + GMP + ".tar.bz2"
MPFR = "mpfr-" + MPFR_VERSION
MPFR_ARCHIVE_PATH = ARCHIVE_DIR + "/" + MPFR + ".tar.bz2"
MPC    = "mpc-" + MPC_VERSION
MPC_ARCHIVE_PATH = ARCHIVE_DIR + "/" + MPC + ".tar.gz"
if USE_ISL:
  ISL    = "isl-" + ISL_VERSION
  ISL_ARCHIVE_PATH = ARCHIVE_DIR + "/" + ISL + ".tar.bz2"
#--------------------------------------------------------------------------- Download
if LLVM_SUFFIX == "" :
  LLVM_URL = "http://llvm.org/releases/" + LLVM_VERSION + "/" + LLVM + ".tar.xz"
  CLANG_URL = "http://llvm.org/releases/" + LLVM_VERSION + "/" + CLANG + ".tar.xz"
  LLD_URL = "http://llvm.org/releases/" + LLVM_VERSION + "/" + LLD + ".tar.xz"
else:
  LLVM_URL = "http://llvm.org/pre-releases/" + LLVM_VERSION + "/" + LLVM_SUFFIX + "/" + LLVM + ".tar.xz"
  CLANG_URL = "http://llvm.org/pre-releases/" + LLVM_VERSION + "/" + LLVM_SUFFIX + "/" + CLANG + ".tar.xz"
  LLD_URL = "http://llvm.org/pre-releases/" + LLVM_VERSION + "/" + LLVM_SUFFIX + "/" + LLD + ".tar.xz"
print  bcolors.BOLD_GREEN + "-------------- Download archives" + bcolors.ENDC
runCommand (["mkdir", "-p", ARCHIVE_DIR])
downloadArchive ("http://cmake.org/files/v" + os.path.splitext (CMAKE_VERSION)[0] + "/" + CMAKE + ".tar.gz", CMAKE_ARCHIVE_PATH, startTime)
downloadArchive ("ftp://ftp.gnu.org/gnu/binutils/" + BINUTILS + ".tar.bz2", BINUTILS_ARCHIVE_PATH, startTime)
downloadArchive ("http://tukaani.org/xz/" + XZ + ".tar.bz2", XZ_ARCHIVE_PATH, startTime)
downloadArchive ("http://sourceforge.net/projects/libusb/files/libusb-1.0/" + LIBUSB + "/" + LIBUSB + ".tar.bz2", LIBUSB_ARCHIVE_PATH, startTime)
downloadArchive (LLVM_URL, LLVM_ARCHIVE_PATH, startTime)
downloadArchive (CLANG_URL, CLANG_ARCHIVE_PATH, startTime)
downloadArchive (LLD_URL, LLD_ARCHIVE_PATH, startTime)
downloadArchive ("http://sourceforge.net/projects/openocd/files/openocd/" + OPENOCD_VERSION + "/" + OPENOCD + ".tar.bz2", OPENOCD_ARCHIVE_PATH, startTime)
#-------------------------------------- GCC Download
if USE_GCC_OSX :
  downloadArchive ("ftp://ftp.gnu.org/gnu/gcc/" + GCC + "/" + GCC + ".tar.bz2", GCC_ARCHIVE_PATH, startTime)
  downloadArchive ("ftp://ftp.gnu.org/gnu/gmp/" + GMP + ".tar.bz2", GMP_ARCHIVE_PATH, startTime)
  downloadArchive ("ftp://ftp.gnu.org/gnu/mpfr/" + MPFR + ".tar.bz2", MPFR_ARCHIVE_PATH, startTime)
  downloadArchive ("http://www.multiprecision.org/mpc/download/" + MPC + ".tar.gz", MPC_ARCHIVE_PATH, startTime)
  if USE_ISL:
    downloadArchive ("ftp://gcc.gnu.org/pub/gcc/infrastructure/" + ISL + ".tar.bz2", ISL_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- Build GGC OSX
if USE_GCC_OSX :
  build_gcc_for_osx (startTime, GCC_OSX_INSTALL_DIR, ARCHIVE_DIR, GCC, GCC_VERSION, GMP, MPFR, USE_ISL, ISL)
  if STATIC_LINK_WITH_LIBSTDCXX :
    runCommand (["rm", "-f", GCC_OSX_INSTALL_DIR + "/lib/libstdc++.6.dylib"])
    runCommand (["rm", "-f", GCC_OSX_INSTALL_DIR + "/lib/libstdc++.dylib"])
#--------------------------------------------------------------------------- binutils
print bcolors.BOLD_GREEN + "-------------- binutils" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/" + TARGET + "-ar"):
  runCommand (["rm", "-f", BINUTILS + ".tar"])
  myDeleteDir (INSTALL_DIR)
  runCommand (["mkdir", "-p", INSTALL_DIR])
  myDeleteDir ("build-binutils")
  myDeleteDir (BINUTILS)
  runCommand (["cp", ARCHIVE_DIR + "/" + BINUTILS + ".tar.bz2", BINUTILS + ".tar.bz2"])
  runCommand (["bunzip2", BINUTILS + ".tar.bz2"])
  runCommand (["tar", "xf", BINUTILS + ".tar"])
  runCommand (["rm", BINUTILS + ".tar"])
  runCommand (["mkdir", "build-binutils"])
  myChDir (scriptDir + "/build-binutils")
  runCommand (["../" + BINUTILS + "/configure", "--help"])
  BINUTILS_CONFIGURE_COMMAND = [
    "../" + BINUTILS + "/configure",
    "--target=" + TARGET,
    "--prefix=" + INSTALL_DIR,
    "--with-sysroot=" + INSTALL_DIR + "/" + TARGET, # For making BINUTILS relocatable
    "--enable-interwork",
    "--enable-multilib",
    "--disable-werror",
    "--disable-libstdcxx",
    "CFLAGS=-O2 -fomit-frame-pointer",
    "CXXFLAGS=-O2 -fomit-frame-pointer"
  ]
  runCommand (BINUTILS_CONFIGURE_COMMAND)
  runCommand (["make", "all", "-j" + processorCount ()])
  runCommand (["make", "install"])
  myChDir (scriptDir)
  myDeleteDir (scriptDir + "/build-binutils")
  myDeleteDir (scriptDir + "/" + BINUTILS)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- XZ
print bcolors.BOLD_GREEN + "-------------- XZ" + bcolors.ENDC
if not os.path.exists (UTILITY_DIR + "/bin"):
  runCommand (["mkdir", "-p", UTILITY_DIR + "/bin"])
if not os.path.exists (UTILITY_DIR + "/bin/xz"):
  myDeleteDir ("build-xz")
  runCommand (["cp", ARCHIVE_DIR + "/" + XZ + ".tar.bz2", XZ + ".tar.bz2"])
  runCommand (["bunzip2", XZ + ".tar.bz2"])
  runCommand (["tar", "xf", XZ + ".tar"])
  runCommand (["rm", XZ + ".tar"])
  runCommand (["mkdir", "build-xz"])
  myChDir (scriptDir + "/build-xz")
  runCommand ([
    "../" + XZ + "/configure",
    "--prefix=" + INSTALL_DIR,
    "--disable-nls",
    "--disable-shared",
    "--enable-static"
  ])
  runCommand (["make", "all", "-j" + processorCount ()])
  myChDir (scriptDir)
  runCommand (["mkdir", "-p", ARCHIVE_DIR + "/bin/"])
  runCommand (["cp", "build-xz/src/xz/xz", UTILITY_DIR + "/bin/"])
  myDeleteDir ("build-xz")
  myDeleteDir (XZ)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- CMAKE
print bcolors.BOLD_GREEN + "-------------- CMAKE" + bcolors.ENDC
if not os.path.exists (UTILITY_DIR + "/bin/cmake"):
  runCommand (["rm", "-fr", CMAKE, "build-cmake"])
  runCommand (["cp", CMAKE_ARCHIVE_PATH, CMAKE + ".tar.gz"])
  runCommand (["gunzip", CMAKE + ".tar.gz"])
  runCommand (["tar", "xf", CMAKE + ".tar"])
  runCommand (["rm", CMAKE + ".tar"])
  runCommand (["mkdir", "build-cmake"])
  myChDir (scriptDir + "/build-cmake")
  runCommand ([
    "../" + CMAKE + "/bootstrap",
    "--prefix=" + UTILITY_DIR
  ])
  runCommand (["make", "all", "-j" + processorCount ()])
  runCommand (["make", "install"])
  myChDir (scriptDir)
  myDeleteDir ("build-cmake")
  myDeleteDir (CMAKE)
#--------------------------------------------------------------------------- LLVM
print bcolors.BOLD_GREEN + "-------------- llvm" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/llvm-dis"):
  #--- LLVM
  myDeleteDir ("build-llvm-clang")
  myDeleteDir (LLVM)
  runCommand (["cp", ARCHIVE_DIR + "/" + LLVM + ".tar.xz", LLVM + ".tar.xz"])
  runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", LLVM + ".tar.xz"])
  runCommand (["tar", "xf", LLVM + ".tar"])
  runCommand (["rm", "-f", LLVM + ".tar"])
  #--- CLANG
  myDeleteDir (CLANG)
  runCommand (["cp", ARCHIVE_DIR + "/" + CLANG + ".tar.xz", CLANG + ".tar.xz"])
  runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", CLANG + ".tar.xz"])
  runCommand (["tar", "xf", CLANG + ".tar"])
  runCommand (["rm", "-f", CLANG + ".tar"])
  runCommand (["mv", CLANG, "clang"])
  runCommand (["mv", "clang", LLVM + "/tools"])
  #--- LLD
  myDeleteDir (LLD)
  runCommand (["cp", ARCHIVE_DIR + "/" + LLD + ".tar.xz", LLD + ".tar.xz"])
  runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", LLD + ".tar.xz"])
  runCommand (["tar", "xf", LLD + ".tar"])
  runCommand (["rm", "-f", LLD + ".tar"])
  runCommand (["mv", LLD, "lld"])
  runCommand (["mv", "lld", LLVM + "/tools"])
  #--- Build
  runCommand (["mkdir", "build-llvm-clang"])
  myChDir (scriptDir + "/build-llvm-clang")
  LLVM_CMAKE_COMMAND = [UTILITY_DIR + "/bin/cmake",
    "-G", "Unix Makefiles",
    "-DCMAKE_INSTALL_PREFIX=" + INSTALL_DIR,
    "-DLLVM_TARGETS_TO_BUILD=" + LLVM_TARGET_TO_BUILD,
    "-DLLVM_DEFAULT_TARGET_TRIPLE=" + TARGET,
    "-DCMAKE_BUILD_TYPE=Release",
    "-DLLVM_BUILD_RUNTIME=Off",
    "-DLLVM_INCLUDE_TESTS=Off",
    "-DLLVM_INCLUDE_EXAMPLES=Off",
    "-DLLVM_ENABLE_BACKTRACES=Off",
    "-DCMAKE_CROSSCOMPILING=True",
#     "-DLLVM_BUILD_EXTERNAL_COMPILER_RT=On",
    "../" + LLVM
  ]
  LLVM_CMAKE_ENVIRONMENT= {}
  if USE_GCC_OSX : # http://cmake.org/Wiki/CMake_Useful_Variables
    LLVM_CMAKE_ENVIRONMENT ["PATH"] = os.path.abspath (GCC_OSX_INSTALL_DIR + "/bin") + ":" + os.environ ["PATH"]
    LLVM_CMAKE_COMMAND += [
      "-DCMAKE_C_COMPILER=" + os.path.abspath (GCC_OSX_INSTALL_DIR + "/bin/gcc-" + GCC_VERSION),
      "-DCMAKE_CXX_COMPILER=" + os.path.abspath (GCC_OSX_INSTALL_DIR + "/bin/g++-" + GCC_VERSION),
      "-DCMAKE_CXX_FLAGS=-Wno-implicit-fallthrough -Wno-unused-function"
    ]
  runCommand (LLVM_CMAKE_COMMAND, LLVM_CMAKE_ENVIRONMENT)
  runCommand (["make", "all", "-j" + processorCount ()])
  runCommand (["make", "install"])
  myChDir (scriptDir)
  myDeleteDir ("build-llvm-clang")
  myDeleteDir (LLVM)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- Compiler-rt
# print bcolors.BOLD_GREEN + "-------------- COMPILER-RT" + bcolors.ENDC
# myDeleteDir (COMPILER_RT)
# myDeleteDir ("build-compiler-rt")
# runCommand (["cp", ARCHIVE_DIR + "/" + COMPILER_RT + ".tar.xz", COMPILER_RT + ".tar.xz"])
# runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", COMPILER_RT + ".tar.xz"])
# runCommand (["tar", "xf", COMPILER_RT + ".tar"])
# runCommand (["rm", "-f", COMPILER_RT + ".tar"])
# runCommand (["mkdir", "build-compiler-rt"])
# myChDir (scriptDir + "/build-compiler-rt")
# COMPILER_RT_CMAKE_COMMAND = [
#   UTILITY_DIR + "/bin/cmake",
#   "../" + COMPILER_RT,
#   "-DCMAKE_INSTALL_PREFIX=" + INSTALL_DIR,
#   "-DLLVM_TARGETS_TO_BUILD=" + LLVM_TARGET_TO_BUILD,
#   "-DLLVM_DEFAULT_TARGET_TRIPLE=" + TARGET,
#   "-DLLVM_CONFIG_PATH=" + INSTALL_DIR + "/bin/llvm-config"
# ]
# COMPILER_RT_CMAKE_ENVIRONMENT= {}
# COMPILER_RT_CMAKE_ENVIRONMENT ["PATH"] = os.path.abspath (INSTALL_DIR + "/bin") + ":" + os.environ ["PATH"]
# runCommand (COMPILER_RT_CMAKE_COMMAND, COMPILER_RT_CMAKE_ENVIRONMENT)
# runCommand (["make", "-j" + processorCount ()])
# runCommand (["make", "install"])
# myChDir (scriptDir)
# myDeleteDir (COMPILER_RT)
# myDeleteDir ("build-compiler-rt")
# displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- LIBUSB
print bcolors.BOLD_GREEN + "-------------- LIBUSB" + bcolors.ENDC
LIBUSB_INSTALL_DIR = scriptDir + "/libusb-product"
if not os.path.exists (LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.a"):
  runCommand (["rm", "-f", LIBUSB + ".tar"])
  myDeleteDir ("build-libusb")
  myDeleteDir (LIBUSB)
  runCommand (["cp", ARCHIVE_DIR + "/" + LIBUSB + ".tar.bz2", LIBUSB + ".tar.bz2"])
  runCommand (["bunzip2", LIBUSB + ".tar.bz2"])
  runCommand (["tar", "xf", LIBUSB + ".tar"])
  runCommand (["rm", LIBUSB + ".tar"])
  runCommand (["mkdir", "build-libusb"])
  myChDir (scriptDir + "/build-libusb")
  runCommand ([
    "../" + LIBUSB + "/configure",
    "--prefix=" + LIBUSB_INSTALL_DIR
  ])
  runCommand (["make", "all", "-j" + processorCount ()]) # LIBUSB 1.0.20 do not build in parallel
  runCommand (["make", "install"])
  myChDir (scriptDir)
  runCommand (["rm", "-f", LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.0.dylib"])
  runCommand (["rm", "-f", LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.dylib"])
  runCommand (["rm", "-f", LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.la"])
  myDeleteDir (LIBUSB_INSTALL_DIR + "/lib/pkgconfig")
  myDeleteDir ("build-libusb")
  myDeleteDir (LIBUSB)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- OPENOCD
print bcolors.BOLD_GREEN + "-------------- openocd" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/openocd"):
  runCommand (["rm", "-f", OPENOCD + ".tar"])
  myDeleteDir ("build-openocd")
  myDeleteDir (OPENOCD)
  runCommand (["cp", ARCHIVE_DIR + "/" + OPENOCD + ".tar.bz2", OPENOCD + ".tar.bz2"])
  runCommand (["bunzip2", OPENOCD + ".tar.bz2"])
  runCommand (["tar", "xf", OPENOCD + ".tar"])
  runCommand (["rm", OPENOCD + ".tar"])
  runCommand (["mkdir", "build-openocd"])
  myChDir (scriptDir + "/build-openocd")
  runCommand (["../" + OPENOCD + "/configure", "--help"])
  OPENOCD_CONFIGURE_COMMAND = [
    "../" + OPENOCD + "/configure",
    "--prefix=" + INSTALL_DIR,
    "--with-sysroot=" + INSTALL_DIR,
    "--disable-shared",
    "--disable-werror",
    "--enable-ftdi",
    "CFLAGS=-O2 -fomit-frame-pointer -DHAVE_LIBUSB_ERROR_NAME",
    "CXXFLAGS=-O2 -fomit-frame-pointer",
    "libusb_CFLAGS=-I" + LIBUSB_INSTALL_DIR + "/include/libusb-1.0",
    "libusb_LIBS=-L" + LIBUSB_INSTALL_DIR + "/lib -lusb-1.0",
    "LIBUSB1_CFLAGS=-I" + LIBUSB_INSTALL_DIR + "/include/libusb-1.0", # LIBUSB1_CFLAGS et libusb_CFLAGS sont nécessaires !!!!!
    "LIBUSB1_LIBS=-L" + LIBUSB_INSTALL_DIR + "/lib -lusb-1.0"  # LIBUSB1_LIBS et libusb_LIBS sont nécessaires !!!!!
  ]
  if platform.system () == "Darwin" :
    OPENOCD_CONFIGURE_COMMAND += [
      "LDFLAGS=-framework Foundation -framework IOKit"
    ]
  runCommand (OPENOCD_CONFIGURE_COMMAND)
  runCommand (["make", "all", "-j" + processorCount ()])
  runCommand (["make", "install"])
  myChDir (scriptDir)
  myDeleteDir ("build-openocd")
  myDeleteDir (OPENOCD)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- TEENSY LOADER
print bcolors.BOLD_GREEN + "-------------- TEENSY LOADER" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/teensy-loader-cli"):
  BUILD_TEENSY_LOADER_COMMAND = [
    "gcc",
    "-O2",
    "-fomit-frame-pointer",
    "-I", LIBUSB_INSTALL_DIR + "/include/libusb-1.0",
    ARCHIVE_DIR + "/teensy-loader-cli.c",
  ]
  if  platform.system () == "Darwin" :
    BUILD_TEENSY_LOADER_COMMAND += [
      LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.a",
      "-framework", "Foundation",
      "-framework", "IOKit"
    ]
  else:
    BUILD_TEENSY_LOADER_COMMAND += [
      "-L" + LIBUSB_INSTALL_DIR + "/lib", "-lusb-1.0"
    ]
  BUILD_TEENSY_LOADER_COMMAND += ["-o", INSTALL_DIR + "/bin/teensy-loader-cli"]
  runCommand (BUILD_TEENSY_LOADER_COMMAND)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- ARM STACK COMPUTATIONS
print bcolors.BOLD_GREEN + "-------------- ARM STACK COMPUTATIONS" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/arm-stack-computations"):
  BUILD_ARM_STACK_COMPUTATIONS_COMMAND = [
    "g++", # os.path.abspath (GCC_OSX_INSTALL_DIR + "/bin/g++-" + GCC_VERSION),
    "-ffunction-sections",
    "-fdata-sections",
    "-O2",
    "-fomit-frame-pointer",
    "-std=c++11",
    "FILES/arm-stack-computations.cpp",
  ]
  if  platform.system () == "Darwin" :
    BUILD_ARM_STACK_COMPUTATIONS_COMMAND += [
      "-framework", "Foundation",
      "-framework", "IOKit"
    ]
  BUILD_ARM_STACK_COMPUTATIONS_COMMAND += ["-o", INSTALL_DIR + "/bin/arm-stack-computations"]
  runCommand (BUILD_ARM_STACK_COMPUTATIONS_COMMAND)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- MANIFEST
print bcolors.BOLD_GREEN + "-------------- MANIFEST" + bcolors.ENDC
if not os.path.exists (PRODUCT_DIR):
  runCommand (["mkdir", PRODUCT_DIR])
if not os.path.exists (PRODUCT_DIR + "/" + PRODUCT_NAME + ".txt"):
  with open (INSTALL_DIR + "/contents.txt", "w") as file :
    s  = "CLANG-LLVM " + LLVM_VERSION
    s += ", BINUTILS " + BINUTILS_VERSION
    s += ", LIBUSB " + LIBUSB_VERSION
    file.write (s)
  runCommand (["cp", INSTALL_DIR + "/contents.txt", PRODUCT_DIR + "/" + PRODUCT_NAME + ".txt"])
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- Remove useless dirs
print bcolors.BOLD_GREEN + "-------------- Remove useless dirs" + bcolors.ENDC
myDeleteDir (PRODUCT_NAME + "/arm-eabi/")
myDeleteDir (PRODUCT_NAME + "/docs")
myDeleteDir (PRODUCT_NAME + "/include")
myDeleteDir (PRODUCT_NAME + "/lib")
myDeleteDir (PRODUCT_NAME + "/share")
#--------------------------------------------------------------------------- LIBGCC
print bcolors.BOLD_GREEN + "-------------- LIBGCC" + bcolors.ENDC
LIB_DIR = PRODUCT_NAME + "/libgcc"
librairies = ["libgcc-armv7e-m.a", "libgcc-armv4.a"]
runCommand (["mkdir", "-p", LIB_DIR])
for lib in librairies:
  libpath = LIB_DIR + "/" + lib
  if not os.path.exists (libpath):
    runCommand (["cp", "FILES/" + lib, libpath])
runCommand (["cp", "-r", "FILES/openocd-boards", PRODUCT_NAME])
runCommand (["cp", "-r", "FILES/openocd-interfaces", PRODUCT_NAME])
#--------------------------------------------------------------------------- PRODUCT
print bcolors.BOLD_GREEN + "-------------- PRODUCT" + bcolors.ENDC
if not os.path.exists (PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"):
  runCommand (["tar", "cf", PRODUCT_NAME + ".tar", PRODUCT_NAME])
  runCommand (["bzip2", "-9", PRODUCT_NAME + ".tar"])
  runCommand (["mv", PRODUCT_NAME + ".tar.bz2", PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"])
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- Check teensy-loader
print bcolors.BOLD_GREEN + "-------------- Check teensy-loader-cli" + bcolors.ENDC
if  platform.system () == "Darwin" :
  runCommand (["otool", "-L", INSTALL_DIR + "/bin/teensy-loader-cli"])
else:
  runCommand (["ldd", INSTALL_DIR + "/bin/teensy-loader-cli"])
#--------------------------------------------------------------------------- Check openocd
print bcolors.BOLD_GREEN + "-------------- Check openocd" + bcolors.ENDC
if  platform.system () == "Darwin" :
  runCommand (["otool", "-L", INSTALL_DIR + "/bin/openocd"])
else:
  runCommand (["ldd", INSTALL_DIR + "/bin/openocd"])
#--------------------------------------------------------------------------- Check arm-stack-computations
print bcolors.BOLD_GREEN + "-------------- Check arm-stack-computations" + bcolors.ENDC
if  platform.system () == "Darwin" :
  runCommand (["otool", "-L", INSTALL_DIR + "/bin/arm-stack-computations"])
else:
  runCommand (["ldd", INSTALL_DIR + "/bin/arm-stack-computations"])
#--------------------------------------------------------------------------- Done
print bcolors.BOLD_GREEN + "-------------- Success!" + bcolors.ENDC
displayDurationFromStartTime (startTime)

#———————————————————————————————————————————————————————————————————————————————
