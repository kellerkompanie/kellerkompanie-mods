#include "script_component.hpp"

disableSerialization;

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
			private _n = (_itemAmounts select _idx) + 1;
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

private _output = [];
{
	private _classname = typeOf _x;
	private _name = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");

	//systemChat format["classname: %1 | name: %2", _classname, _name];

	private _content = _x call _keko_fnc_getInventory;

	//systemChat format["_content: %1", _content];

	_output pushBack [_name, _classname, _content];
	//systemChat format["_output: %1", _output];
} forEach (get3DENSelected "object");

copyToClipboard str _output;
