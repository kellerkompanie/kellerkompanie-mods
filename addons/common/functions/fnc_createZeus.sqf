#include "script_component.hpp"

#define IDD_DISPLAY3DEN 313

if (!isServer) exitWith {};

params ["_player"];

private _owner = ["#adminLogged", getPlayerUID _player] select isMultiplayer;
private _group = createGroup sideLogic;
private _zeus = _group createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"];

_zeus setVariable ["owner", _owner, true];
_zeus setVariable ["Addons", 3, true];
_zeus setVariable ["BIS_fnc_initModules_disableAutoActivation", false];
_zeus setCuratorCoef ["Place", 0];
_zeus setCuratorCoef ["Delete", 0];
_player assignCurator _zeus;
_group deleteGroupWhenEmpty true;

if (!isMultiplayer && {!isNull findDisplay IDD_DISPLAY3DEN}) then {
    // if loaded from editor (but not after restart), addons are not activated so we do it manually
    private _addons = ('true' configClasses (configFile >> "CfgPatches")) apply {configName _x};
    activateAddons _addons;
    removeAllCuratorAddons _zeus;
    _zeus addCuratorAddons _addons;
};

"[KEKO] Added Zeus" remoteExec ["systemChat", _player];
