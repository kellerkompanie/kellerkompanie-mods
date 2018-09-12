/*
 * Author: Schwaggot
 * Original Author: diwako diwako https://github.com/diwako/lockBackpack
 * Check if unit can have backpack locked status after inventory change
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [bob] call keko_backpack_fnc_checkUnlockBP
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_unit"];

if ((_unit getVariable [QGVAR(backpackIsLocked),false]) && {isNull (unitBackpack _unit)} ) then {
	
	_unit setVariable [QGVAR(backpackIsLocked), false, true];

	if !(isNil "ace_common_fnc_displayTextStructured") then {
		[{["Backpack lock removed"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
	} else {
		hint "Backpack lock removed";
	};
};