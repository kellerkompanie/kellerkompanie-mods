#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Locks/unlocks all doors in a radius around the position.
 *
 * Arguments:
 * 0: Center position <ARRAY>
 * 1: Distance from center that doors should be locked <NUMBER>
 * 2: State of doors, true = lock, false = unlock <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[0,0,0], 10, true] call keko_common_fnc_lockDoors
 *
 */

params ["_centerPos", "_distance", "_isLocked"];

TRACE_3("lockDoors", _centerPos, _distance, _isLocked);

private _lockState = 0;
if(_isLocked) then {
    _lockState = 1;
};

TRACE_1("lockDoors", _lockState);

private _buildings = nearestObjects [_centerPos, ["House_F"], _distance, true];

{
    private _numberofdoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _x) >> "numberOfDoors");
    //if(_numberofdoors == -1 || _numberofdoors == 0) then {continue;}; //No entry (Not a compatible building)

    for "_i" from 0 to _numberofdoors do
    {
        _x setVariable [format["bis_disabled_Door_%1", _i], _lockState, true];
    };
} forEach _buildings;
