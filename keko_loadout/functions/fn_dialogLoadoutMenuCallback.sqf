if (_this isEqualTo "") exitWith {};

diag_log format["dialogMenuCallback._this: %1", _this];
_arr = _this splitString " ";

_faction = _arr select 0;
_role = _arr select 1;

[player, _faction, _role] spawn keko_fnc_giveLoadout;

closeDialog 1;

true;