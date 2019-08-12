#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
# This script cross compiles binutils and LLVM/CLANG for ARM targets.
# It also compiles OpenOCD, TeensyLoader and ARM STACK COMPUTATIONS
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#  SETTINGS
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

LLVM_VERSION = "8.0.1"
LLVM_SUFFIX = ""

BINUTILS_VERSION = "2.32"

LIBUSB_VERSION   = "1.0.22"

OPENOCD_VERSION = "0.10.0"

XZ_VERSION = "5.2.4"

CMAKE_VERSION = "3.11.4" # "3.9.0"

#--------------------------------------- Target
TARGET = "arm-eabi"
LLVM_TARGET_TO_BUILD = "ARM"

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   Imports
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import time
import subprocess, sys, os
import shutil
import subprocess
import platform

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   Directories
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
ARCHIVE_DIR = os.path.abspath (scriptDir + "/+archives-for-cross-compilation")
UTILITY_DIR = os.path.abspath (scriptDir + "/+utilities")

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   processorCount
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

def processorCount () :
  if sys.version_info >= (2, 6) :
    import multiprocessing
    coreCount = str (multiprocessing.cpu_count () + 1)
  else:
    coreCount = "1"
  return coreCount

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   FOR PRINTING IN COLOR
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

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

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   myChDir
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

def myChDir (dir):
  print bcolors.BOLD_BLUE + "+ chdir " + dir + bcolors.ENDC
  os.chdir (dir)

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   COPY TREE
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
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

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   myDeleteDir
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
# http://unix.stackexchange.com/questions/77127/rm-rf-all-files-and-all-hidden-files-without-error
# http://unix.stackexchange.com/questions/233576/recursively-delete-subdirectories-not-containing-pattern-on-osx

def myDeleteDir (dir):
  while os.path.exists (dir):
    print bcolors.BOLD_BLUE + "+ remove '" + dir + "' directory" + bcolors.ENDC
    shutil.rmtree (dir, True) # Ignore errors

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   runCommand
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

def runCommand (cmd, environnement=None) :
  str = "+"
  for s in cmd:
    str += " " + s
  print bcolors.BOLD_BLUE + str + bcolors.ENDC
  childProcess = subprocess.Popen (cmd, env=environnement)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   ARCHIVE DOWNLOAD
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

def downloadArchive (archiveURL, archivePath, startTime):
  if not os.path.exists (archivePath):
    print bcolors.BOLD_BLUE + "+Download " + os.path.basename (archivePath) + bcolors.ENDC
    print "URL '" + archiveURL + "'"
    runCommand (["curl", "-L", archiveURL, "-o", archivePath])

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#   displayDurationFromStartTime
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

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

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
#  build
#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

startTime = time.time ()
#--------------------------------------------------------------------------- Get script absolute path
myChDir (scriptDir)
#--------------------------------------------------------------------------- Product
(SYSTEM_NAME, MODE_NAME, SYSTEM_RELEASE, SYSTEM_VERSION, MACHINE) = os.uname ()
if SYSTEM_NAME == "Darwin":
  MACHINE = "i386"
