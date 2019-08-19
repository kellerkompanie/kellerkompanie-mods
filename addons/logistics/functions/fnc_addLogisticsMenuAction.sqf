#include "script_component.hpp"

params ["_object"];

private _actionLogisticsMenu = [QGVAR(menu),"Logistik","",{ createDialog QGVAR(menuDialog); },{[player,GVAR(accessLevel)] call FUNC(hasAccess)}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _actionLogisticsMenu] call ace_interact_menu_fnc_addActionToObject;
