@echo off
rd "E:\GitHub Projects\Arma\x\nev\addons" /s /q
mkdir "E:\GitHub Projects\Arma\x\nev\addons"
xcopy "E:\x\nev" "E:\GitHub Projects\Arma\x\nev\" /e

:choice
set /P c=Open GitHub Desktop [Enter / N]?
@echo on
if /I "%c%" EQU "Y" goto :open_github
if /I "%c%" EQU "N" goto :exit

@echo off
:open_github
start C:\Users\Admin\AppData\Local\GitHubDesktop\GitHubDesktop.exe

:exit
exit
