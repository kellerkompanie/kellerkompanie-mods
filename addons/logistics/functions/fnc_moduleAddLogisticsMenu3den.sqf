#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
INFO("running moduleAddLogisticsMenu3den");

private _objects = synchronizedObjects _logic;
{
    TRACE_1("adding menu to", _x);
    [_x] call FUNC(addLogisticsMenu);
} forEach _objects;

deleteVehicle _logic;
