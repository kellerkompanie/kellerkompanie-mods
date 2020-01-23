#include "script_component.hpp"

/*
 * Author: DerZade
 * Triggerd by AnimDone-Eventhandler
 *
 * Arguments:
 * 0: unit <OBJECT>
 * 1: animtaion <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * _this call keko_backpack_on_chest_fnc_EHAnimDone;
 *
 * Public: No
 */
params ["_unit", ""];

if (isNil "_unit") exitWith {["No proper argument(s) given."] call BIS_fnc_error};

private _chestpack = [_unit] call FUNC(chestpackContainer);

//freefall
if ((animationState _unit) find "halofreefall_" isEqualTo 0) then {
     _chestpack attachTo [_unit,[0,-0.4,0.05],"pelvis"];
     _chestpack setVectorDirandUp [[0,0,1],[0,1,0]];
};
