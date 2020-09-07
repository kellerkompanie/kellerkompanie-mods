#include "script_component.hpp"

private _weapon_config = configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "weapons";
private _classNames = "true" configClasses _weapon_config apply {getText (_x >> "cfgName")};

// weapons from config class
{
    GVAR(whitelist) pushBackUnique toUpper(_x);
} forEach _classNames;


// weapons from custom loadouts
if !(isNil QEGVAR(loadout,customLoadouts)) then {
    {
        private _primaryWeapon = ((_x select 2) select 0) select 0;
        GVAR(whitelist) pushBackUnique toUpper(_primaryWeapon);
    } forEach EGVAR(loadout,customLoadouts);
};

// weapons from crates
{   
    _x params ["", "", "_content"]; 

    {
        private _item = _x select 1;

        if (isClass (configFile >> "CfgWeapons" >> _item)) then {
            if !(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
                GVAR(whitelist) pushBackUnique toUpper(_item);
            };
        }
    } forEach _content;
} forEach EGVAR(logistics,crates);
