#include "script_component.hpp"

params ["_teleporterName"];

private _markerName = "keko_teleport_" + _teleporterName;
private _pos = getMarkerPos _markerName;

[player, _pos] call FUNC(setPosAGSL);
