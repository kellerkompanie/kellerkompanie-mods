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

private _headWounds = 0;
private _bodyWounds = 0;
private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

// Loop through all current wounds and add up the number of unbandaged wounds on each body part.
{
    _x params ["", "_bodyPart", "_amountOf", "_bleeding"];

    if(_bleeding > 0) then {
        switch (_bodyPart) do {
            // Head
            case 0: {
                _headWounds = _headWounds + _amountOf;
            };

            // Body
            case 1: {
                _bodyWounds = _bodyWounds + _amountOf;
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

_headWounds + _bodyWounds + _leftArmWounds + _leftLegWounds + _rightArmWounds + _rightLegWounds
