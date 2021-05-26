#!/bin/bash

readelf -s ./DBRNcustom_lib_md.a >sym/DBRNcustom_lib_md.a.list
readelf -s ./DBRNobj.a >sym/DBRNobj.a.list
readelf -s ./libhal_protected_CM4_GCC.a >sym/libhal_protected_CM4_GCC.a.list
readelf -s ./lib_md.a >sym/lib_md.a.list
readelf -s ./librsdl.a >sym/librsdl.a.list
readelf -s ./libtool_authentication_CM4_GCC.a >sym/libtool_authentication_CM4_GCC.a.list
