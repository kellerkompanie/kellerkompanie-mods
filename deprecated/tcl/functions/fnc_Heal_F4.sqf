#include "script_component.hpp"

params ["_unit","_group","_object"];

if (alive _unit) then {
	_unit setUnitPos "MIDDLE";
	_unit forceSpeed 0;
	_object forceSpeed -1;
	_object doMove (getPos _unit);
	
	private _time = (time + 10);
	private _distance = (_unit distance _object);
	
	_time = (_time + _distance);
	
	while { ( (alive _unit) && { (alive _object) } && { (time < _time) }  ) } do {
		if (_object distance _unit < 3) exitWith {
			_unit doWatch _object;
			_object doWatch _unit;
			_object action ["HealSoldier", _unit];
			sleep 5;
			_unit doWatch objNull;
			_object doWatch objNull;
		};
		
		sleep 1;
	};
	
	_unit forceSpeed -1;
	_unit setUnitPos "AUTO";
};

DELETE_AT(GVAR(Heal),0,_unit);
DELETE_AT(GVAR(Heal),0,_object);
[_object, _group] call FUNC(Follow_F1);

sleep 30 + (random 50);

DELETE_AT(GVAR(Heal),1,_unit);
DELETE_AT(GVAR(Heal),1,_object);