PRODUCT_NAME = "omnibus-" + SYSTEM_NAME + "-" + MACHINE
PRODUCT_NAME += "-llvm-" + LLVM_VERSION + LLVM_SUFFIX
PRODUCT_NAME += "-binutils-" + BINUTILS_VERSION
PRODUCT_NAME += "-openocd-" + OPENOCD_VERSION
PRODUCT_NAME += "-libusb-" + LIBUSB_VERSION
INSTALL_DIR = scriptDir + "/" + PRODUCT_NAME
PRODUCT_DIR = scriptDir + "/PRODUCT"
runCommand (["mkdir", "-p", ARCHIVE_DIR])
#--------------------------------------------------------------------------- BINUTILS archives
BINUTILS = "binutils-" + BINUTILS_VERSION
BINUTILS_ARCHIVE_PATH = ARCHIVE_DIR + "/" + BINUTILS + ".tar.bz2"
downloadArchive ("ftp://ftp.gnu.org/gnu/binutils/" + BINUTILS + ".tar.bz2", BINUTILS_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- LIBUSB archives
LIBUSB = "libusb-" + LIBUSB_VERSION
LIBUSB_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LIBUSB + ".tar.bz2"
downloadArchive ("http://sourceforge.net/projects/libusb/files/libusb-1.0/" + LIBUSB + "/" + LIBUSB + ".tar.bz2", LIBUSB_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- XZ archives
XZ = "xz-" + XZ_VERSION
XZ_ARCHIVE_PATH = ARCHIVE_DIR + "/" + XZ + ".tar.bz2"
downloadArchive ("https://sourceforge.net/projects/lzmautils/files/" + XZ + ".tar.bz2/download", XZ_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- LLVM archives
LLVM = "llvm-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
LLVM_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LLVM + ".tar.xz"
CLANG = "cfe-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
CLANG_ARCHIVE_PATH = ARCHIVE_DIR + "/" + CLANG + ".tar.xz"
# LLD = "lld-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
# LLD_ARCHIVE_PATH = ARCHIVE_DIR + "/" + LLD + ".tar.xz"
# COMPILER_RT = "compiler-rt-" + LLVM_VERSION + LLVM_SUFFIX + ".src"
# COMPILER_RT_ARCHIVE_PATH = ARCHIVE_DIR + "/" + COMPILER_RT + ".tar.xz"
#--- Téléchargement : la base des URL des archives LLVM change régulièrement !
if (LLVM_VERSION == "8.0.1") or (LLVM_VERSION == "7.1.0") :
  BASE_URL = "https://github.com/llvm/llvm-project/releases/download/llvmorg-"
elif (LLVM_VERSION == "8.0.0") or (LLVM_VERSION == "7.0.1") or (LLVM_VERSION == "7.0.0") :
  BASE_URL = "http://releases.llvm.org/"
else:
  print (bcolors.BOLD_RED + "Verion " + LLVM_VERSION + " non prise en charge" + bcolors.ENDC)
  sys.exit (1)
LLVM_URL = BASE_URL + LLVM_VERSION + "/" + LLVM + ".tar.xz"
CLANG_URL = BASE_URL + LLVM_VERSION + "/" + CLANG + ".tar.xz"
#   LLD_URL = BASE_URL + LLVM_VERSION + "/" + LLD + ".tar.xz"
#   COMPILER_RT_URL = BASE_URL + LLVM_VERSION + "/" + COMPILER_RT + ".tar.xz"
print  bcolors.BOLD_GREEN + "-------------- Download archives" + bcolors.ENDC
downloadArchive (LLVM_URL, LLVM_ARCHIVE_PATH, startTime)
downloadArchive (CLANG_URL, CLANG_ARCHIVE_PATH, startTime)
# downloadArchive (LLD_URL, LLD_ARCHIVE_PATH, startTime)
# downloadArchive (COMPILER_RT_URL, COMPILER_RT_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- OPENOCD archives
OPENOCD = "openocd-" + OPENOCD_VERSION
OPENOCD_ARCHIVE_PATH = ARCHIVE_DIR + "/" + OPENOCD + ".tar.bz2"
downloadArchive ("http://sourceforge.net/projects/openocd/files/openocd/" + OPENOCD_VERSION + "/" + OPENOCD + ".tar.bz2", OPENOCD_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- CMAKE archives
CMAKE = "cmake-" + CMAKE_VERSION
CMAKE_ARCHIVE_PATH = ARCHIVE_DIR + "/" + CMAKE + ".tar.gz"
downloadArchive ("http://cmake.org/files/v" + os.path.splitext (CMAKE_VERSION)[0] + "/" + CMAKE + ".tar.gz", CMAKE_ARCHIVE_PATH, startTime)
#--------------------------------------------------------------------------- Teensy loader download
if not os.path.exists (ARCHIVE_DIR + "/teensy_loader_cli.c"):
  TEENSY_LOADER_ARCHIVE_URL = "https://github.com/PaulStoffregen/teensy_loader_cli/archive/master.zip"
  TEENSY_LOADER_ARCHIVE_PATH = ARCHIVE_DIR + "/teensy_loader_cli-master.zip"
  downloadArchive (TEENSY_LOADER_ARCHIVE_URL, TEENSY_LOADER_ARCHIVE_PATH, startTime)
  runCommand (["unzip", TEENSY_LOADER_ARCHIVE_PATH, "-d", ARCHIVE_DIR])
  runCommand (["rm", TEENSY_LOADER_ARCHIVE_PATH])
  runCommand (["cp", ARCHIVE_DIR + "/teensy_loader_cli-master/teensy_loader_cli.c", ARCHIVE_DIR + "/teensy_loader_cli.c"])
  runCommand (["rm", "-fr", ARCHIVE_DIR + "/teensy_loader_cli-master"])
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
  runCommand (["mkdir", "-p", UTILITY_DIR + "/bin"])
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
#   myDeleteDir (LLD)
#   runCommand (["cp", ARCHIVE_DIR + "/" + LLD + ".tar.xz", LLD + ".tar.xz"])
#   runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", LLD + ".tar.xz"])
#   runCommand (["tar", "xf", LLD + ".tar"])
#   runCommand (["rm", "-f", LLD + ".tar"])
#   runCommand (["mv", LLD, "lld"])
#   runCommand (["mv", "lld", LLVM + "/tools"])
  #--- Compiler-RT
#   myDeleteDir (COMPILER_RT)
#   runCommand (["cp", ARCHIVE_DIR + "/" + COMPILER_RT + ".tar.xz", COMPILER_RT + ".tar.xz"])
#   runCommand ([UTILITY_DIR + "/bin/xz", "--decompress", COMPILER_RT + ".tar.xz"])
#   runCommand (["tar", "xf", COMPILER_RT + ".tar"])
#   runCommand (["rm", "-f", COMPILER_RT + ".tar"])
#   runCommand (["mv", COMPILER_RT, "compiler-rt"])
#   runCommand (["mv", "compiler-rt", LLVM + "/tools"])
  #--- Build (http://releases.llvm.org/6.0.0/docs/CMake.html#cross-compiling)
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
    "-DLLVM_BUILD_EXTERNAL_COMPILER_RT=On",
    "../" + LLVM
  ]
  LLVM_CMAKE_ENVIRONMENT= {}
  runCommand (LLVM_CMAKE_COMMAND, LLVM_CMAKE_ENVIRONMENT)
  runCommand (["make", "all", "-j" + processorCount ()])
  runCommand (["make", "install"])
  myChDir (scriptDir)
  myDeleteDir ("build-llvm-clang")
  myDeleteDir (LLVM)
  displayDurationFromStartTime (startTime)
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
if not os.path.exists (INSTALL_DIR + "/bin/teensy_loader_cli"):
  BUILD_TEENSY_LOADER_COMMAND = [
    "gcc",
    "-O2",
    "-fomit-frame-pointer",
    "-I", LIBUSB_INSTALL_DIR + "/include/libusb-1.0",
    ARCHIVE_DIR + "/teensy_loader_cli.c",
  ]
  if  platform.system () == "Darwin" :
    BUILD_TEENSY_LOADER_COMMAND += [
      LIBUSB_INSTALL_DIR + "/lib/libusb-1.0.a",
      "-DUSE_APPLE_IOKIT",
      "-framework", "Foundation",
      "-framework", "IOKit"
    ]
  else:
    BUILD_TEENSY_LOADER_COMMAND += [
      "-L" + LIBUSB_INSTALL_DIR + "/lib", "-lusb-1.0"
    ]
  BUILD_TEENSY_LOADER_COMMAND += ["-o", INSTALL_DIR + "/bin/teensy_loader_cli"]
  runCommand (BUILD_TEENSY_LOADER_COMMAND)
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- ARM STACK COMPUTATIONS
print bcolors.BOLD_GREEN + "-------------- ARM STACK COMPUTATIONS" + bcolors.ENDC
if not os.path.exists (INSTALL_DIR + "/bin/arm-stack-computations"):
  BUILD_ARM_STACK_COMPUTATIONS_COMMAND = [
    "g++",
    "-ffunction-sections",
    "-fdata-sections",
    "-O2",
    "-fomit-frame-pointer",
    "-std=c++11",
    "+FILES/arm-stack-computations.cpp",
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
print bcolors.BOLD_GREEN + "-------------- OpenOCD files" + bcolors.ENDC
LIB_DIR = PRODUCT_NAME + "/libgcc"
librairies = ["libgcc-armv7e-m.a", "libgcc-armv4.a"]
runCommand (["mkdir", "-p", LIB_DIR])
for lib in librairies:
  libpath = LIB_DIR + "/" + lib
  if not os.path.exists (libpath):
    runCommand (["cp", "+FILES/" + lib, libpath])
runCommand (["cp", "-r", "+FILES/openocd-boards", PRODUCT_NAME])
runCommand (["cp", "-r", "+FILES/openocd-interfaces", PRODUCT_NAME])
#--------------------------------------------------------------------------- PRODUCT
print bcolors.BOLD_GREEN + "-------------- PRODUCT" + bcolors.ENDC
if not os.path.exists (PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"):
  runCommand (["tar", "cf", PRODUCT_NAME + ".tar", PRODUCT_NAME])
  runCommand (["bzip2", "-9", PRODUCT_NAME + ".tar"])
  runCommand (["mv", PRODUCT_NAME + ".tar.bz2", PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"])
  displayDurationFromStartTime (startTime)
#--------------------------------------------------------------------------- Check teensy-loader
print bcolors.BOLD_GREEN + "-------------- Check teensy_loader_cli" + bcolors.ENDC
if  platform.system () == "Darwin" :
  runCommand (["otool", "-L", INSTALL_DIR + "/bin/teensy_loader_cli"])
else:
  runCommand (["ldd", INSTALL_DIR + "/bin/teensy_loader_cli"])
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

#———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
