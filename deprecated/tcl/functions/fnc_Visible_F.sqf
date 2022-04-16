#include "script_component.hpp"

params ["_enemy","_units","_group","_logic","_array"];

private _time = 0;
private _value = 1;
private _bool = True;
private _knowledge = 0;
private _random = (5 + (random 10)) * _value;
private _leader = leader _group;
private _tweak = GVAR(IQ) select 2;
private _value = _value + _tweak;

_units = _units select { ( (alive _x) && { (_x knowsAbout vehicle _enemy > 0) } ) };
_units = _units - _array;

private _index = (_units find _leader);

if (_index > 0) then {
	private _unit = (_units select 0);	
	_units set [0, _leader];	
	_units set [_index, _unit];
};

private ["_unit", "_knowledge", "_time"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);	
	_knowledge = (_unit targetKnowledge vehicle _enemy) select 2;
	
	if (_knowledge < 0) then {
		_knowledge = (_unit targetKnowledge vehicle _enemy) select 3;
	};
	
	if (_knowledge > 0) then {
		_time = (time - _knowledge);
		
		if (_time < _random) then {
			_bool = False;			
			_array pushBack _unit;
		}
		else {
			if (_unit in (GVAR(Static_Weapon) select 0) ) then {
				if (floor (random 100) < 50) then {
					private _vehicle = (vehicle _unit);					
					[_unit, _group, _vehicle] call FUNC(Static_Weapon_F5);
				};
			};
		};
	};
	
	if (GVAR(Debug) select 6) then {
		[_unit, _enemy, _array] spawn FUNC(Debug_F4);
	};
	
	if (_leader in _array) exitWith	{
		_array = _units;
	};
};

if (_bool) then {
	private _skill = [_group] call FUNC(Accuracy_F);
	
	_random = (15 + (random 30)) * _value * _skill;

	if (_time > _random) then {
		_group forgetTarget _enemy;
	};
};

_array