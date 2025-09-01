#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Bandages one random wound, prioritizes head and torso wounds. Primarly used
 * as part of the limit wounds module.
 *
 * Arguments:
 * 0: Unit to be bandaged <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_common_fnc_bandageRandomWound
 *
 */

params ["_unit"];

private _headWounds = count ([player, "head"] call ace_medical_fnc_getOpenWounds);
private _bodyWounds = count ([player, "body"] call ace_medical_fnc_getOpenWounds);
private _leftArmWounds = count ([player, "leftarm"] call ace_medical_fnc_getOpenWounds);
private _leftLegWounds = count ([player, "leftleg"] call ace_medical_fnc_getOpenWounds);
private _rightArmWounds = count ([player, "rightarm"] call ace_medical_fnc_getOpenWounds);
private _rightLegWounds = count ([player, "rightleg"] call ace_medical_fnc_getOpenWounds);

// get all bleeding body parts
private _woundedBodyParts = [];
if (_headWounds > 0) then {
    _woundedBodyParts pushBackUnique "head";
};
if (_bodyWounds > 0) then {
    _woundedBodyParts pushBackUnique "body";
};
if (_leftArmWounds > 0) then {
    _woundedBodyParts pushBackUnique "leftarm";
};
if (_leftLegWounds > 0) then {
    _woundedBodyParts pushBackUnique "leftleg";
};
if (_rightArmWounds > 0) then {
    _woundedBodyParts pushBackUnique "rightarm";
};
if (_rightLegWounds > 0) then {
    _woundedBodyParts pushBackUnique "rightleg";
};

// preferablly bandage head and torso wounds first
if("head" in _woundedBodyParts) then {
    private _i = 0;
    for [{ _i = 0 }, { _i < _headWounds }, { _i = _i + 1 }] do    {
        [_unit, "head"] call FUNC(removeWound);
    };
};

if("body" in _woundedBodyParts) then {
    private _i = 0;
    for [{ _i = 0 }, { _i < _bodyWounds }, { _i = _i + 1 }] do    {
        [_unit, "body"] call FUNC(removeWound);
    };
};

private _sumOpenWounds = _leftArmWounds + _leftLegWounds + _rightArmWounds + _rightLegWounds;

// if no head or torso wound was closed, chose at random
if(_sumOpenWounds > 4) then {
    private _selection = selectRandom (_woundedBodyParts - ["head", "body"]);
    [_unit, _selection] call FUNC(removeWound);
};
