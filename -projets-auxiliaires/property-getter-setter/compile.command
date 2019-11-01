#!/bin/sh

DIR=`dirname $0` &&
cd $DIR &&
~/omnibus-tools/omnibus-Darwin-i386-llvm-9.0.0-binutils-2.32-openocd-0.10.0-libusb-1.0.23/bin/opt -Oz -S src.ll -o src-opt.ll
