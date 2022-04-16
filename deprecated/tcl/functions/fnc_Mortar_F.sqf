#include "script_component.hpp"

params ["_unit","_group","_vehicle"];

if (_group in (GVAR(Reinforcement) select 0) ) then {
	private _enemy = (_group getVariable QGVAR(Enemy));
	
	if ( (alive _enemy) && { (_group knowsAbout vehicle _enemy > 0) } ) then {
		sleep 5 + (random 10);
		private _leader = (leader _group);
		(GVAR(Static_Weapon) select 2) pushBack _vehicle;
		private _logic = (_group getVariable QGVAR(Logic));
		private _position = [ (getPos _logic select 0) + (random 50 - random 50), (getPos _logic select 1) + (random 50 - random 50), 0];
		private _bool = [_vehicle, _position] call FUNC(Artillery_F3);
		
		if (_bool) then {
			private _condition = (_logic getVariable QGVAR(Artillery));
			_condition set [1, True];
			private _rounds = 1 + (random 3);
			private _magazine = (getArtilleryAmmo [_vehicle] select 0);
			_time = _vehicle getArtilleryETA [_position, _magazine];
			_vehicle doArtilleryFire [_position, _magazine, _rounds];
			sleep _time;
			_condition set [1, False];
			sleep (_time * _rounds);
		}
		else {
			[_unit, _group, _vehicle] call FUNC(Static_Weapon_F5);
			
			sleep 30 + (random 50);
		};
		
		DELETE_AT(GVAR(Static_Weapon),2,_vehicle);
	};
};
