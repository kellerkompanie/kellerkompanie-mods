#include "script_component.hpp"

params ["_enemy","_group","_logic"];

private _groups = GVAR(Groups) select 0;
private _skill = [_group] call FUNC(Accuracy_F);
_groups = _groups - (GVAR(Reinforcement) select 0);
_groups = _groups select { (side _group getFriend side _x > 0.6) };

if (_groups isEqualTo [] ) exitWith {True};

private _value = (GVAR(IQ) select 0);
private _distance = (GVAR(IQ) select 1);
private _knowsAbout = (_group knowsAbout vehicle _enemy);
private ["_leader","_bool","_units","_random"];

{
	_leader = (leader _x);
	_bool = [_group, _x, _distance] call FUNC(Reveal_F3);

	if ( (isNull objectParent _leader) && { (_bool) } ) exitWith {
		_units = (units _x);
		_random = (random _knowsAbout);

		if (_random > _value) then {
			_x reveal [_enemy, _random];
		}
		else {
			_units doWatch (getPos _enemy);
		};
	};

} count _groups;

True
