#include "script_component.hpp"

private ["_units","_count","_unit"];

while { True } do {
	_units = allUnits;	
	_units = _units - GVAR(EH_Fired);
	
	if (_units isEqualTo [] ) then {
		sleep 5;
	}
	else {
		(GVAR(EH_Fired) select 0) append _units;		
		_count = 0;
		
		for "_count" from _count to (count _units - 1) do {
			_unit = (_units select _count);			
			_unit addEventHandler ["FiredMan", {_this call FUNC(EH_Fired_F1) } ];
		};
	};
};