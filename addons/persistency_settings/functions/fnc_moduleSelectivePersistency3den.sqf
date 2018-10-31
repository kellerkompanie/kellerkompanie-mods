#include "script_component.hpp"

params ["_logic"];

if !(isServer) exitWith {};

private _syncedObjects = synchronizedObjects _logic;

{
	_x setVariable [QEGVAR(persistency,persistencyEnabled), true, true];

	if(_x isKindOf "ReammoBox_F") then {
		_x remoteExec [QEFUNC(persistency,initObject), 2];
	};

	if(_x isKindOf "Plane" || _x isKindOf "Helicopter" || _x isKindOf "Ship" || _x isKindOf "Car" || _x isKindOf "Tank") then {
		_x remoteExec [QEFUNC(persistency,initObject), 2];
	};
} forEach _syncedObjects;

deleteVehicle _logic;
