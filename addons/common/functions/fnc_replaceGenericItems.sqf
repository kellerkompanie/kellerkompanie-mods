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

private _allItems = [player] call CBA_fnc_uniqueUnitItems;

{
    _x params["_item","_replacement"];
    if(_item in _allItems) then {
        while {_item in items _unit} do {
            _unit removeItem _item;
            [_unit, _replacement, true] call CBA_fnc_addItem;
        };
    };
} forEach [
    [QGVAR(canteen_generic), QEGVAR(canteen,canteen)],
    [QGVAR(painkiller_generic), "KEKO_painkiller"],
    [QGVAR(cigpack_generic), "murshun_cigs_cigpack"],
    [QGVAR(lighter_generic), "murshun_cigs_lighter"],
    [QGVAR(matches_generic), "murshun_cigs_matches"],
    [QGVAR(lollipop_generic), "immersion_pops_poppack"]
];


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
        // BWA3 makes some strange derivations of weapons, try to find
        // the base weapon and derive mag from there
        if (_mag == "") then {
            private _baseWeapon = getText(configFile >> "CfgWeapons" >> _primaryWeapon >> "baseWeapon");
            _mag = getText(configFile >> "kekoGenericMagazines" >> "PrimaryNormal" >> _baseWeapon);
        };
        if (_tracerMag == "") then {
            private _baseWeapon = getText(configFile >> "CfgWeapons" >> _primaryWeapon >> "baseWeapon");
            _tracerMag = getText(configFile >> "kekoGenericMagazines" >> "PrimaryTracer" >> _baseWeapon);
        };

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
