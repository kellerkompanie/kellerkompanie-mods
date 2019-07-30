#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

if !(isServer) exitWith {ERROR("enableObjectPersistency needs to be run on server, exiting");};

params ["_object"];

if (isNull _object) exitWith {ERROR("enableObjectPersistency object is null, exiting");};
if (!alive _object) exitWith {ERROR("enableObjectPersistency object is destroyed, exiting");};

_object setVariable [QGVAR(persistencyEnabled), true, true];

if(_object isKindOf "ReammoBox_F") then {
    _object call FUNC(initObject);
};

if(_object isKindOf "Plane" || _object isKindOf "Helicopter" || _object isKindOf "Ship" || _object isKindOf "Car" || _object isKindOf "Tank") then {
    _object call FUNC(initObject);
};
