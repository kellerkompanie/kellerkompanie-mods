#include "script_component.hpp"

params ["_group"];

if (GVAR(System) select 4) then {
	private _leader = (leader _group);	
	private _objects = [];
	
	{_objects append (synchronizedObjects _x) } forEach units _group;
	
	{if (vehicle _x isKindOf "Man") then {_objects = _objects - [_x] } } forEach _objects;
	
	if (count _this == 1) then {
		_leader setVariable [QGVAR(Get_In), True];
	}
	else {
		private _vehicle = _this select 1;		
		_leader setVariable [QGVAR(Get_In), False];		
		_objects deleteAt (_objects find _vehicle);
	};
	
	if (count _objects > 0) then {
		private _count = 0;
		
		for "_count" from _count to (count _objects - 1) do	{
			_vehicle = (_objects select _count);
			
			if ( (alive _vehicle) && { (count (crew _vehicle) == 0) } && { ( { (_vehicle isKindOf _x) } count ["Car","Tank","Air","Ship","StaticWeapon"] > 0) } ) exitWith {
				private _units = (units _group);
				
				[_units, _leader, _vehicle] call FUNC(Get_In_F2);
			};
		};
	};
};

True
