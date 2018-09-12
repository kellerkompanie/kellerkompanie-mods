/*
 * Author: Schwaggot
 * Original Author: diwako https://github.com/diwako/lockBackpack
 * Check if unit can have backpack locked status after inventory change
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Backpack <OBJECT>
 *
 * Return Value:
 * boolean if inventory should be closed
 *
 * Example:
 * [bob, unitBackpack bob] call keko_backpack_fnc_onOpenInventory
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_unit", "_backpack"];

private _target = objectParent _backpack;

if (isNull _target) exitWith {false};

if (alive _target && {!(_target getVariable ["ACE_isUnconscious",false]) && {_target getVariable [QGVAR(backpackIsLocked),false]}}) exitWith {
	[
		{
			!isNull (findDisplay 602)
		},
		{
			(findDisplay 602) closeDisplay 0;
			if !(isNil "ace_common_fnc_displayTextStructured") then {
				["Backpack is locked"] call ace_common_fnc_displayTextStructured;
			} else {
				hint "Backpack is locked";
			};
		},
		[]
	] call CBA_fnc_waitUntilAndExecute;
};

// return false to open inventory as usual
false