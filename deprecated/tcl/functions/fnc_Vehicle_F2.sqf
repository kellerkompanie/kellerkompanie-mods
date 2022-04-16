#include "script_component.hpp"

params ["_group","_logic","_vehicle"];

(GVAR(Assign) select 0) pushBack _vehicle;
(GVAR(Vehicle) select 0) pushBack _vehicle;

private _driver = (driver _vehicle);
private _gunner = (gunner _vehicle);
_vehicle forceSpeed 0;
sleep 10;
_vehicle forceSpeed -1;
private _time = (time + 10);

while { ( (_group in (GVAR(Reinforcement) select 0) ) && { (canFire _vehicle) } && { (someAmmo _vehicle) } && { (alive _driver) } && { (_driver in _vehicle) } && { (alive _gunner) } && { (_gunner in _vehicle) } ) } do {
	if (time > _time) then {
		private _units = (units _group);
		
		if (_units findIf { ( (isNull objectParent _x) && { (currentCommand _x isEqualTo "GET IN") } && { (assignedVehicle _x == _vehicle) } ) } > -1) exitWith {
			_time = (time + 10);
			[_group, _vehicle] spawn FUNC(Vehicle_F3);
		};
	};
	
	sleep 5;
};

if ( (_group in (GVAR(Reinforcement) select 0) ) && { (someAmmo _vehicle) } ) then {
	if (alive _driver) then {
		[_driver] orderGetIn False; [_driver] allowGetIn False;
		
		while { ( (alive _driver) && { (_driver in _vehicle) } ) } do {
			sleep 1;
		};
		
		if (alive _driver) then	{
			_driver assignAsGunner _vehicle;
			[_driver] orderGetIn True; [_driver] allowGetIn True;
			sleep 30 + (random 50);
			_gunner = _driver;
		};
	};
	
	if (alive _gunner) then {
		sleep 30 + (random 50);
	};
	
	if (_group in GVAR(Reinforcement) select 0 ) then {
		private _crew = (crew _vehicle);
		_crew orderGetIn False; 
		_crew allowGetIn False;
	};
};

DELETE_AT(GVAR(Vehicle), 0, _vehicle);
