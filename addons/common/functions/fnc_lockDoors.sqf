#include "script_component.hpp"

params ["_centerPos", "_distance", "_isLocked"];

TRACE_3("lockDoors", _centerPos, _distance, _isLocked);

private _lockState = 0;
if(_isLocked) then {
	_lockState = 1;
};

diag_log text format["[KEKO] (common) _lockState: %1", _lockState];

private _buildings = nearestObjects [_centerPos, ["House_F"], _distance, true];
//diag_log text format["[KEKO] (common) _buildings: %1", _buildings];

{
	private _numberofdoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _x) >> "numberOfDoors");
	//if(_numberofdoors == -1 || _numberofdoors == 0) then {continue;}; //No entry (Not a compatible building)
	//diag_log text format["[KEKO] (common) _numberofdoors: %1", _numberofdoors];

	for "_i" from 0 to _numberofdoors do
	{
		//diag_log text format["[KEKO] (common) setting door %1 @ %2", _i, _x];
		_x setVariable [format["bis_disabled_Door_%1", _i], _lockState, true];
	};
} forEach _buildings;
