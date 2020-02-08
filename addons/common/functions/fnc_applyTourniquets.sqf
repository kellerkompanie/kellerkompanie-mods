#include "script_component.hpp"
/*
 * Author: Schwaggot
 * If available applies tourniquets to all bleeding extremeties. Primarly used
 * as part of the limit wounds module.
 *
 * Arguments:
 * 0: Unit to be tourniqueted <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_common_fnc_applyTourniquets
 *
 */

params ["_unit"];

private _openWounds = _unit getVariable ["ace_medical_openWounds", []];

private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

{
    _x params ["", "_bodyPart", "_amountOf", "_bleeding"];

    if(_bleeding > 0) then {
        switch (_bodyPart) do {
            // Head
            case 0: {

            };

            // Body
            case 1: {

            };

            // Left Arm
            case 2: {
                _leftArmWounds = _leftArmWounds + _amountOf;
            };

            // Right Arm
            case 3: {
                _rightArmWounds = _rightArmWounds + _amountOf;
            };

            // Left Leg
            case 4: {
                _leftLegWounds = _leftLegWounds + _amountOf;
            };

            // Right Leg
            case 5: {
                _rightLegWounds = _rightLegWounds + _amountOf;
            };
        };
    };
} forEach _openWounds;

if(_leftArmWounds > 0) then {
    [_unit, "leftarm"] remoteExec ["ace_medical_treatment_fnc_tourniquetLocal", _unit];
};
if(_rightArmWounds > 0) then {
    [_unit, "rightarm"] remoteExec ["ace_medical_treatment_fnc_tourniquetLocal", _unit];
};
if(_leftLegWounds > 0) then {
    [_unit, "leftleg"] remoteExec ["ace_medical_treatment_fnc_tourniquetLocal", _unit];
};
if(_rightLegWounds > 0) then {
    [_unit, "rightleg"] remoteExec ["ace_medical_treatment_fnc_tourniquetLocal", _unit];
};
