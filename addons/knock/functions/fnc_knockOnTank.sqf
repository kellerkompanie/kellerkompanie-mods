#include "script_component.hpp"

params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle) exitWith {};

[_vehicle] remoteExec [QFUNC(knockedOn), crew _vehicle, false];

[_vehicle, QGVAR(knockMetal)] remoteExec ["say3D", 0, false];

if (GVAR(showHint)) then {
    ["You knock on the vehicle", false, 3, -1] call ace_common_fnc_displayText;
};
