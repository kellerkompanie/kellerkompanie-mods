#include "script_component.hpp"

params ["_unit", "_target"];

if (!(_unit call FUNC(hasCanteen)) || _target call ace_common_fnc_isAwake) exitWith {false};

_unit playActionNow "Medic";

[localize LSTRING(messagePour), 2.5, _unit] spawn ace_common_fnc_displayTextStructured;

[_unit, QGVAR(canteen)] call FUNC(removeItemFromMag);

["ace_medical_WakeUp", _target] call CBA_fnc_localEvent;
