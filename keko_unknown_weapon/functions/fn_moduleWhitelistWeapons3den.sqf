_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
//diag_log "running destination module init";

_destinationName = _logic getVariable ["teleportDestination", ""];
//diag_log format ["creating destination: %1", _destinationName];

[_logic, _destinationName] call keko_teleport_fnc_addTeleportDestination;