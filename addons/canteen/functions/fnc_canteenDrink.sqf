#include "script_component.hpp"

params ["_unit"];

if !(_unit call FUNC(hasCanteen)) exitWith {false};

[_unit, QGVAR(drink)] remoteExec ["say3D", 0, false];
_unit playActionNow "Medic";

["You take a sip from your trusty canteen.", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;

[_unit, QGVAR(canteen)] call FUNC(removeItemFromMag);

private _pulse = _unit getVariable "ACE_medical_heartrate";
if(_pulse > 85) then { _unit setVariable ["ACE_medical_heartrate", _pulse - 5, true] };
if(_pulse < 75) then { _unit setVariable ["ACE_medical_heartrate", _pulse + 5, true] };

call FUNC(drinkEffect);

true
