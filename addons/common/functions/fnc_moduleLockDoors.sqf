#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for locking/unlocking doors.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleLockDoors
 *
 */

params ["_logic"];

if !(local _logic) exitWith {};

profileNamespace setVariable [QGVAR(lockDoors_center), getPos _logic];

createDialog QGVAR(lockDoorsDialog);

deleteVehicle _logic;
