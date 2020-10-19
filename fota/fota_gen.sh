#!/bin/bash
#for FOTA firmware package generation
if ! [ -x 7z ] ; then
  apt-get install p7zip-full
fi
cur=$( dirname $0 )
mkdir -p $2
cp $1/nbiot_m2m_demo.bin $cur/$2/ROM.bin
cp $1/nbiot_m2m_demo.elf $cur/$2/ROM.elf
7z a -tzip $cur/$2/$2.zip  $cur/$2/ROM.* $cur/package.xml
rm $cur/$2/ROM.*
