#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (logistics) running moduleAddLogisticsMenu3den";

private _objects = synchronizedObjects _logic;
{
	diag_log text format ["[KEKO] (logistics) adding menu to: %1", _x];
	[_x] call FUNC(addLogisticsMenu);
} forEach _objects;

deleteVehicle _logic;
