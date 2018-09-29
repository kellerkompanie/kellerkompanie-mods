#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";

if(GVAR(customLogistics) == 2) then {
	private _crate_name = _arr select 0;

	[getPosATL player, _crate_name] spawn FUNC(spawnCrate);
}
else {
	private _faction = _arr select 0;
	private _crate = _arr select 1;

	[getPosATL player, _faction, _crate] spawn FUNC(spawnCrate);
};

closeDialog 1;
