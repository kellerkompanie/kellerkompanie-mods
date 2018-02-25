params ["_teleporterObject", "_teleporterName"];

//diag_log "addTeleportDestination";
//diag_log format ["_teleporterObject: %1", _teleporterObject];
//diag_log format ["_teleporterName: %1", _teleporterName];

_markerName = "teleportMarker_" + _teleporterName;
//diag_log format ["_markerName: %1", _markerName];

_marker = createMarker [_markerName, position _teleporterObject];
_markerName setMarkerSize [0.5, 0.5];
_markerName setMarkerColor "ColorWEST";
_markerName setMarkerText _teleporterName;
_markerName setMarkerType "hd_flag";

if (isNil "keko_teleport_destinations") then {keko_teleport_destinations = []};

keko_teleport_destinations pushBack [_teleporterObject, _teleporterName];
publicVariable "keko_teleport_destinations";