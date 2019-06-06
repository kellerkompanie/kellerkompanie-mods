#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for setting the respawn position.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleRespawnPosition
 *
 */

params ["_logic"];

if (!local _logic) exitWith {};

[getPos _logic, 0] call FUNC(setRespawnPosition);

deletevehicle _logic;
