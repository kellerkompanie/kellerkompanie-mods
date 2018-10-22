#include "script_component.hpp"

params ["_logic"];

if !(isServer) exitWith {};

private _syncedObjects = synchronizedObjects _logic;

{
	_x setVariable [GVAR(persistencyEnabled),true,true];
} forEach _syncedObjects;

deleteVehicle _logic;
