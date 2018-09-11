disableSerialization;

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

_output = [];
{
	_classname = typeOf _x;
	_name = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");

	//systemChat format["classname: %1 | name: %2", _classname, _name];

	_content = _x call _keko_fnc_getInventory;

	//systemChat format["_content: %1", _content];

	_output pushBack [_name, _classname, _content];
	//systemChat format["_output: %1", _output];
} forEach (get3DENSelected "object");

copyToClipboard str _output;