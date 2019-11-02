#!/bin/sh
set -x
DIR=`dirname $0` &&
cd ${DIR} &&
~/omnibus-tools/omnibus-Darwin-i386-llvm-9.0.0-binutils-2.32-openocd-0.10.0-libusb-1.0.23/bin/clang --target=armv7-none--eabi -mcpu=cortex-m4 -O0 -fomit-frame-pointer -fshort-enums -Wall -fno-rtti -fno-exceptions -emit-llvm -S classes.cpp -o classes.cpp.ll &&
~/omnibus-tools/omnibus-Darwin-i386-llvm-9.0.0-binutils-2.32-openocd-0.10.0-libusb-1.0.23/bin/clang --target=armv7-none--eabi -mcpu=cortex-m4 -O0 -fomit-frame-pointer -fshort-enums -Wall -fno-rtti -fno-exceptions -S classes.cpp -o classes.cpp.s
echo "------------ SUCCESS ----------------------------"
