_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
//diag_log "running destination module init";

_destinationName = _logic getVariable ["teleportDestination", ""];

_allowBLUFOR = _logic getVariable ["allowBLUFOR", true];
_allowINDFOR = _logic getVariable ["allowINDFOR", true];
_allowOPFOR  = _logic getVariable ["allowOPFOR",  true];
_allowCIV 	 = _logic getVariable ["allowCIV", true];

//diag_log format ["creating destination: %1", _destinationName];

[_logic, _destinationName, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportDestination;