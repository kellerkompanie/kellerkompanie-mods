#include "script_component.hpp"

params ["_logic"];

if (!isServer) exitWith {false};

if (isNil QGVAR(customCrates)) then {
    GVAR(customCrates) = [];
};

private _objects = synchronizedObjects _logic;
{
    _x call FUNC(convertCustomCrate);
} forEach _objects;

true
