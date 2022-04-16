#include "script_component.hpp"

params ["_unit"];

private _time = (_unit getVariable QGVAR(Suppressed));

if ( (time - _time) < (GVAR(Feature) select 28) ) then {
	(GVAR(Suppressed) select 1) pushBack _unit;
	
	if ( { (_x == _unit) } count (GVAR(Suppressed) select 1) > (GVAR(Feature) select 29) ) then {
		GVAR(Suppressed) set [1, (GVAR(Suppressed) select 1) - [_unit] ];
				
		private _groups = GVAR(Groups) select 0;		
		_groups = _groups - GVAR(Suppressed) select 0;		
		private ["_group","_units"];		
		private _count = 0;
		
		for "_count" from _count to (count _groups - 1) do {
			_group = (_groups select _count);			
			_units = (units _group);
			
			if (_units findIf { ( (alive _x) && { (isNull objectParent _x) } ) } > -1) then {
				[_unit, _group] call FUNC(Suppressed_F1);
			};
		};
	};
}
else {
	_unit setVariable [QGVAR(Suppressed), time];	
	GVAR(Suppressed) set [1, (GVAR(Suppressed) select 1) - [_unit] ];
};

True
