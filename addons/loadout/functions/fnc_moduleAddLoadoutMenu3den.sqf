#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
INFO("running moduleAddLoadoutMenu3den");

private _objects = synchronizedObjects _logic;
{
	TRACE_1("adding menu to object", _x);
	[_x] call FUNC(addLoadoutMenu);
} forEach _objects;

deleteVehicle _logic;
