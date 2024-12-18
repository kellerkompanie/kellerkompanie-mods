#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_object"];

if (count (_object getVariable [QGVAR(objectVariable), ""]) > 0) exitWith {_object getVariable QGVAR(objectVariable)};

// check if object has missionNamespace variable assigned
private _objectVariable = format ["%1", _object];

if (_objectVariable find " " != -1 ) then {
    _objectVariable = call FUNC(generateNewObjectVariable);
    missionNamespace setVariable [_objectVariable, _object];
};

_object setVariable [QGVAR(objectVariable), _objectVariable];

_objectVariable
