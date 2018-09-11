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
 * [bob] call diwako_lockbackpack_fnc_checkUnlockBP
 *
 * Public: No
 */
params ["_unit"];

if ((_unit getVariable ["keko_backpack_locked",false]) && {isNull (unitBackpack _unit)} ) then {
	
	_unit setVariable ["keko_backpack_locked", false, true];

	if !(isNil "ace_common_fnc_displayTextStructured") then {
		[{["Backpack lock removed"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
	} else {
		hint "Backpack lock removed";
	};
};