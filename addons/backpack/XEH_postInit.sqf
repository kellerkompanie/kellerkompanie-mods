#include "script_component.hpp"

private _action = [QGVAR(backpackLockAction), localize LSTRING(actionLock),"",{
	player setVariable [QGVAR(backpackIsLocked), true, true];
	[{[localize LSTRING(locked)] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
},{!isNull (unitBackpack player) && {!(player getVariable [QGVAR(backpackIsLocked),false])}}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = [QGVAR(backpackUnlockAction), localize LSTRING(actionUnlock),"",{
	player setVariable [QGVAR(backpackIsLocked), false, true];
	[{[localize LSTRING(unlocked)] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
},{!isNull (unitBackpack player) && {player getVariable [QGVAR(backpackIsLocked),false]}}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions","ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;

["unit", FUNC(checkUnlockBP)] call CBA_fnc_addPlayerEventHandler;
["loadout", FUNC(checkUnlockBP)] call CBA_fnc_addPlayerEventHandler;
