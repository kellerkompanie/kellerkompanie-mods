#include "script_component.hpp"

params ["_unit","_enemy","_group","_bool","_array"];

private _return = objNull;

if (alive _unit) then {
	private _position = _unit;
	private _distance = (GVAR(Feature) select 17);
	private _waypoint = (_group getVariable QGVAR(Waypoint));
	
	if (_unit distance _waypoint < _distance) then {
		_position = _waypoint;
	};
	
	if (_group in (GVAR(Flanking) select 0) ) then {
		_position = [_unit, _group, _enemy, _position, _distance] call FUNC(Flanking_F2);
	};
	
	private _objects = (_array select 1);
	
	if ( (_objects isEqualTo [] ) || (_unit distance (_array select 2) > _distance) ) then {
		_objects = nearestTerrainObjects [_position, ["ROCK","ROCKS","HIDE","BUSH","TREE","WALL","HOUSE","FENCE"], _distance];
		_array set [1, _objects];
		_array set [2, (getPos _unit) ];
	};
	
	_objects = _objects - (GVAR(Take_Cover) select 1);
	
	if (_objects isEqualTo [] ) exitWith {};
	
	private "_object";
	private _count = 0;
	
	for "_count" from _count to (count _objects - 1) do {
		_object = (_objects select _count);
		
		if ( (_bool) || (_unit distance _waypoint < _distance) || ( (_unit distance _enemy) > (_enemy distance _object) ) ) then {
			if ( ( (_unit distance _object) < (_enemy distance _object) ) && { (_enemy distance _object > _distance) } ) then {
				if ( (boundingBox _object select 1) findIf { (_x > 15) } > -1) exitWith { };
				if ( (GVAR(Take_Cover) select 1) findIf { (_object distance _x < 3) } > -1) exitWith { };
				
				if (_bool) exitWith	{
					if ( [_group, _object] call FUNC(Trigger_F)) then {
						_return = _object;
					};
				};
				
				_return = _object;
			};
		};
		
		if (alive _return) exitWith { };
	};
	
	if (alive _return) then	{
		_return;
	};
};

_return
