#include "script_component.hpp"

params ["_group","_logic"];
	
private _units = (units _group);
private _skill = [_group] call FUNC(Accuracy_F);
private _groups = (_logic getVariable QGVAR(Reinforcement));
_groups = _groups - [_group];
private ["_enemy","_bool","_knowsAbout","_knowledge","_random"];

{
	_enemy = (_x getVariable QGVAR(Enemy));
	_bool = [_group, _x] call FUNC(Radio_F1);

	if ( (alive _enemy) && { _bool } ) then {
		_knowsAbout = (_x knowsAbout vehicle _enemy);
		
		if (_knowsAbout > (_group knowsAbout vehicle _enemy) ) then {
			_bool = [_group, _x] call FUNC(KnowsAbout_F5);
			
			if (_bool) then {
				_knowledge = (_group knowsAbout vehicle _enemy);
				_random = (random _knowsAbout);
				_random = (_random * _skill);
				_knowledge = (_knowledge + _random);
				_group reveal [_enemy, _knowledge];
			}
			else {
				_units doWatch (getPos _enemy);
			};
		};
	};
} forEach _groups;

True
