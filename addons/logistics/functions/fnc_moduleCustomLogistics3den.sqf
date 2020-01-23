#include "script_component.hpp"

params ["_logic"];

if (!isServer) exitWith {false};

private _objects = synchronizedObjects _logic;
{
    [_x, true] call FUNC(convertCustomCrate);
} forEach _objects;

true
