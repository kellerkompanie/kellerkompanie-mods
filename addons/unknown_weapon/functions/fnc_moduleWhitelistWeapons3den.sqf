#include "script_component.hpp"

//private _logic = _this select 0;
//private _units = _this select 1;
//private _activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};

//_destinationName = _logic getVariable ["teleportDestination", ""];

//[_logic, _destinationName] call keko_teleport_fnc_addTeleportDestination;
