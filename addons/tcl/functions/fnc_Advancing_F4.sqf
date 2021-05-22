#include "script_component.hpp"

params ["_object","_group","_distance"];

sleep (random 1);

private _array = [];
private _units = (units _group);
private _leader = (leader _group);

{
	if ( (floor (random 100) < 5) && { (alive _object) } ) then {
		_x setUnitPos "DOWN"
	} 
	else {
		if (floor (random 100) < 35) then {
			_x setUnitPos "MIDDLE";
		};
	}; 
} forEach _units;

_units select { ( (_x == _leader) || (floor (random 100) < 50) ) } apply {_x doWatch (getPos _object); _array pushBack _x};
(GVAR(Watch) select 0) append _array;

if (_distance > 300) then {
	if (_leader hasWeapon "Binocular") then {
		_leader selectWeapon "Binocular";
	};
};

sleep (random 30);

if (currentWeapon _leader isEqualTo "Binocular") then {
	_leader selectWeapon (primaryWeapon _leader);
};

GVAR(Watch) set [0, (GVAR(Watch) select 0) - _array];

if (_group in (GVAR(Suppressed) select 0) ) then {
	_group = _group;
} 
else { 
	{_x setUnitPos "AUTO"} count _units;
};
