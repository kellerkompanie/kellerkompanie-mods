#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _units = (units _group);
private _array = ( (GVAR(Static_Weapon) select 0) + (GVAR(House_Search) select 0) );
_units = _units - _array;
private _leader = (leader _group);
_units deleteAt (_units find _leader);
_units = _units select { ( (alive _x) && { (isNull objectParent _x) } ) };

if (count _units > 1) then {
	private _unit = _units select (count _units - 1);
	private _vehicle = [_unit, _group, _logic] call FUNC(Static_Weapon_F2);
	
	if (alive _vehicle) then {
		private _bool = True;
		
		if (_group in (GVAR(Hold) select 0) ) then {
			_bool = [_group, _vehicle] call FUNC(Trigger_F);
		};
		
		if (_bool) then {
			[_unit, _group, _logic, _vehicle] spawn FUNC(Static_Weapon_F3);
		};
	};
};

True
