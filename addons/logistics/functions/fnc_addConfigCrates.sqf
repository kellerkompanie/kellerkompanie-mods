#include "script_component.hpp"

private _faction = EGVAR(loadout,loadoutFaction);
if (EGVAR(loadout,loadoutFaction) == "Custom") exitWith {};

private _cratesCfgs = "true" configClasses (configFile >> "kekoFactions" >> _faction >> "crates");
{
    private _crateConfig = _x;
    private _crateObjectClassnames = getArray (_crateConfig >> "cfgName");
    private _crateName = getText (_crateConfig >> "name");

    private _crateObjectClassname = _crateObjectClassnames select 0;
    private _inventory = getArray (_crateConfig >> "inventory");

    GVAR(crates) pushBack [_crateName, _crateObjectClassname, _inventory];
} forEach _cratesCfgs;
