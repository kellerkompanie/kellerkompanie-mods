#include "script_component.hpp"

private _logic = _this select 0;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
//diag_log "running destination module init";

private _destinationName = _logic getVariable ["teleportDestination", ""];

private _allowBLUFOR = _logic getVariable ["allowBLUFOR", true];
private _allowINDFOR = _logic getVariable ["allowINDFOR", true];
private _allowOPFOR  = _logic getVariable ["allowOPFOR",  true];
private _allowCIV 	 = _logic getVariable ["allowCIV", true];

//diag_log format ["creating destination: %1", _destinationName];

[_logic, _destinationName, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportDestination;
