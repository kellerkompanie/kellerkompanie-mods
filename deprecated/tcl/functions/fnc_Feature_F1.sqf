#include "script_component.hpp"

params ["_group","_units"];

_units = _units - ( (GVAR(Heal) select 1) + (GVAR(Rearm) select 1) );
private "_unit";
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (GVAR(Feature) select 30) then {
		if (floor (random 100) < (GVAR(Feature) select 31) ) then {
			[_unit, _group] call FUNC(Heal_F1);
		};
	};
	
	if (GVAR(Feature) select 32) then {
		if (floor (random 100) < (GVAR(Feature) select 33) ) then {
			if (_unit in (GVAR(Heal) select 0) ) exitWith {};

			[_unit, _group] call FUNC(Rearm_F1);
		};
	};
};

True
