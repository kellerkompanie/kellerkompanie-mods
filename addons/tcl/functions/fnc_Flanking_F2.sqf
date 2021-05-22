#include "script_component.hpp"

params ["_unit","_group","_enemy","_position","_distance"];

private _value = 30;
private _bool = True;
private _random = (random 50);
_value = (_value + _random);
private _direction = (_unit getDir _enemy);

if (_unit in (GVAR(Flanking) select 1) ) then {
	if (_group in (GVAR(Flanking) select 3) ) exitWith {
		_direction = (_direction + _value);
	};
	
	_direction = (_direction - _value);
}
else {
	if (_unit in (GVAR(Flanking) select 2) ) exitWith {
		if (_group in (GVAR(Flanking) select 3) ) exitWith {
			_direction = (_direction - _value);
		};
		
		_direction = (_direction + _value);
	};
	
	_bool = False;
};

if (_bool) then {
	_position = [_unit, _distance, _direction] call FUNC(Real_Pos_F);
	
	if (GVAR(Debug) select 6) then {
		[_position] spawn FUNC(Flanking_F3);
	};
};

_position
