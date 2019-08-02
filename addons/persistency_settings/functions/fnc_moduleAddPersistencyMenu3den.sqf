#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    [_x] call EFUNC(persistency,addPersistencyMenu);
} forEach _objects;

deleteVehicle _logic;
