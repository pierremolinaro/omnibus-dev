#!/bin/sh
set -x
DIR=`dirname $0` &&
GCC_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-gcc -O2 -mcpu=arm7tdmi-s -fomit-frame-pointer" &&
SIZE_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-size -t" &&
OBJDUMP_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-objdump -d" &&
#-----------------
${GCC_ARM} ${DIR}/generation-memcpy.c -c -o ${DIR}/generation-memcpy.o &&
${SIZE_ARM} ${DIR}/generation-memcpy.o &&
${OBJDUMP_ARM} ${DIR}/generation-memcpy.o &&
#-----------------
#-----------------
echo "------------ SUCCESS ----------------------------"
