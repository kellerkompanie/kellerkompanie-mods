#include "script_component.hpp"

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
