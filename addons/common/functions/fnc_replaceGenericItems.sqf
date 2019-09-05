#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Replaces generic magazine and weapon items with the correct instances.
 *
 * Arguments:
 * 0: The unit with the inventory <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_common_fnc_replaceGenericItems
 *
 */

params ["_unit"];

private _primaryWeapon = primaryWeapon _unit;
private _secondaryWeapon = handgunWeapon _unit;
private _launcherWeapon = secondaryWeapon _unit;

if (_primaryWeapon != "") then {
    private _mag = getText(configFile >> "kekoGenericMagazines" >> "PrimaryNormal" >> _primaryWeapon);
    private _tracerMag = getText(configFile >> "kekoGenericMagazines" >> "PrimaryTracer" >> _primaryWeapon);
    private _uglMag = getText(configFile >> "kekoGenericMagazines" >> "UGL" >> _primaryWeapon);

    if (primaryWeapon _unit in GVAR(machineGuns)) then {
        while {"keko_MGMag" in items _unit} do {
            _unit removeItem "keko_MGMag";
            [_unit, _mag, true] call CBA_fnc_addItem;
        };
        while {"keko_MGMag_Tracer" in items _unit} do {
            _unit removeItem "keko_MGMag_Tracer";
            [_unit, _tracerMag, true] call CBA_fnc_addItem;
        };
    } else {
        while {"keko_RifleMag" in items _unit} do {
            _unit removeItem "keko_RifleMag";
            [_unit, _mag, true] call CBA_fnc_addItem;
        };
        while {"keko_RifleMag_Tracer" in items _unit} do {
            _unit removeItem "keko_RifleMag_Tracer";
            [_unit, _tracerMag, true] call CBA_fnc_addItem;
        };
    };

    if !(_uglMag isEqualTo "") then {
        while {"keko_UGLMag" in items _unit} do {
            _unit removeItem "keko_UGLMag";
            [_unit, _uglMag, true] call CBA_fnc_addItem;
        };
    };
};

if (_secondaryWeapon != "") then {
    private _mag = getText(configFile >> "kekoGenericMagazines" >> "Pistol" >> _secondaryWeapon);

    while {"keko_PistolMag" in items _unit} do {
        _unit removeItem "keko_PistolMag";
        [_unit, _mag, true] call CBA_fnc_addItem;
    };
};

if (_launcherWeapon != "") then {
    if (!(secondaryWeapon _unit in ["keko_DisposableRocketLauncher", "keko_AntiTankLauncher", "keko_AntiAirLauncher"])) then {
        // unit has a real launcher, replace the dummy missile
        private _launcherMag = getText(configFile >> "kekoGenericMagazines" >> "Launcher" >> _launcherWeapon);

        INFO_1("_launcherMag %1", _launcherMag);

        if (_launcherWeapon in GVAR(atLaunchers)) then {
            while {"keko_AntiTankMag" in items _unit} do {
                _unit removeItem "keko_AntiTankMag";
                [_unit, _launcherMag, true] call CBA_fnc_addItem;
            };
        };
        if (_launcherWeapon in GVAR(aaLaunchers)) then {
            while {"keko_AntiAirMag" in items _unit} do {
                _unit removeItem "keko_AntiAirMag";
                [_unit, _launcherMag, true] call CBA_fnc_addItem;
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
            [_unit, _disposableRocketLauncher, true] call CBA_fnc_addWeapon;
        };
        if (secondaryWeapon _unit == "keko_AntiTankLauncher") then {
            [_unit, _antiTankLauncher, true] call CBA_fnc_addWeapon;
        };
        if (secondaryWeapon _unit == "keko_AntiAirLauncher") then {
            [_unit, _antiAirLauncher, true] call CBA_fnc_addWeapon;
        };
    };
};
