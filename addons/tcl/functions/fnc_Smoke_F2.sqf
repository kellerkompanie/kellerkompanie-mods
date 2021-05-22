#include "script_component.hpp"

params ["_enemy","_group","_vehicle"];

if (GVAR(Feature) select 5) then {
	if (floor (random 100) < (GVAR(Feature) select 6) ) then {
		private _units = (units _group);
		_units = _units select { ( (_x in assignedVehicle _x) && { (assignedVehicleRole _x select 0 == "Cargo") } && { ("SmokeShell" in magazines _x) } ) };
		
		if (_units isEqualTo [] ) exitWith {};
		
		private _velocity = (vectorMagnitude velocity _vehicle) * 3.6;
		
		if (_velocity > 10) then {
			sleep 1 + (random 3);
		};
		
		private _direction = _enemy getDir _vehicle;
		private ["_unit","_position","_smoke","_speed","_value","_angle"];
		private _random = 1 + (random 3);
		private _count = 0;
		
		for "_count" from _count to (count _units - 1) do {
			_unit = (_units select _count);
			
			if (_random == 0) exitWith {};
			
			if ( (alive _unit) && { (_random > 0) } && { (floor (random 100) < 50) } ) then {
				_unit removeMagazines "SmokeShell";
				sleep (random 3);
				_position = [ (getPos _unit select 0), (getPos _unit select 1), (getPos _unit select 2) + 2];
				_smoke = createVehicle ["SmokeShell", _position, [], 0, "NONE"];
				_random = _random - 1;
				_speed = 7 + (random 3);
				_value = 150 + (random 60);
				_angle = (_direction - _value);
				_smoke setVelocity [ (sin _angle) * _speed, (cos _angle) * _speed, _speed];
			};
		};
	};
};
