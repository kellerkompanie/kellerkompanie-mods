if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

if(keko_var_customLogistics == 2) then {
	_crate_name = _arr select 0;
	_x = parseNumber (_arr select 1);
	_y = parseNumber (_arr select 2);

	[[_x, _y, 0], _crate_name] spawn keko_logistics_fnc_spawnCrate;
} 
else {
	_faction = _arr select 0;
	_crate = _arr select 1;
	_x = parseNumber (_arr select 2);
	_y = parseNumber (_arr select 3);

	[[_x, _y, 0], _faction, _crate] spawn keko_logistics_fnc_spawnCrate;
};

closeDialog 1;