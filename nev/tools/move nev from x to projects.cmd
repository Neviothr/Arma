rd "E:\GitHub Projects\Arma\nev\addons" /s /q
mkdir "E:\GitHub Projects\Arma\nev\addons"
xcopy "E:\x\nev\addons" "E:\GitHub Projects\Arma\nev\addons" /e

:choice
@echo off
set /P c=Open GitHub Desktop[Y/N]?
@echo on
if /I "%c%" EQU "Y" goto :open_github
if /I "%c%" EQU "N" goto :exit

:open_github
start C:\Users\Admin\AppData\Local\GitHubDesktop\GitHubDesktop.exe

:exit
exit