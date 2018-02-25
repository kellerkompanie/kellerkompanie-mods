if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

_faction = _arr select 0;
_crate = _arr select 1;

[getPos player, _faction, _crate] spawn keko_logistics_fnc_spawnCrate;

closeDialog 1;

true;