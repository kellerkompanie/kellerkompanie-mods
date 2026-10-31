@echo off
rem Uploads releases\@keko and releases\@keko_main to the server. Run build.bat first.
rem keko-a3mm scans mods.local every 30 seconds, so the mods upload to a staging folder first and
rem move into mods.local in one quick step. That way it never sees a half-uploaded mod.
rem The replaced folders stay in %DEPLOY_DIR%/previous until the next deploy.
cd /d "%~dp0"

set "SSH=ssh -o ClearAllForwardings=yes keko"
set "TAR=%SystemRoot%\System32\tar.exe"
set "DEPLOY_DIR=/home/arma3server/mods.deploy"
set "MODS_DIR=/home/arma3server/serverfiles/mods.local"

if not exist "releases\@keko\addons\keko_main.pbo" goto missing
if not exist "releases\@keko_main\addons\keko_rhs_backpacks.pbo" goto missing
for /f %%c in ('dir /s /b /a-d "releases\@keko" "releases\@keko_main" ^| "%SystemRoot%\System32\find.exe" /c /v ""') do set "FILE_COUNT=%%c"

%SSH% "rm -rf %DEPLOY_DIR%/new && mkdir -p %DEPLOY_DIR%/new"
if errorlevel 1 goto failed

rem The ./ prefix matters: tar.exe reads a name that starts with @ as an archive to include.
"%TAR%" -C releases -cf - ./@keko ./@keko_main | %SSH% "tar -xf - -C %DEPLOY_DIR%/new --no-same-owner"
if errorlevel 1 goto failed

rem The file count catches an upload that stopped early, which remote tar can accept without error.
%SSH% "set -e; cd %DEPLOY_DIR%; test $(find new -type f | wc -l) -eq %FILE_COUNT%; chown -R arma3server:arma3server .; chmod -R u=rwX,go=rX new; rm -rf previous; mkdir previous; for mod in @keko @keko_main; do mv %MODS_DIR%/$mod previous/; mv new/$mod %MODS_DIR%/; done; chown arma3server:arma3server previous; rmdir new"
if errorlevel 1 goto failed

echo.
echo Deployed. Restart the Arma server to load the new version.
goto done

:missing
echo Build output not found. Run build.bat first.
goto done

:failed
echo.
echo Deploy failed. Check %MODS_DIR% and %DEPLOY_DIR%/previous on the server.

:done
pause
