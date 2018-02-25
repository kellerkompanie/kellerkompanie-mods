if (_this isEqualTo "") exitWith {};

if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

_faction = _arr select 0;
_crate = _arr select 1;
_x = parseNumber (_arr select 2);
_y = parseNumber (_arr select 3);

[[_x, _y], _faction, _crate] spawn keko_logistics_fnc_supplyDrop;

closeDialog 1;

true;