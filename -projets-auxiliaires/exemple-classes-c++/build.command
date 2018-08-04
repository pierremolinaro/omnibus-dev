#!/bin/sh
set -x
DIR=`dirname $0` &&
cd ${DIR} &&
/Users/pierremolinaro/plm-tools/plm-Darwin-i386-llvm-6.0.1-binutils-2.31.1-openocd-0.10.0-libusb-1.0.22/bin/clang --target=armv7-none--eabi -mcpu=cortex-m4 -O0 -fomit-frame-pointer -fshort-enums -Wall -fno-rtti -fno-exceptions -emit-llvm -S classes.cpp -o classes.cpp.ll
echo "------------ SUCCESS ----------------------------"
