#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

if(GVAR(customLogistics) == 2) then {
	_crate_name = _arr select 0;
	_x = parseNumber (_arr select 1);
	_y = parseNumber (_arr select 2);

	[[_x, _y, 200], _crate_name] spawn FUNC(supplyDrop);
}
else {
	_faction = _arr select 0;
	_crate = _arr select 1;
	_x = parseNumber (_arr select 2);
	_y = parseNumber (_arr select 3);

	[[_x, _y, 200], _faction, _crate] spawn FUNC(supplyDrop);
};

closeDialog 1;
