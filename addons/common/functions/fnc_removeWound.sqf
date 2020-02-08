#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Removes one wound on the given body part.
 * Parts of code from https://github.com/acemod/ACE3/blob/master/addons/medical_treatment/functions/fnc_bandageLocal.sqf
 *
 * Arguments:
 * 0: The bleeding unit <OBJECT>
 * 1: The body part <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, "head"] call keko_common_fnc_removeWound
 *
 */
params ["_patient", "_bodyPart"];

private _partIndex = ALL_BODY_PARTS find toLower _bodyPart;
if (_partIndex < 0) exitWith {};

private _openWounds = GET_OPEN_WOUNDS(_patient);
if (_openWounds isEqualTo []) exitWith {};

// Figure out which injury for this bodypart is the best choice to bandage
// TODO also use up the remainder on left over injuries
private _targetWound = [_patient, "ElasticBandage", _partIndex] call ace_medical_treatment_fnc_findMostEffectiveWound;
_targetWound params ["_wound", "_woundIndex", "_effectiveness"];

// Everything is patched up on this body part already
if (_effectiveness == -1) exitWith {};

// Find the impact this bandage has and reduce the amount this injury is present
private _amountOf = _wound select 2;
private _impact = _effectiveness min _amountOf;
_amountOf = _amountOf - _impact;
_wound set [2, _amountOf];
_openWounds set [_woundIndex, _wound];

_patient setVariable [VAR_OPEN_WOUNDS, _openWounds, true];

[_patient] call ace_medical_status_fnc_updateWoundBloodLoss;

// Check if we fixed limping from this treatment
if ((ace_medical_limping == 1) && {_partIndex > 3} && {_amountOf <= 0} && {_patient getVariable ["ace_medical_isLimping", false]}) then {
    [_patient] call ace_medical_engine_fnc_updateDamageEffects;
};


TRACE_2("clearTraumaAfterBandage - checking open wounds",_partIndex,_openWounds);
if ((_openWounds findIf {
                _x params ["", "_xBodyPartN", "_xAmountOf"];
                (_partIndex ==_xBodyPartN) && {_xAmountOf > 0}
            }) == -1) then {

    private _bodyPartDamage = _patient getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]];
    _bodyPartDamage set [_partIndex, 0];
    _patient setVariable ["ace_medical_bodyPartDamage", _bodyPartDamage, true];
    TRACE_2("fully healed",_partIndex,_bodyPartDamage);

    switch (_partIndex) do {
        case 0: { [_patient, true, false, false, false] call ace_medical_engine_fnc_updateBodyPartVisuals; };
        case 1: { [_patient, false, true, false, false] call ace_medical_engine_fnc_updateBodyPartVisuals; };
        case 2;
        case 3: { [_patient, false, false, true, false] call ace_medical_engine_fnc_updateBodyPartVisuals; };
        default { [_patient, false, false, false, true] call ace_medical_engine_fnc_updateBodyPartVisuals; };
    };
};


if (_amountOf <= 0) then { // Reset treatment condition cache for nearby players if we stopped all bleeding
    private _nearPlayers = (_patient nearEntities ["CAManBase", 6]) select {_x call ace_common_fnc_isPlayer};
    TRACE_1("clearConditionCaches: bandage",_nearPlayers);
    ["ace_interact_menu_clearConditionCaches", [], _nearPlayers] call CBA_fnc_targetEvent;
};
