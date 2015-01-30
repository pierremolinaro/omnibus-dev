#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os
import urllib
import platform, subprocess, re
import multiprocessing

#----------------------------------------------------------------------------------------------------------------------*
#   ARCHIVE DOWNLOAD                                                                                                   *
#----------------------------------------------------------------------------------------------------------------------*

def downloadReportHook (a,b,fileSize): 
  # ',' at the end of the line is important!
  if fileSize < (1 << 10):
    sizeString = str (fileSize) + " "
  else:
    if fileSize < (1 << 20):
      sizeString = str (fileSize >> 10) + " Ki"
    else:
      sizeString = str (fileSize >> 20) + " Mi"
  print "% 3.1f %% of %s bytes\r" % (min(100.0, float(a * b) / fileSize * 100.0), sizeString),
  sys.stdout.flush()

#----------------------------------------------------------------------------------------------------------------------*

def downloadArchive (archiveURL, archivePath): 
  if not os.path.exists (archivePath):
    print "+Download " + os.path.basename (archivePath)
    urllib.urlretrieve (archiveURL,  archivePath, downloadReportHook)
    print ""

#----------------------------------------------------------------------------------------------------------------------*
#   RUN COMMAND                                                                                                        *
#----------------------------------------------------------------------------------------------------------------------*

def runCommand (cmd) :
  print "+ " + cmd
  childProcess = subprocess.Popen (cmd.split ())
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*
#   GET PROCESSOR NAME                                                                                                 *
#----------------------------------------------------------------------------------------------------------------------*
# http://stackoverflow.com/questions/4842448/getting-processor-information-in-python

def get_processor_name():
  if platform.system() == "Windows":
    return platform.processor()
  elif platform.system() == "Darwin":
    import os
    os.environ['PATH'] = os.environ['PATH'] + os.pathsep + '/usr/sbin'
    command ="sysctl -n machdep.cpu.brand_string"
    return subprocess.check_output(command).strip()
  elif platform.system() == "Linux":
    command = "cat /proc/cpuinfo"
    all_info = subprocess.check_output(command, shell=True).strip()
    for line in all_info.split("\n"):
      if "model name" in line:
        return re.sub( ".*model name.*:", "", line,1)
  return ""

#----------------------------------------------------------------------------------------------------------------------*
#  MAIN                                                                                                                *
#----------------------------------------------------------------------------------------------------------------------*

