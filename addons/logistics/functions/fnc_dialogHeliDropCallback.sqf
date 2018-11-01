#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";

if(GVAR(customLogistics) == 2) then {
	private _crate_name = _arr select 0;
	private _x = parseNumber (_arr select 1);
	private _y = parseNumber (_arr select 2);

	[[_x, _y, 200], _crate_name] spawn FUNC(heliDrop);
}
else {
	private _faction = _arr select 0;
	private _crate = _arr select 1;
	private _x = parseNumber (_arr select 2);
	private _y = parseNumber (_arr select 3);

	[[_x, _y, 200], _faction, _crate] spawn FUNC(heliDrop);
};

closeDialog 1;
