#include "script_component.hpp"

params ["_unit","_group"];

private _distance = 300;
private _leader = (leader _group);

if ( (_group knowsAbout vehicle _unit > 0) && (_leader distance _unit < _distance) ) then {
	private _direction = [_unit, _leader] call FUNC(Rel_Dir_To_F);
	
	if ( (_direction > 340) || (_direction < 20) ) then {
		(GVAR(Suppressed) select 0) pushBack _group;
		[_unit, _group] spawn FUNC(Suppressed_F2);
	};
};

True
	