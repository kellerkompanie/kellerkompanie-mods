params ["_teleporterObject", "_teleporterName"];

_markerName = "keko_teleport_" + _teleporterName;
//diag_log format ["_markerName: %1", _markerName];

_marker = createMarker [_markerName, position _teleporterObject];
_markerName setMarkerSize [0.5, 0.5];
_markerName setMarkerColor "ColorOrange";
_markerName setMarkerText _teleporterName;
_markerName setMarkerType "hd_flag";

if (isNil "keko_teleport_destinations") then {keko_teleport_destinations = []};

keko_teleport_destinations pushBack _teleporterName;
publicVariable "keko_teleport_destinations";

diag_log text format["[KEKO] (teleport) destinations after added new: %1", keko_teleport_destinations];