#include "script_component.hpp"

params ["_unit","_group"];

private _damage = (_unit getHitPointDamage "hitlegs");

if ( (_damage > 0.5) || (damage _unit > 0.5) ) then {
	private _items = (items _unit);
	
	if ("FirstAidKit" in _items) then {
		(GVAR(Heal) select 1) pushBack _unit;
		_unit action ["HealSoldierSelf", _unit];
		[_unit, _group] spawn FUNC(Heal_F3);
	}
	else {
		private _units = (units _group);
		_units = _units - (GVAR(Heal) select 1);
		_units = _units select {_items = (items _x); ( (alive _x) && { (isNull objectParent _x) } && { ("Medikit" in _items) } ) };
		
		if (_units isEqualTo [] ) exitWith {
			[_unit, _group] call FUNC(Heal_F2);
		};
		
		private _object = (_units select 0);
		private _array = [_unit, _object];
		(GVAR(Heal) select 0) append _array;
		(GVAR(Heal) select 1) append _array;
		[_unit, _group, _object] spawn FUNC(Heal_F3);
	};
};

True
