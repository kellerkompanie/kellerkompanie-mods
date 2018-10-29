#include "script_component.hpp"

params ["_location_id"];

private _idx = GVAR(LocationMapKeys) find _location_id;
private _value = GVAR(LocationMapValues) select _idx;
_value params ["", "", "_loc_radius", "", "_loc_position"];

private _nearEntities = _loc_position nearEntities ["Man", _loc_radius];
private _aiStillAlive = false;
{
    if (!isPlayer _x && alive _x && ((side _x) == east)) exitWith {_aiStillAlive = true};
} forEach _nearEntities;

!_aiStillAlive
