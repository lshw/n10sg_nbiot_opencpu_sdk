#!/bin/bash

if ! [ "`grep  -e ^8 -e ^9 /etc/debian_version`" ] ; then
 echo compile need debian8/debian9 system
 exit
fi

if ! [ "`which arm-none-eabi-gcc`" ] ; then
 apt install gcc-arm-none-eabi make
fi
echo Making DBRN Version
echo HWVER :=DBRN >utils/config.mk
echo LINK_FILE:=link_option_cm.tmp >> utils/config.mk
make all
cp utils/flash_download.cfg utils/mt2625_bootloader.bin firmware/DBRN
echo outdir: firmware/DBRN
ls firmware/DBRN -l
