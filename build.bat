@echo off
rem Builds the folders to upload with Arma 3 Publisher: releases\@keko and releases\@keko_main.
cd /d "%~dp0"

set "KEKO_MAIN_BASE=D:\kellerkompanie-main\@keko_main"
set "HEMTT_OUT=.hemttout\release"

.\hemtt.exe release --no-archive
if errorlevel 1 goto failed

robocopy "%HEMTT_OUT%" "releases\@keko" /MIR /NJH /NJS /NFL /NDL
if errorlevel 8 goto failed

rem @keko_main keeps its third-party PBOs and takes the RHS PBOs from this build.
rem KEKO_MAIN_BASE is not in this repo and must hold these files:
rem   addons\fm12_respirator.pbo, addons\ysa_ilbe_reskins.pbo, addons\zeccup.pbo (third-party)
rem   mod.cpp, keko_logo.paa
rd /s /q "releases\@keko_main" 2>nul
robocopy "%KEKO_MAIN_BASE%" "releases\@keko_main" /E /XF keko_rhs_* /NJH /NJS /NFL /NDL
if errorlevel 8 goto failed
for %%n in (backpacks grenades uaz_fix vests weapons) do (
    robocopy "%HEMTT_OUT%\optionals\@keko_rhs_%%n\addons" "releases\@keko_main\addons" /NJH /NJS /NFL /NDL
    if errorlevel 8 goto failed
    robocopy "%HEMTT_OUT%\optionals\@keko_rhs_%%n\keys" "releases\@keko_main\keys" /NJH /NJS /NFL /NDL
    if errorlevel 8 goto failed
)

echo.
echo Ready for Arma 3 Publisher: releases\@keko and releases\@keko_main
goto done

:failed
echo.
echo Build failed. Do not upload the folders in releases.

:done
pause
