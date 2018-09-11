//diag_log text format ["[KEKO] (logistics) LogisticsMenuCallback '%1'", _this];

if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

if(keko_var_customLogistics == 2) then {
	_crate_name = _arr select 0;

	[getPosATL player, _crate_name] spawn keko_logistics_fnc_spawnCrate;
}
else {
	_faction = _arr select 0;
	_crate = _arr select 1;

	//diag_log text format ["[KEKO] (logistics) LogisticsMenuCallback %1 %2", _faction, _crate];

	[getPosATL player, _faction, _crate] spawn keko_logistics_fnc_spawnCrate;
};

closeDialog 1;