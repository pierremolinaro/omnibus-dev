#!/bin/sh
set -x
DIR=`dirname $0` &&
GCC_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-gcc -Os -fomit-frame-pointer -Werror" &&
SIZE_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-size -t" &&
OBJDUMP_ARM="/usr/local/dev-arm/i386-Darwin-arm-gcc-4.9.0/bin/arm-eabi-objdump -d" &&
#-----------------
galgas -v --Werror ${DIR}/../+plm.galgasProject &&
${DIR}/../makefile-macosx/build.py &&
#-----------------
${DIR}/../makefile-macosx/plm -v ${DIR}/static-strings.plm &&
gcc -Werror ${DIR}/static-strings.plm.c -c -o ${DIR}/static-strings.plm.o &&
${GCC_ARM} ${DIR}/static-strings.plm.c -c -o ${DIR}/static-strings.plm.o &&
${SIZE_ARM} ${DIR}/static-strings.plm.o &&
${OBJDUMP_ARM} ${DIR}/static-strings.plm.o &&
#-----------------
${DIR}/../makefile-macosx/plm -v ${DIR}/constants.plm &&
gcc -Werror ${DIR}/constants.plm.c -c -o ${DIR}/constants.plm.o &&
${GCC_ARM} ${DIR}/constants.plm.c -c -o ${DIR}/constants.plm.o &&
${SIZE_ARM} ${DIR}/constants.plm.o &&
${OBJDUMP_ARM} ${DIR}/constants.plm.o &&
#-----------------
${DIR}/../makefile-macosx/plm -v ${DIR}/example.plm &&
gcc -Werror ${DIR}/example.plm.c -c -o ${DIR}/example.plm.o &&
${GCC_ARM} ${DIR}/example.plm.c -c -o ${DIR}/example.plm.o &&
${SIZE_ARM} ${DIR}/example.plm.o &&
${OBJDUMP_ARM} ${DIR}/example.plm.o &&
#-----------------
${DIR}/../makefile-macosx/plm -v ${DIR}/structures.plm &&
gcc -Werror ${DIR}/structures.plm.c -c -o ${DIR}/structures.plm.o &&
${GCC_ARM} ${DIR}/structures.plm.c -c -o ${DIR}/structures.plm.o &&
${SIZE_ARM} ${DIR}/structures.plm.o &&
${OBJDUMP_ARM} ${DIR}/structures.plm.o &&
#-----------------
echo "------------ SUCCESS ----------------------------"
