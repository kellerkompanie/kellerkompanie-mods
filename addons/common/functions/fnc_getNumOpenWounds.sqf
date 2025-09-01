#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Returns the number of open wounds for a unit.
 *
 * Arguments:
 * 0: The bleeding unit <OBJECT>
 *
 * Return Value:
 * Number of open/bleeding wounds <NUMBER>
 *
 * Example:
 * _patient call keko_common_fnc_getNumOpenWounds
 *
 */

params ["_patient"];

private _openWounds = GET_OPEN_WOUNDS(_patient);

// nothing to do here
if(count _openWounds == 0) exitWith {0};

private _headWounds = [player, "head"] call ace_medical_fnc_getOpenWounds;
private _bodyWounds = [player, "body"] call ace_medical_fnc_getOpenWounds;
private _leftArmWounds = [player, "leftarm"] call ace_medical_fnc_getOpenWounds;
private _leftLegWounds = [player, "leftleg"] call ace_medical_fnc_getOpenWounds;
private _rightArmWounds = [player, "rightarm"] call ace_medical_fnc_getOpenWounds;
private _rightLegWounds = [player, "rightleg"] call ace_medical_fnc_getOpenWounds;

count _headWounds + count _bodyWounds + count _leftArmWounds + count _leftLegWounds + count _rightArmWounds + count _rightLegWounds
