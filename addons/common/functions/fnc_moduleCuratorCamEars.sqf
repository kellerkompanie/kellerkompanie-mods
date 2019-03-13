#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Enables/disables curator hearing through the camera.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 * 1:
 * 2: Activation status <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, nil, true] call keko_common_fnc_moduleCuratorCamEars
 *
 */

params ["_logic", "", "_activated"];

if !(local _logic) exitWith {};
if !(_activated) exitWith {};

private _curatorCamEarsEnabled = player getVariable ["TFAR_CuratorCamEars", false];

private _msg = "Curator Cam ears now ENABLED";
if (_curatorCamEarsEnabled) then {
    _msg = "Curator Cam ears now DISABLED";
};

player setVariable ["TFAR_CuratorCamEars", !_curatorCamEarsEnabled];

[_msg] call ace_zeus_fnc_showMessage;

deleteVehicle _logic;
