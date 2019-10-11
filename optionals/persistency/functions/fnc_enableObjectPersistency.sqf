#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

if !(isServer) exitWith {};

params ["_object"];

if (isNull _object) exitWith {};
if (!alive _object) exitWith {};

_object setVariable [QGVAR(persistencyEnabled), true, true];

if(_object isKindOf "ReammoBox_F") then {
    _object call FUNC(initObject);
};

if(_object isKindOf "Plane" || _object isKindOf "Helicopter" || _object isKindOf "Ship" || _object isKindOf "Car" || _object isKindOf "Tank") then {
    _object call FUNC(initObject);
};
