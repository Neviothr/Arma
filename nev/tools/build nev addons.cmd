@echo off
setlocal enabledelayedexpansion

set armakeEXE="C:\Users\Admin\Desktop\armake2.exe"
set privateKey="E:\x\nev\keys\nev.biprivatekey"

for /d %%f in (E:\x\nev\addons\*) do (

	set sourceFolder=%%f
	set pboName=!sourceFolder:E:\x\nev\addons\=!
	set targetPath="E:\Steam\SteamApps\common\Arma 3\@nev\addons\nev_!pboName!.pbo"
	
	echo Building - !pboName!
	!armakeEXE! build -v -f -w "unquoted-string" -i "E:\x" "!sourceFolder!" !targetPath!
	
	echo Signing - !pboName!
	!armakeEXE! sign -v -f !privateKey! !targetPath!
	
	echo.
)

pause