echo 正在清理VS2010工程中不需要的文件 
echo 请确保本文件放置在工程目录之中并关闭VS2010 
echo 开始清理请稍等......
for %%p in ("%cd%") do set folder=%%~nxp 
echo %folder% 
del /q/a/f/s %folder%\debug\*.sdf 
del /q/a/f/s %folder%\debug\*.obj 
del /q/a/f/s %folder%\debug\*.pdb 
del /q/a/f/s %folder%\debug\*.pch 
del /q/a/f/s %folder%\debug\*.idb
del /q/a/f/s %folder%\release\*.sdf
del /q/a/f/s %folder%\release\*.obj
del /q/a/f/s %folder%\release\*.pdb
del /q/a/f/s %folder%\release\*.pch
del /q/a/f/s %folder%\release\*.idb
echo 清理sdf文件 del /q/a/f/s *.sdf
echo 清理ipch文件 del /q/a/f/s ipch\*.*
echo 清理Debug文件 del /q/a/f/s Debug\*.obj
del /q/a/f/s Debug\*.tlog
del /q/a/f/s Debug\*.log
del /q/a/f/s Debug\*.idb
del /q/a/f/s Debug\*.pdb
del /q/a/f/s Debug\*.ilk
del /q/a/f/s Release\*.pch
echo 清理Temp文件 del /q/a/f/s Temp\*.* 
ECHO 文件清理完毕！本程序将在3秒后退出！现在进入倒计时......... 
@echo off 
REM echo WScript.Sleep 3000 > %temp%.\tmp$$$.vbs set /a i =3 :Timeout if %i% == 0 
REM goto Next setlocal set /a i = %i% - 1 
REM echo 倒计时……%i% 
REM cscript //nologo %temp%.\tmp$$$.vbs 
REM goto Timeout goto End :Next cls & echo.
pause