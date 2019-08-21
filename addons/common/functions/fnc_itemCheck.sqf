#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Replaces generic inventory items with the correct instances.
 *
 * Arguments:
 * 0: The unit with the inventory <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_common_fnc_itemCheck
 *
 */

params ["_unit"];

// Retrieve compatible mags
private _compatibleMagazines = [[[], []], [[], []], [[], []]];
{
    if (_x != "") then {
        private _weaponConfig = (configFile >> "CfgWeapons" >> _x);
        private _index = _forEachIndex;

        {
            private _subIndex = _forEachIndex;
            {
                ((_compatibleMagazines select _index) select _subIndex) pushBackUnique (configName (configFile >> "CfgMagazines" >> _x))
            } foreach ([getArray (_weaponConfig >> _x >> "magazines"), getArray (_weaponConfig >> "magazines")] select (_x == "this"));
        } foreach getArray (_weaponConfig >> "muzzles");
    };
} foreach [primaryWeapon _unit, handgunWeapon _unit, secondaryWeapon _unit];

private _primaryMagazines = _compatibleMagazines select 0 select 0;
private _uglMagazines = _compatibleMagazines select 0 select 1;
private _secondaryMagazines = _compatibleMagazines select 1 select 0;
private _launcherMagazines = _compatibleMagazines select 2 select 0;

private _hasPrimaryWeapon = primaryWeapon _unit != "";
private _hasSecondaryWeapon = handgunWeapon _unit != "";
private _hasLauncherWeapon = secondaryWeapon _unit != "";



if (_hasPrimaryWeapon) then {
    if (primaryWeapon _unit in GVAR(machineGuns)) then {
        _primaryMagazines = [_primaryMagazines] call FUNC(sortMagazinesByCount);
        while {({_x == "keko_MGMag"} count items _unit) > 0} do {
            _unit removeItem "keko_MGMag";
            [_unit, _primaryMagazines select 0] call CBA_fnc_addItem;
        };
        while {({_x == "keko_MGMag_Tracer"} count items _unit) > 0} do {
            _unit removeItem "keko_MGMag_Tracer";
            private _tracerMag = _primaryMagazines select 0;
            {
                private _cfg = configFile >> "CfgMagazines" >> _x;
                private _tracersEvery = getNumber(_cfg >> "tracersEvery");
                if(_tracersEvery == 1) exitWith {
                    _tracerMag = _x;
                };
            } forEach _primaryMagazines;
            [_unit, _tracerMag] call CBA_fnc_addItem;
        };
    } else {
        while {({_x == "keko_RifleMag"} count items _unit) > 0} do {
            _unit removeItem "keko_RifleMag";
            [_unit, _primaryMagazines select 0] call CBA_fnc_addItem;
        };
        while {({_x == "keko_RifleMag_Tracer"} count items _unit) > 0} do {
            _unit removeItem "keko_RifleMag_Tracer";
            private _tracerMag = _primaryMagazines select 0;
            {
                private _cfg = configFile >> "CfgMagazines" >> _x;
                private _tracersEvery = getNumber(_cfg >> "tracersEvery");
                if(_tracersEvery == 1) exitWith {
                    _tracerMag = _x;
                };
            } forEach _primaryMagazines;
            [_unit, _tracerMag] call CBA_fnc_addItem;
        };
    };

    if (count _uglMagazines > 0) then {
        while {({_x == "keko_UGLMag"} count items _unit) > 0} do {
            _unit removeItem "keko_UGLMag";
            [_unit, _uglMagazines select 0] call CBA_fnc_addItem;
        };
    };
};

if (_hasSecondaryWeapon) then {
    while {({_x == "keko_PistolMag"} count items _unit) > 0} do {
        _unit removeItem "keko_PistolMag";
        [_unit, _secondaryMagazines select 0] call CBA_fnc_addItem;
    };
};

if (_hasLauncherWeapon) then {
    if (!(secondaryWeapon _unit in ["keko_DisposableRocketLauncher", "keko_AntiTankLauncher", "keko_AntiAirLauncher"])) then {
        // unit has a real launcher, replace the dummy missile
        if (secondaryWeapon _unit in GVAR(atLaunchers)) then {
            while {({_x == "keko_AntiTankMag"} count items _unit) > 0} do {
                _unit removeItem "keko_AntiTankMag";
                [_unit, _launcherMagazines select 0] call CBA_fnc_addItem;
            };
        } else {
            if (secondaryWeapon _unit in GVAR(aaLaunchers)) then {
                while {({_x == "keko_AntiAirMag"} count items _unit) > 0} do {
                    _unit removeItem "keko_AntiAirMag";
                    [_unit, _launcherMagazines select 0] call CBA_fnc_addItem;
                };
            };
        };
    } else {
        // unit has dummy launcher, replace with real one
        private _disposableRocketLauncher = "launch_NLAW_F";
        private _antiTankLauncher = "launch_B_Titan_short_F";
        private _antiAirLauncher = "launch_B_Titan_F";

        if (EGVAR(loadout,loadoutFaction) != "Custom") then {
            private _factionCfg = configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction);
            _disposableRocketLauncher = getText (_factionCfg >> "disposableRocketLauncher");
            _antiTankLauncher = getText (_factionCfg >> "antiTankLauncher");
            _antiAirLauncher = getText (_factionCfg >> "antiAirLauncher");
        };

        if (secondaryWeapon _unit == "keko_DisposableRocketLauncher") then {
            _unit addWeapon _disposableRocketLauncher;
        };
        if (secondaryWeapon _unit == "keko_AntiTankLauncher") then {
            _unit addWeapon _antiTankLauncher;
        };
        if (secondaryWeapon _unit == "keko_AntiAirLauncher") then {
            _unit addWeapon _antiAirLauncher;
        };
    };
};
