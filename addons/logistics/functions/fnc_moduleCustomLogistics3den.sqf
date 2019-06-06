#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
INFO("running moduleCustomLogistics3den");

if (isNil QGVAR(customCrates)) then {
    GVAR(customCrates) = [];
};

private _keko_fnc_getInventory = {
    private ["_object","_raw","_itemTypes","_itemAmounts","_idx"];
    params ["_object"];

    _raw = (itemCargo _object) + (magazineCargo _object) + (weaponCargo _object) + (backpackCargo _object);
    _raw sort true;

    //systemChat format ["raw: %1", _raw];

    _itemTypes = [];
    _itemAmounts = [];

    _idx = -1;
    while {(count _raw) > 0} do {
        private ["_elem"];
        _elem = _raw deleteAt 0;

        if !(_elem in _itemTypes) then {
            _itemTypes pushBack _elem;
            _itemAmounts pushBack 1;
            _idx = _idx + 1;
        }
        else {
            private _n = _itemAmounts select _idx;
            _n = _n + 1;
            _itemAmounts set [_idx, _n];
        };
    };

    //systemChat str _itemTypes;
    //systemChat str _itemAmounts;

    private _inventory = [];
    private _i = 0;
    for [{_i=0}, {_i< (count _itemTypes)}, {_i=_i+1}] do {
        private _itemType = _itemTypes select _i;
        private _itemAmount = _itemAmounts select _i;
        _inventory pushBack [_itemAmount, _itemType];
    };

    _inventory
};

private _objects = synchronizedObjects _logic;

{
    TRACE_1("converting to crate", _x);

    private _classname = typeOf _x;
    private _name = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");
    private _content = _x call _keko_fnc_getInventory;
    GVAR(customCrates) pushBack [_name, _classname, _content];

    deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(customCrates);
TRACE_1("customCrates", GVAR(customCrates));
