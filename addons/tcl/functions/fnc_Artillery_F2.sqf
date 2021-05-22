#include "script_component.hpp"

params ["_enemy","_group","_logic","_vehicle"];

private _value = [_enemy, _group, _logic] call FUNC(KnowsAbout_F4);

sleep _value;
sleep 10 + (random 30);

if (alive _logic) then {
	private _condition = (_logic getVariable QGVAR(Artillery));
	_condition set [1, True];
	private _units = (units _group);
	_units = _units select { ( (canFire vehicle _x) && { (_x == gunner vehicle _x) } ) };
	
	if (_units isEqualTo [] ) exitWith {
		_condition set [1, False];
		sleep 30 + (random 50);
		_condition set [0, True];
	};
	
	private _time = 0;
	private _value = (count _units);
	private _rounds = 7 + (random 10);
	_rounds = (_rounds / _value);
	private ["_unit","_vehicle","_position","_bool","_magazine"];
	private _count = 0;
	
	for "_count" from _count to (count _units - 1) do {
		_unit = (_units select _count);
		_vehicle = (vehicle _unit);
		_position = [ (getPos _logic select 0) + (random 70 - random 70), (getPos _logic select 1) + (random 70 - random 70), 0];
		_bool = [_vehicle, _position] call FUNC(Artillery_F3);
		
		if (_bool) then {
			_magazine = (getArtilleryAmmo [_vehicle] select 0);
			_time = _vehicle getArtilleryETA [_position, _magazine];
			_vehicle doArtilleryFire [_position, _magazine, _rounds];
			sleep (random 3);
		};
	};
	
	if (_time > 0) then {
		while { (currentcommand _vehicle isEqualTo "FIRE AT POSITION") } do {
			sleep 5;
		};
		
		sleep _time;
		
		if (alive _logic) then {
			_condition set [1, False];
			sleep 170 + (random 150);
		};
	}
	else {
		_condition set [1, False];
		sleep 70 + (random 50);
	};
	
	if (alive _logic) then {
		_condition set [0, True];
	};
	
	_group setVariable [QGVAR(Artillery), True];
};
