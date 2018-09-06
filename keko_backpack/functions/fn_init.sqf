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
if !(isNil "ace_interact_menu_fnc_createAction") then {
	private _action = ["keko_backpack_lock","Lock backpack","",{
		ace_player setVariable ["keko_backpack_locked", true, true];
		[{["Backpack locked"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
	},{!isNull (unitBackpack ace_player) && {!(ace_player getVariable ["keko_backpack_locked",false])}}] call ace_interact_menu_fnc_createAction;

	[typeOf ace_player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;

	_action = ["keko_backpack_unlock","Unlock backpack","",{
		ace_player setVariable ["keko_backpack_locked", false, true];
		[{["Backpack unlocked"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
	},{!isNull (unitBackpack ace_player) && {ace_player getVariable ["keko_backpack_locked",false]}}] call ace_interact_menu_fnc_createAction;

	[typeOf ace_player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;
} else {
	[["Lock backpack", {
		player setVariable ["keko_backpack_locked", true, true];
		hint "Backpack locked";
	},nil,0,false,true,"","!isNull (unitBackpack player) && {!(player getVariable ['keko_backpack_locked',false])}"]] call CBA_fnc_addPlayerAction;

	[["Unlock backpack", {
		player setVariable ["keko_backpack_locked", false, true];
		hint "Backpack unlocked";
	},nil,0,false,true,"","!isNull (unitBackpack player) && {player getVariable ['keko_backpack_locked',false]}"]] call CBA_fnc_addPlayerAction;
};

["unit", keko_backpack_fnc_checkUnlockBP] call CBA_fnc_addPlayerEventHandler;
["loadout", keko_backpack_fnc_checkUnlockBP] call CBA_fnc_addPlayerEventHandler;