#--- For accepted versions of GMP, MPC and MPFR,
#    see contrib/download_prerequisites file in GCC source directory
GCC_VERSION  = "4.9.2"
GMP_VERSION  = "4.3.2"
MPC_VERSION  = "0.8.1"
MPFR_VERSION = "2.4.2"
#---
BINUTILS_VERSION = "2.24"
LIBUSB_VERSION   = "1.0.19"
NEWLIB_VERSION   = "2.0.0"
#--------------------------------------------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--------------------------------------------------------------------------- Product
(SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()
#print "'" + SYSTEM_NAME + "' '" + MODE_NAME + "' '" + RELEASE + "' '" + VERSION + "' '" + MACHINE
#print "SYSTEM_NAME '" + SYSTEM_NAME + "'"
#print "MACHINE '" + MACHINE + "'"
# https://docs.python.org/2/library/multiprocessing.html
PROCESSOR_COUNT = str (multiprocessing.cpu_count())
#print "PROCESSOR_COUNT '" + PROCESSOR_COUNT + "'"
PRODUCT_NAME = "teensy-" + MACHINE + "-" + SYSTEM_NAME + "-arm-gcc-" + GCC_VERSION
INSTALL_DIR = scriptDir + "/" + PRODUCT_NAME
#--------------------------------------------------------------------------- Archive directory
ARCHIVE_RELATIVE_DIR = "../archives-for-cross-compilation"
ARCHIVE_DIR = os.path.abspath (scriptDir + "/" + ARCHIVE_RELATIVE_DIR) + "/"
if not os.path.exists (ARCHIVE_DIR):
  os.mkdir (ARCHIVE_DIR)
#print "ARCHIVE_DIR " + ARCHIVE_DIR
#--------------------------------------------------------------------------- Archives
BINUTILS = "binutils-" + BINUTILS_VERSION
BINUTILS_ARCHIVE_PATH = ARCHIVE_DIR + BINUTILS + ".tar.bz2"
LIBUSB = "libusb-" + LIBUSB_VERSION
LIBUSB_ARCHIVE_PATH = ARCHIVE_DIR + LIBUSB + ".tar.bz2"
GCC = "gcc-" + GCC_VERSION
GCC_ARCHIVE_PATH = ARCHIVE_DIR + GCC + ".tar.bz2"
GMP = "gmp-" + GMP_VERSION
GMP_ARCHIVE_PATH = ARCHIVE_DIR + GMP + ".tar.bz2"
MPFR = "mpfr-" + MPFR_VERSION
MPFR_ARCHIVE_PATH = ARCHIVE_DIR + MPFR + ".tar.bz2"
MPC    = "mpc-" + MPC_VERSION
MPC_ARCHIVE_PATH = ARCHIVE_DIR + MPC + ".tar.gz"
NEWLIB = "newlib-" + NEWLIB_VERSION
NEWLIB_ARCHIVE_PATH = ARCHIVE_DIR + NEWLIB + ".tar.gz"
#--------------------------------------------------------------------------- Download
print "-------------- Download archives"
downloadArchive ("http://sourceforge.net/projects/libusb/files/libusb-1.0/" + LIBUSB + "/" + LIBUSB + ".tar.bz2", LIBUSB_ARCHIVE_PATH)
downloadArchive ("ftp://ftp.gnu.org/gnu/binutils/" + BINUTILS + ".tar.bz2", BINUTILS_ARCHIVE_PATH)
downloadArchive ("ftp://ftp.gnu.org/gnu/gcc/" + GCC + "/" + GCC + ".tar.bz2", GCC_ARCHIVE_PATH)
downloadArchive ("ftp://ftp.gnu.org/gnu/gmp/" + GMP + ".tar.bz2", GMP_ARCHIVE_PATH)
downloadArchive ("ftp://ftp.gnu.org/gnu/mpfr/" + MPFR + ".tar.bz2", MPFR_ARCHIVE_PATH)
downloadArchive ("http://www.multiprecision.org/mpc/download/" + MPC + ".tar.gz", MPC_ARCHIVE_PATH)
downloadArchive ("ftp://sources.redhat.com/pub/newlib/" + NEWLIB + ".tar.gz", NEWLIB_ARCHIVE_PATH)
#--------------------------------------------------------------------------- binutils
print "-------------- binutils"
if not os.path.exists (INSTALL_DIR + "/bin/arm-eabi-ar"):
  runCommand ("rm -f " + BINUTILS + ".tar")
  runCommand ("rm -fr " + INSTALL_DIR)
  runCommand ("mkdir -p " + INSTALL_DIR)
  runCommand ("rm -fr build-binutils " + BINUTILS)
  runCommand ("bunzip2 -k " + ARCHIVE_RELATIVE_DIR + "/" + BINUTILS + ".tar.bz2")
  runCommand ("mv " + ARCHIVE_RELATIVE_DIR + "/" + BINUTILS + ".tar " + BINUTILS + ".tar")
  runCommand ("tar xf " + BINUTILS + ".tar")
  runCommand ("rm " + BINUTILS + ".tar")
  runCommand ("patch " + BINUTILS + "/bfd/elf32-arm.c sources/patch-bfd-elf32-arm.patch.txt")
  runCommand ("mkdir build-binutils")
  os.chdir (scriptDir + "/build-binutils")
  runCommand ("../" + BINUTILS + "/configure --help")
  BINUTILS_CONFIGURE_OPTIONS = "--prefix=" + INSTALL_DIR
  BINUTILS_CONFIGURE_OPTIONS += " --target=arm-eabi"
  BINUTILS_CONFIGURE_OPTIONS += " --enable-interwork"
  BINUTILS_CONFIGURE_OPTIONS += " --enable-multilib"
  BINUTILS_CONFIGURE_OPTIONS += " --disable-werror"
  runCommand ("../" + BINUTILS + "/configure " + BINUTILS_CONFIGURE_OPTIONS)
  runCommand ("make all -j " + PROCESSOR_COUNT)
  runCommand ("make install")
  os.chdir (scriptDir)
  runCommand ("rm -fr build-binutils " + BINUTILS)
#--------------------------------------------------------------------------- GCC
print "-------------- GCC"
if not os.path.exists (INSTALL_DIR + "/bin/arm-eabi-gcc"):
  runCommand ("rm -f " + GCC + ".tar")
  runCommand ("rm -fr build-gcc " + GCC)
  runCommand ("bunzip2 -k " + ARCHIVE_RELATIVE_DIR + "/" + GCC + ".tar.bz2")
  runCommand ("mv " + ARCHIVE_RELATIVE_DIR + "/" + GCC + ".tar " + GCC + ".tar")
  runCommand ("tar xf " + GCC + ".tar")
  runCommand ("rm " + GCC + ".tar")
  runCommand ("rm -fr " + GCC + "/libstdc++-v3")
  #--- NEWLIB
  runCommand ("cp " + NEWLIB_ARCHIVE_PATH + " " + NEWLIB + ".tar.gz")
  runCommand ("gunzip " + NEWLIB + ".tar.gz")
  runCommand ("tar xf " + NEWLIB + ".tar")
  runCommand ("rm " + NEWLIB + ".tar")
  runCommand ("mv " + NEWLIB + "/newlib " + GCC)
  runCommand ("mv " + NEWLIB + "/libgloss " + GCC)
  runCommand ("rm -r " + NEWLIB)
  #--- GMP
  runCommand ("bunzip2 -k " + ARCHIVE_RELATIVE_DIR + "/" + GMP + ".tar.bz2")
  runCommand ("mv " + ARCHIVE_RELATIVE_DIR + "/" + GMP + ".tar " + GMP + ".tar")
  runCommand ("tar xf " + GMP + ".tar")
  runCommand ("rm " + GMP + ".tar")
  runCommand ("mv " + GMP + " " + GCC + "/gmp")
  #--- MPFR
  runCommand ("bunzip2 -k " + ARCHIVE_RELATIVE_DIR + "/" + MPFR + ".tar.bz2")
  runCommand ("mv " + ARCHIVE_RELATIVE_DIR + "/" + MPFR + ".tar " + MPFR + ".tar")
  runCommand ("tar xf " + MPFR + ".tar")
  runCommand ("rm " + MPFR + ".tar")
  runCommand ("mv " + MPFR + " " + GCC + "/mpfr")
  #--- MPC
  runCommand ("cp " + MPC_ARCHIVE_PATH + " " + MPC + ".tar.gz")
  runCommand ("gunzip " + MPC + ".tar.gz")
  runCommand ("tar xf " + MPC + ".tar")
  runCommand ("rm " + MPC + ".tar")
  runCommand ("mv " + MPC + " " + GCC + "/mpc")
  #--- Patch GCC
  runCommand ("patch " + GCC + "/gcc/config/arm/t-arm-elf sources/t-arm-elf.patch.txt")
  #--- Build GCC
  runCommand ("mkdir build-gcc")
  os.chdir (scriptDir + "/build-gcc")
  runCommand ("../" + GCC + "/configure --help")
  GCC_CONFIGURE_OPTIONS = "--prefix=" + INSTALL_DIR
  GCC_CONFIGURE_OPTIONS += " --target=arm-eabi"
  GCC_CONFIGURE_OPTIONS += " --with-newlib"
  GCC_CONFIGURE_OPTIONS += " --enable-languages=c"
  GCC_CONFIGURE_OPTIONS += " --disable-libssp"
  GCC_CONFIGURE_OPTIONS += " --disable-zlib"
  GCC_CONFIGURE_OPTIONS += " --disable-werror"
  GCC_CONFIGURE_OPTIONS += " --enable-interwork"
  GCC_CONFIGURE_OPTIONS += " --enable-multilib"
  GCC_CONFIGURE_OPTIONS += " --disable-shared"
  GCC_CONFIGURE_OPTIONS += " --disable-nls"
  GCC_CONFIGURE_OPTIONS += " --disable-tls"
  GCC_CONFIGURE_OPTIONS += " --disable-rdi"
  GCC_CONFIGURE_OPTIONS += " --without-headers"
  # http://balau82.wordpress.com/2010/12/16/using-newlib-in-arm-bare-metal-programs/
  GCC_CONFIGURE_OPTIONS += " --disable-newlib-supplied-syscalls"
  runCommand ("../" + GCC + "/configure " + GCC_CONFIGURE_OPTIONS)
  runCommand ("make all -j " + PROCESSOR_COUNT)
  runCommand ("make install")
  os.chdir (scriptDir)
  runCommand ("rm -fr build-gcc " + GCC)
#--------------------------------------------------------------------------- LIBUSB
print "-------------- LIBUSB"
if not os.path.exists (INSTALL_DIR + "/lib/libusb-1.0.a"):
  runCommand ("rm -f " + LIBUSB + ".tar")
  runCommand ("rm -fr build-libusb " + LIBUSB)
  runCommand ("bunzip2 -k " + ARCHIVE_RELATIVE_DIR + "/" + LIBUSB + ".tar.bz2")
  runCommand ("mv " + ARCHIVE_RELATIVE_DIR + "/" + LIBUSB + ".tar " + LIBUSB + ".tar")
  runCommand ("tar xf " + LIBUSB + ".tar")
  runCommand ("rm " + LIBUSB + ".tar")
  runCommand ("mkdir build-libusb")
  os.chdir (scriptDir + "/build-libusb")
  runCommand ("../" + LIBUSB + "/configure --help")
  LIBUSB_CONFIGURE_OPTIONS = "--prefix=" + INSTALL_DIR
  runCommand ("../" + LIBUSB + "/configure " + LIBUSB_CONFIGURE_OPTIONS)
  runCommand ("make all -j " + PROCESSOR_COUNT)
  runCommand ("make install")
  os.chdir (scriptDir)
  runCommand ("rm -fr build-libusb " + LIBUSB)
#--------------------------------------------------------------------------- TEENSY LOADER
print "-------------- TEENSY LOADER"
if not os.path.exists (INSTALL_DIR + "/bin/teensy-loader-cli"):
  BUILD_TEENSY_LOADER_CLI_OPTIONS = "-O2"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -fomit-frame-pointer"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -DUSE_LIBUSB"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -I " + INSTALL_DIR + "/include/libusb-1.0"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " sources/" + MACHINE + "-" + SYSTEM_NAME + "-teensy-loader-cli.c"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -o " + INSTALL_DIR + "/bin/teensy-loader-cli"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -L " + INSTALL_DIR + "/lib"
  BUILD_TEENSY_LOADER_CLI_OPTIONS += " -lusb-1.0"
  runCommand ("gcc " + BUILD_TEENSY_LOADER_CLI_OPTIONS)
#--------------------------------------------------------------------------- PRODUCT
print "-------------- PRODUCT"
if not os.path.exists (INSTALL_DIR + ".tar.bz2"):
  runCommand ("tar cf " + PRODUCT_NAME + ".tar " + PRODUCT_NAME)
  runCommand ("bzip2 -9 " + PRODUCT_NAME + ".tar")
#--------------------------------------------------------------------------- MANIFEST
print "-------------- MANIFEST"
if not os.path.exists (PRODUCT_NAME + ".txt"):
  with open (PRODUCT_NAME + ".txt", "w") as file :
    s = "BINUTILS " + BINUTILS_VERSION
    s += ", GCC " + GCC_VERSION
    s += ", NEWLIB " + NEWLIB_VERSION
    s += ", GMP " + GMP_VERSION
    s += ", MPC " + MPC_VERSION
    s += ", MFR " + MPFR_VERSION
    s += ", LIBUSB " + LIBUSB_VERSION
    file.write (s)
#--------------------------------------------------------------------------- Done
print "-------------- Success!"

#----------------------------------------------------------------------------------------------------------------------*
