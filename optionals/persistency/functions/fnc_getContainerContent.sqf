#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_crate"];

// get all items without containers
private _items = [];
{
    private _isVest = (_x isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"]) || (_x isKindOf ["Vest_NoCamo_Base", configFile >> "CfgWeapons"]);
    private _isUniform = _x isKindOf ["Uniform_base", configFile >> "CfgWeapons"];
    if !(_isVest || _isUniform) then {
        _items pushBack _x;
    };
} forEach itemCargo _crate;

private _magazines = magazinesAmmoCargo _crate;
private _weapons = weaponsItemsCargo _crate;

private _containers = [];
{
    _x params ["_containerType", "_containerObject"];

    private _containerItems = getItemCargo _containerObject;
    private _containerMagazines = magazinesAmmoCargo _containerObject;
    private _containerWeapons = weaponsItemsCargo _containerObject;

    _containers pushBack [_containerType, _containerItems, _containerMagazines, _containerWeapons];

} forEach everyContainer _crate;

private _r = [_items, _magazines, _weapons, _containers];

_r
