#include "script_component.hpp"

params [
    ["_item","",[objNull,""]],
    ["_vehicle",objNull,[objNull]]
];

private _loaded = _vehicle getVariable ["ace_cargo_loaded", []];
_loaded pushBack _item;
_vehicle setVariable ["ace_cargo_loaded", _loaded, true];

private _space = (_vehicle getVariable ["ace_cargo_space", getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "ace_cargo_space")]) max 0;
private _itemSize = [_item] call ace_cargo_fnc_getSizeItem;
_vehicle setVariable ["ace_cargo_space", _space - _itemSize, true];

if (_item isEqualType objNull) then {
    detach _item;
    _item attachTo [_vehicle,[0,0,-100]];
    ["ace_common_hideObjectGlobal", [_item, true]] call CBA_fnc_serverEvent;

    // Cars below water will take engine damage over time and eventualy become "water logged" and unfixable (because of negative z attach)
    if ((getText (configFile >> "CfgVehicles" >> (typeOf _item) >> "simulation")) == "carx") then {
        [_item, "blockDamage", "ACE_cargo", true] call ace_common_fnc_statusEffect_set;
    };
};

true
