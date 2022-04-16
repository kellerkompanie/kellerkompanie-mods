#include "script_component.hpp"

params ["_unit","_group","_object"];

private _bool = True;
private _time = (time + 10);
private _position = (getPos _object);
private _boundingBox = (boundingBox _object select 1 select 1);

_boundingBox = (_boundingBox - 1);

if (_boundingBox < 1) then {
	_boundingBox = (_boundingBox + 1);
};

_position set [1, (_position select 1) - _boundingBox];
_unit forceSpeed -1;
_unit doMove _position;

(GVAR(Rearm) select 1) pushBack _unit;

private _distance = (_unit distance _object);

_time = (_time + _distance);

while { ( (alive _unit) && { (time < _time) } ) } do {
	if (_unit distance _position < _boundingBox) exitWith {
		_bool = False;
		_unit forceSpeed 0;
		_unit doWatch _object;
		_unit setUnitPos "MIDDLE";
		
		sleep 1;
		
 		if (count _this == 4) then {
			private _magazines = (_this select 3);
			[_unit, _group, _object, _magazines] spawn FUNC(Rearm_F5);
		}
		else {
			private _dummy = (_this select 3);
			private _weapon = (_this select 4);
			[_unit, _group, _object, _dummy, _weapon] spawn FUNC(Rearm_F6);
		};
	};
	
	sleep 1;
};

if (_bool) then {
	[_unit, _group, _object, _bool] spawn FUNC(Rearm_F7);
};
