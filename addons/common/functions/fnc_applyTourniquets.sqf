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

private _leftArmWounds = count ([player, "leftarm"] call ace_medical_fnc_getOpenWounds);
private _leftLegWounds = count ([player, "leftleg"] call ace_medical_fnc_getOpenWounds);
private _rightArmWounds = count ([player, "rightarm"] call ace_medical_fnc_getOpenWounds);
private _rightLegWounds = count ([player, "rightleg"] call ace_medical_fnc_getOpenWounds);

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
