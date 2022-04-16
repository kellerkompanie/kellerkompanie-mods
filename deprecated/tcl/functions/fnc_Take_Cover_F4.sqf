#include "script_component.hpp"

params ["_unit","_enemy","_group","_object","_bool"];

private _random = 50;

if (_unit distance _object > 10) then {
	_random = 75;
};

if (floor (random 100) < _random) then {
	_unit setUnitPos "UP";
}
else {
	_unit setUnitPos "MIDDLE";
};

private ["_marker","_text"];

if (GVAR(Debug) select 3) then {
	_marker = [ [_unit, time], (getPos _object), "Icon", [1,1], "mil_triangle", "colorWhite"] call FUNC(Create_Marker_F);
	_text = {private _string = "Take Cover"; if (_unit in (GVAR(Flanking) select 1) ) then {_string = "Flanking"} else {if (_unit in (GVAR(Flanking) select 2) ) then {_string = "Flanking"} }; format ["%1 ( %2 ) %3 %4", _unit, _string, (_unit distance _object), _object] };
	_marker setMarkerText call _text;
};

private _direction = (_object getDir _enemy);
private _boundingBox = (boundingBox _object select 1 select 0);

if (_boundingBox > 3) then {
	_boundingBox = 3;
}
else {
	if (_boundingBox < 1) then {
		_boundingBox = _boundingBox + 1;
	};
};

private _cover = [_object, - _boundingBox, _direction] call FUNC(Real_Pos_F);
_unit doMove _cover;
private _spot = objNull;

if (GVAR(Debug) select 6) then {
	_spot = createVehicle ["Sign_Arrow_Large_Blue_F", _cover, [], 0, "CAN_COLLIDE"];
};

private _time = (time + 10);
_time = _time + (_unit distance _cover);

while { ( (alive _unit) && { (time < _time) } ) } do {
	if (_unit distance2D _cover < _boundingBox) exitWith {
	};
	
	if (GVAR(Debug) select 3) then {
		_marker setMarkerText call _text;
	};
	
	sleep 1;
};

if (GVAR(Debug) select 3) then {
	deleteMarker _marker;
};

if (alive _spot) then {
	deleteVehicle _spot;
};

if (alive _unit) then {
	private _flanking = True;
	
	if (time < _time) then {
		if (GVAR(Debug) select 6) then {
			_spot = createVehicle ["Sign_Arrow_Large_Green_F", _cover, [], 0, "CAN_COLLIDE"];
		};
		
		_unit setUnitPos "AUTO";
		
		if (_object isKindOf "House") exitWith {
			sleep 10 + (random 30);
		};
		
		_unit forceSpeed 0;
		
		if ( (floor (random 100) < 50) && { (_unit distance _enemy < 300) } ) then {
			sleep 10 + (random 30);
			
			if (alive _unit) then {				
				_group = (group _unit);
				private _waypoint = (_group getVariable QGVAR(Waypoint));
				
				if (_unit distance _waypoint < 100) then {
					if (alive _spot) then {
						deleteVehicle _spot;
						_spot = createVehicle ["Sign_Arrow_Large_F", _cover, [], 0, "CAN_COLLIDE"];
					};
					
					sleep 10 + (random 30);
				};
			};
		}
		else {
			sleep 10 + (random 30);
		};
		
		_random = (GVAR(Feature) select 18);
		
		if (_group in (GVAR(Flanking) select 0) ) then {
			_random = 100;
		};
		
		if (floor (random 100) < _random) then {
			_array = ( (GVAR(Flanking) select 1) + (GVAR(Flanking) select 2) );
			_time = (time + 10);
			_random = (random 30);
			_time = (_time + _random);
			DELETE_AT(GVAR(Take_Cover),0,_unit);
			
			if (alive _spot) then {
				deleteVehicle _spot;
				_spot = createVehicle ["Sign_Arrow_Large_Yellow_F", _cover, [], 0, "CAN_COLLIDE"];
			};
			
			while { alive _unit } do {
				if ( (time > _time) || (_unit in (GVAR(Take_Cover) select 0) ) ) exitWith {
					_flanking = False;
				};
				
				sleep 1;
			};
		};
		
		_unit forceSpeed -1;
		
		if (alive _spot) then {
			deleteVehicle _spot;
		};
	};
	
	_unit setUnitPos "AUTO";
	
	if (_flanking) then {
		DELETE_AT(GVAR(Take_Cover),0,_unit);
	};
	
	sleep 10 + (random 30);
	
	DELETE_AT(GVAR(Take_Cover),1,_object);
}
else {
	DELETE_AT(GVAR(Take_Cover),0,_unit);
	DELETE_AT(GVAR(Take_Cover),1,_object);
};
