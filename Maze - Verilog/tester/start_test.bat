@echo off

pushd scripts

call D:\Apps\Xilinx_ISE\14.7\ISE_DS\settings64.bat
call clean.bat noref
call build.bat nodup
call run.bat nobuild nogui

popd

pause
