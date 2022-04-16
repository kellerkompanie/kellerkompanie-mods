#include "script_component.hpp"

params ["_unit","_weapon","_muzzle"];
	
if (count (GVAR(Advancing) select 0) < 5) then {
	private _group = (group _unit);
	
	if (_group in (GVAR(Advancing) select 1) ) exitWith {};
	
	(GVAR(Advancing) select 1) pushBack _group;
	
	[_group] spawn {
		params ["_group"];
		
		sleep 10;
		
		DELETE_AT(GVAR(Advancing),1,_group);
	};
	
	private _ammo = _this select 4;
	private _distance = [_unit, _weapon, _muzzle, _ammo] call FUNC(Advancing_F1);
	
	if (_distance > 0) then {
		private _array = ( (GVAR(Advancing) select 0) + (GVAR(Reinforcement) select 0) );
		
		[_unit, _array, _distance] call FUNC(Feature_F3);
	};
};

True
