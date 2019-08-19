#include "script_component.hpp"

params ["_object"];

if !(hasInterface) exitWith {};

private _actionTelephone = [QGVAR(telephone),"Marine anrufen","",{[_target, QGVAR(spongebob)] remoteExec ["say3D", 0, false];},{true}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _actionTelephone] call ace_interact_menu_fnc_addActionToObject;
