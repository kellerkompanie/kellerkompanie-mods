#include "script_component.hpp"

params ["_unit", "_target"];

if !(_unit call FUNC(hasCanteen)) exitWith {false};

_unit playActionNow "Medic";

["You pour some water on your comrade's face.", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;

[_unit, QGVAR(canteen)] call FUNC(removeItemFromMag);

private _pulse = _target getVariable "ACE_medical_heartrate";
private _pain = _target getVariable "ACE_medical_pain";
private _blood = _target getVariable "ACE_medical_bloodvolume";
if(_pulse > 70 && _pain < 0.3 && _blood > 95) then
{
	[_target, false] call ace_medical_fnc_setUnconscious;
};
