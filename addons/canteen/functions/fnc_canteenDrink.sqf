#include "script_component.hpp"

params ["_unit"];

if !(_unit call FUNC(hasNonEmptyCanteen)) exitWith {false};

private _stanceIndex = ["STAND", "CROUCH", "PRONE"] find stance _unit;

// Handle in vehicle when stance is UNDEFINED
if (vehicle _unit != _unit) then {_stanceIndex = 0};

private _consumeAnims = ["acex_field_rations_drinkStand", "acex_field_rations_drinkCrouch", "acex_field_rations_drinkProne"];
private _consumeAnim = _consumeAnims param [_stanceIndex, "", [""]];

[_unit, QGVAR(drink)] remoteExec ["say3D", 0, false];
[_unit, _consumeAnim, 1] call ace_common_fnc_doAnimation;

[localize LSTRING(messageDrink), 2.5, _unit] spawn ace_common_fnc_displayTextStructured;

[_unit, QGVAR(canteen)] call FUNC(removeItemFromMag);

private _pulse = _unit getVariable "ACE_medical_heartrate";
if(_pulse > 85) then { _unit setVariable ["ACE_medical_heartrate", _pulse - 5, true] };
if(_pulse < 75) then { _unit setVariable ["ACE_medical_heartrate", _pulse + 5, true] };

call FUNC(drinkEffect);

true
