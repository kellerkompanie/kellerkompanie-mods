#include "script_component.hpp"

if !(hasInterface) exitWith {};

params ["_crate"];

private _actionDelete = [QGVAR(deleteCrate), localize LSTRING(deleteCrate), "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction;
[_crate, 0, ["ACE_MainActions"], _actionDelete] call ace_interact_menu_fnc_addActionToObject;
