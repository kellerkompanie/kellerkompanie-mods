#include "script_component.hpp"

params ["_teleporterName"];

diag_log text format["[KEKO] (teleport) teleporting to marker: %1", _teleporterName];

private _markerName = QGVAR() + _teleporterName;
private _pos = getMarkerPos _markerName;

player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;
titleText [format ["Du wirst nach %1 verlegt.", _teleporterName], "BLACK FADED"];
sleep 1;
player setPos _pos;
sleep 1;
titleFadeOut 2;
player allowDamage true;
