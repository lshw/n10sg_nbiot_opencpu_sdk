::created by xgl,2019/1/24
@set temp_path=%path%
@set path=%path%;%~dp0\utils
@set param1=%1
@if NOT "%param1%" == "DBRN" if not "%param1%" == "CLEAN" (goto error1)
@if %param1% == DBRN (goto make_dbrn) 
@if %param1% == CLEAN (goto make_clean) 

:error1
@echo usage:build.bat param
@echo 	DBRN:compile DBRN binary
@echo 	CLEAN:clean the project
@goto exit1
:make_dbrn
@if  exist %~dp0\firmware\DBRN (goto cr4)
@md %~dp0\firmware\DBRN
@xcopy /y %~dp0\utils\flash_download.cfg %~dp0\firmware\DBRN >nul
@xcopy /y %~dp0\utils\mt2625_bootloader.bin %~dp0\firmware\DBRN  >nul
:cr4
@echo Making DBRN Version
@echo HWVER :=DBRN > %~dp0\utils\config.mk
@echo LINK_FILE:=link_option_cm.tmp >> %~dp0\utils\config.mk
@make
@goto exit1
:make_clean
@make  clean
@set path=%temp_path%
:exit1







