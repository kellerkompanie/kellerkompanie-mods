#include "script_component.hpp"

params ["_enemy","_group","_logic","_array"];
	
private "_position";

private _knowsAbout = 0;

if (alive _enemy) then {
	_knowsAbout = (_group knowsAbout vehicle _enemy);
};

private _value = 100;
private _distance = 0;
private _object = _logic;
private _leader = (leader _group);
private _direction = (random 360);

if (_knowsAbout > 0) then {
	private _count = (count _array);
	
	if (_count > 0) then {
		if (_count == 0) then {
			_count = 1;
		};
		
		private _units = (units _group);		
		private _range = GVAR(Tweak) select 1);		
		private _random = GVAR(Tweak) select 2);
		
		if (_leader distance _logic < _range) then {
			if (combatmode _group isEqualTo "RED") then	{
				_random = (_random + 15);
			};
			
			if (_leader in _array) then {
				if (isNull objectParent _leader) exitWith {};
				
				_random = _random / _count;
			};
		}
		else {
			_random = 100;
		};
		
		if (floor (random 100) < _random) then {
			_distance = (_leader distance _enemy);
			private _tweak = GVAR(Tweak) select 3;
			_value = 1 + (random _tweak);
			_distance = (_distance / _value);
		}
		else {
			_distance = 0;
			_object = _leader;
		};
		
		_direction = (_enemy getDir _leader);
		
		if (floor (random 100) < 50) then {
			_random = random 10 - random 10;
			_direction = (_direction + _random);
		};
	}
	else {
		_skill = [_group] call FUNC(Accuracy_F);
		_value = (_value / _skill);
		_distance = (random _value - random _value);
	};
}
else {
	_distance = (random _value - random _value);
	
	if (alive _enemy) then {
		if ( (group _enemy) isEqualTo (_logic getVariable QGVAR(Group)) ) then {
			_groups = (_logic getVariable QGVAR(Reinforcement));
			
			{
				if (_x knowsAbout vehicle _enemy > 0) exitWith {
					_logic setPos (getPos _enemy);
				};
			} forEach _groups;
		};
	};
};

if (vehicle _leader isKindOf "Ship") then {
	_direction = (_enemy getDir _leader);	
	_distance = (_leader distance _enemy);	
	_distance = (_distance - 300);
	
	private _position = [_object, _distance, _direction] call FUNC(Real_Pos_F);
	
	if (surfaceIsWater _position) then {
		_distance = _distance;
	}
	else {
		_distance = (_distance + 200);
	};
};

if (_logic getVariable QGVAR(Artillery) select 1) then {
	if (_leader distance _logic < 200) then {
		_distance = 0;		
		_object = _leader;
	};
};

_position = [_object, _distance, _direction] call FUNC(Real_Pos_F);

_position
