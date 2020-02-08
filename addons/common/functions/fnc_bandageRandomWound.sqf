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

private _openWounds = GET_OPEN_WOUNDS(_unit);

private _headWounds = 0;
private _bodyWounds = 0;
private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

// get all bleeding body parts
private _woundedBodyParts = [];
{
    _x params ["", "_bodyPart", "_numOpenWounds", "_bloodLoss"];

    if(_bloodLoss > 0) then {
        switch (_bodyPart) do {
            // Head
            case 0: {
                _woundedBodyParts pushBackUnique "head";
                _headWounds = _headWounds + _numOpenWounds;
            };

            // Body
            case 1: {
                _woundedBodyParts pushBackUnique "body";
                _bodyWounds = _bodyWounds + _numOpenWounds;
            };

            // Left Arm
            case 2: {
                _woundedBodyParts pushBackUnique "leftarm";
                _leftArmWounds = _leftArmWounds + _numOpenWounds;
            };

            // Right Arm
            case 3: {
                _woundedBodyParts pushBackUnique "rightarm";
                _rightArmWounds = _rightArmWounds + _numOpenWounds;
            };

            // Left Leg
            case 4: {
                _woundedBodyParts pushBackUnique "leftleg";
                _leftLegWounds = _leftLegWounds + _numOpenWounds;
            };

            // Right Leg
            case 5: {
                _woundedBodyParts pushBackUnique "rightleg";
                _rightLegWounds = _rightLegWounds + _numOpenWounds;
            };
        };
    };
} forEach _openWounds;

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
