echo ��������VS2010�����в���Ҫ���ļ� 
echo ��ȷ�����ļ������ڹ���Ŀ¼֮�в��ر�VS2010 
echo ��ʼ�������Ե�......
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
echo ����sdf�ļ� del /q/a/f/s *.sdf
echo ����ipch�ļ� del /q/a/f/s ipch\*.*
echo ����Debug�ļ� del /q/a/f/s Debug\*.obj
del /q/a/f/s Debug\*.tlog
del /q/a/f/s Debug\*.log
del /q/a/f/s Debug\*.idb
del /q/a/f/s Debug\*.pdb
del /q/a/f/s Debug\*.ilk
del /q/a/f/s Release\*.pch
echo ����Temp�ļ� del /q/a/f/s Temp\*.* 
ECHO �ļ�������ϣ���������3����˳������ڽ��뵹��ʱ......... 
@echo off 
REM echo WScript.Sleep 3000 > %temp%.\tmp$$$.vbs set /a i =3 :Timeout if %i% == 0 
REM goto Next setlocal set /a i = %i% - 1 
REM echo ����ʱ����%i% 
REM cscript //nologo %temp%.\tmp$$$.vbs 
REM goto Timeout goto End :Next cls & echo.
pause