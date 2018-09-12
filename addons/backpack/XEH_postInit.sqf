/*
 * Author: Schwaggot
 * Original Author: diwako https://github.com/diwako/lockBackpack
 * Check if unit can have backpack locked status after inventory change
 *
 * Arguments:
 * none
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [] call keko_backpack_fnc_init
 *
 * Public: Yes
 */
#include "script_component.hpp"

private _action = [QGVAR(backpackLockAction),"Lock backpack","",{
	ace_player setVariable [QGVAR(backpackIsLocked), true, true];
	[{["Backpack locked"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
},{!isNull (unitBackpack ace_player) && {!(ace_player getVariable [QGVAR(backpackIsLocked),false])}}] call ace_interact_menu_fnc_createAction;

[typeOf ace_player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;

_action = [QGVAR(backpackUnlockAction),"Unlock backpack","",{
	ace_player setVariable [QGVAR(backpackIsLocked), false, true];
	[{["Backpack unlocked"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
},{!isNull (unitBackpack ace_player) && {ace_player getVariable [QGVAR(backpackIsLocked),false]}}] call ace_interact_menu_fnc_createAction;

[typeOf ace_player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;

["unit", FUNC(checkUnlockBP)] call CBA_fnc_addPlayerEventHandler;
["loadout", FUNC(checkUnlockBP)] call CBA_fnc_addPlayerEventHandler;
