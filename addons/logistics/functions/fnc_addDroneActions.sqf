#include "script_component.hpp"

if !(hasInterface) exitWith {ERROR("addDeleteCrateAction can only be called on clients that have an interface!");};

params ["_uav"];

private _actionTurnoff = [QGVAR(UAVFlyHome), "Turn off engine", "", {[_target, false] remoteExec ["engineOn", _target];}, {true}] call ace_interact_menu_fnc_createAction;
private _actionFlyHome = [QGVAR(UAVFlyHome), "Return to Base", "", {_target remoteExec [QFUNC(droneReturnHome), _target];}, {true}] call ace_interact_menu_fnc_createAction;

[_uav, 0, ["ACE_MainActions"], _actionTurnoff] call ace_interact_menu_fnc_addActionToObject;
[_uav, 0, ["ACE_MainActions"], _actionFlyHome] call ace_interact_menu_fnc_addActionToObject;
