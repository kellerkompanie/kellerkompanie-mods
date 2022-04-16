#include "script_component.hpp"

params ["_units"];
	
private ["_unit","_vehicle","_weapon","_ammo"];

private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);	
	_unit allowFleeing 0;	
	_unit disableAI "TARGET";	
	_vehicle = (vehicle _unit);
	
	if (_vehicle isKindOf "StaticWeapon") then {
		private _group = (group _unit);
		
		(GVAR(Static_Weapon) select 0) pushBack _unit;
		
		(GVAR(Static_Weapon) select 1) pushBack _vehicle;
		
		[_unit, _group, _vehicle] spawn FUNC(Static_Weapon_F4);
	};
	
	[_unit] call FUNC(Skill_F);	
	[_unit] call FUNC(Marker_F1);	
	_unit setVariable [QGVAR(Take_Cover), [time, [], (getPos _unit) ] ];
};

if (GVAR(System) select 3) then {
	(GVAR(Players) select 1) append _units;
};

True
