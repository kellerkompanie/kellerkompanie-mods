_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (logistic) running moduleCustomLogistics3den";

if (isNil "keko_var_logistics_customCrates") then {
	keko_var_logistics_customCrates = [];
};

_keko_fnc_getInventory = {
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
			_n = _itemAmounts select _idx;
			_n = _n + 1;
			_itemAmounts set [_idx, _n];
		};
	};

	//systemChat str _itemTypes;
	//systemChat str _itemAmounts;

	_inventory = [];
	for [{_i=0}, {_i< (count _itemTypes)}, {_i=_i+1}] do {
		_itemType = _itemTypes select _i;
		_itemAmount = _itemAmounts select _i;
		_inventory pushBack [_itemAmount, _itemType];
	};

	_inventory
};

_objects = synchronizedObjects _logic;

{
	diag_log text format ["[KEKO] (logistic) converting %1 to crate", _x];

	_classname = typeOf _x;
	_name = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");
	_content = _x call _keko_fnc_getInventory;
	keko_var_logistics_customCrates pushBack [_name, _classname, _content];

	deleteVehicle _x;

} forEach _objects;

publicVariable "keko_var_logistics_customCrates";
diag_log text format ["[KEKO] (logistic) keko_var_logistics_customCrates: %1", keko_var_logistics_customCrates];