<p align="center">
    <img src="https://github.com/kellerkompanie/kellerkompanie-mods/raw/master/media/kk-logo-full-0.5x.png">
</p>

<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA</a> and <a href="https://github.com/acemod/ACE3/releases">ACE3</a>.<br/>
    Visit us on <a href="https://kellerkompanie.com/">kellerkompanie.com</a> | <a href="ts3server://ts.kellerkompanie.com?port=9987">Teamspeak 3</a> | <a href="https://www.youtube.com/c/Kellerkompanie">YouTube</a> | <a href="https://steamcommunity.com/groups/kellerkompanie">Steam</a></strong></sup>
</p>

This project contains modifications for the Arma 3 game, custom tailored towards the needs of the [Kellerkompanie](https://kellerkompanie.com/) community. Not all parts are self-written. Where indicated the content does not belong to us, but rather to the original authors. The rest may be used by anyone in any way.

The project's file structure is based on the [ACE3](https://github.com/acemod/ACE3)/[CBA_A3](https://github.com/CBATeam/CBA_A3) templates.


## Development
We are continously looking for way to improve our addons or ideas for new content. Feel free to drop as a message, create an issue or open a pull request.

### Requirements
1. A copy of this repository, either via git or as download. If downloading manually make sure to unpack the repository before continuing.
2. Installation of the latest [HEMTT](https://github.com/synixebrett/HEMTT/releases/latest), which is used to package the .pbo files. You can either install it system-wide using the installer or drop the HEMTT exectuable inside the top directory of the repository:
```
kellerkompanie-mods/
    addons/
    optionals/
    ...
    hemtt.exe
```
3. A development environment. We currently advise to use the freely available [Visual Studio Code](https://code.visualstudio.com/) with [SQFLint](https://marketplace.visualstudio.com/items?itemName=skacekachna.sqflint), [SQF Language](https://marketplace.visualstudio.com/items?itemName=Armitxes.sqf) and [Arma 3 - Open Last RPT](https://marketplace.visualstudio.com/items?itemName=bux578.vscode-openlastrpt) extensions.
4. A working Arma P: drive, which contains the unpacked Arma data including ACE3 and CBA_A3. (instructions soon to follow)

### Build instructions
While inside the top directory execute the following command on your Windows CMD or PowerShell:
```
hemtt.exe build
```
If you work on Linux the command is:
```
hemtt build
```
This will created packaged .pbo files inside the `addons/` folder. Alternatively just use `build.bat`.


## Runtime requirements
### extDB3
An Arma extension that provides a connection to MariaDB/MySQL databases. It is required for the logging and persistency addons.

Installation:
1. Unpack the extDB3-1031.7z
2. Rename `@extDB3` to `@extdb3`
3. Edit database settings in `@extdb3/extdb3-conf.ini`
4. Copy custom sql ini's (e.g., `kellerkompanie-logging.ini` and `kellerkompanie-persistency.ini` ) to `@extdb3/sql_custom`.

## Contributors
Kellerkompanie members:
- [Schwaggot](https://github.com/Schwaggot)
- [Gunk](https://github.com/Gunki)
- C4ll_me_Nomad

External:
- [Katalam](https://github.com/Katalam) (former [Spezialeinheit Luchs](https://spezialeinheit-luchs.de))
- [shukari](https://github.com/shukari) ([TacticalBacon](https://tacticalbacon.de))