#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    [_x] call FUNC(addLogisticsMenu);
} forEach _objects;

deleteVehicle _logic;
