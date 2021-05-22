#include "script_component.hpp"

params ["_enemy","_group"];
	
private _leader = (leader _group);
private _units = (GVAR(Players) select 0);

if (GVAR(System) select 3) then {
	_units = (GVAR(Players) select 1);
};

_units = _units select { ( (alive _x) && { (side _group getFriend side _x < 0.6) } ) };

if (alive _enemy) then {
	_units = _units select { ( ( (_group knowsAbout vehicle _x) >= (_group knowsAbout vehicle _enemy) ) && { ( (_leader distance _x) < (_leader distance _enemy) ) } ) };
};

private "_unit";
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (_group knowsAbout vehicle _unit > 0 ) exitWith {
		_enemy = _unit;
	};
};

_enemy
	