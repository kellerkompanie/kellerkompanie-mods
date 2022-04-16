#include "script_component.hpp"

params ["_type","_object","_group","_logic"];

if (_type isEqualTo QGVAR(Logic)) exitWith {
	private _logic = _object;	
	private _marker = [ [_type, _logic], (getPos _logic), "Icon", [1,1], "selector_selectedMission", "colorRed"] call FUNC(Create_Marker_F);
};

if (_type isEqualTo QGVAR(KnowsAbout)) exitWith {
	private _marker = format ["%1%2", QGVAR(Logic), _logic];	
	private _position = (getPos _logic);	
	_position set [1, (_position select 1) + 30];	
	_marker setMarkerPos _position;
	
	if (alive _object) then	{
		private _value = (_group knowsAbout vehicle _object);
		
		[_marker, _value] spawn {
			params ["_marker","_value"];
			
			if (_value > 0) then {
				_value = (_value * 3);
				
				while { (_value > 0) } do {
					_marker setMarkerDir (markerDir _marker) + 30;
					_value = _value - 1;					
					sleep 1;
				};
			};
		};	
	};
};

if (_type isEqualTo QGVAR(Spot)) exitWith {
	private _enemy = _object;
	private _marker = format ["%1%2", QGVAR(Logic), _logic];
	private _time = (_logic getVariable QGVAR(Time));
	_time = (_time - time);
	private "_string";
	private _color = "colorGreen";
	private _knowsAbout = (_group knowsAbout vehicle _enemy);
	private _groups = (_logic getVariable QGVAR(Reinforcement));
	private _bool = [_enemy, _groups] call FUNC(Knowledge_F);
	
	if (_bool) then	{
		_color = "colorRed";
		_string = format ["%1 > %2 > %3 > %4 %5 > %6", group _enemy, _group, _group knowsAbout vehicle _enemy, round (leader _group distance _enemy), _groups, round _time];
	}
	else {
		if (alive _enemy) then {
			_color = "colorGreen";
			_string = format ["%1 > %2 > %3 > %4", "Unknown", _group, _groups, round _time];
		}
		else {
			_color = "colorWhite";
			_string = format ["%1 > %2 > %3 > %4", "Killed", _group, _groups, round _time];
		};
	};
	
	_marker setMarkerColor _color;
	_marker setMarkerText _string;
};

if (_type isEqualTo QGVAR(Enemy)) exitWith {
	private _enemy = _object;
	private _marker = [ [_type, _group], (getPos _logic), "ELLIPSE", [100,100], "FDiagonal", "colorRed"] call FUNC(Create_Marker_F);
	
	if (_marker isEqualTo "") exitWith {};
	
	private _position = (getPos _logic);
	private _array = (_logic getVariable QGVAR(Reinforcement));
	private _index = (_array find _group);
	_index = _index + 1;
	private _value = (30 * _index);
	_position set [1, (_position select 1) - _value];
	private _leader = (leader _group);
	private _text = [ [_type, (name _leader) ], _position, "Icon", [1,1], "mil_dot", "colorRed"] call FUNC(Create_Marker_F);
	_text setMarkerText format ["%1 > %2 > %3 > %4", _group, _enemy, (_group knowsAbout vehicle _enemy), round (_leader distance _enemy) ];
	private "_string";
	private _color = "colorGreen";
	private _knowsAbout = (_group knowsAbout vehicle _enemy);
	private _groups = (_logic getVariable QGVAR(Reinforcement));
	private _bool = [_enemy, _groups] call FUNC(Knowledge_F);
	
	if (_bool) then	{
		_object = "Unknown";
		
		if (_knowsAbout > 0) then {
			_object	= _enemy;
			_color = "colorRed";
		};

		_string = format ["%1 > %2 > %3 > %4", _group, _object, (_group knowsAbout vehicle _enemy), round (_leader distance _enemy) ];
	}
	else {
		if (alive _enemy) then {
			_color = "colorGreen";
			_string = format ["%1 > %2 > %3 > %4", _group, "Unknown", (_group knowsAbout vehicle _enemy), round (_leader distance _enemy) ];
		}
		else {
			_color = "colorWhite";
			_string = format ["%1 > %2 > %3 > %4", _group, "Killed", (_group knowsAbout vehicle _enemy), round (_leader distance _enemy) ];
		};
	};
	
	_text setMarkerColor _color;
	_text setMarkerText _string;
	_marker setMarkerColor _color;
	
	if (_knowsAbout < 1) then {
		_knowsAbout = 1;
	};
	
	[_marker, _text, _knowsAbout] spawn	{
		params ["_marker", "_text", "_knowsAbout"];
		
		private _size = 70;
		_size = (_size * _knowsAbout);
		
		while { (_size > 0) } do {
			_marker setMarkerSize [_size, _size];
			_marker setMarkerDir (markerDir _marker) + _size;
			_size = _size - 10;
			sleep 0.1;
		};
		
		deleteMarker _text;
		deleteMarker _marker;
	};
};

if (_type isEqualTo QGVAR(Position)) exitWith {
	private _group = _object;
	
	if (count _this == 3) then {
		private _position = _this select 2;
		private _enemy = (_group getVariable QGVAR(Enemy));
		private _marker = [ [_type, _group], _position, "Icon", [1,1], "mil_dot", "colorWhite"] call FUNC(Create_Marker_F);
		
		if (_marker isEqualTo "") then {
			_marker = format ["%1%2", _type, _group];
			_marker setMarkerPos _position;
		};
		
		_marker setMarkerText format ["%1 %2 %3", _group, (_group knowsAbout vehicle _enemy), round (leader _group distance _position) ];
	}
	else {
		private _marker = format ["%1%2", _type, _group];
		
		deleteMarker _marker;
	};
};

if (_type isEqualTo QGVAR(Remount)) exitWith
{
	private _group = _object;
	
	if (count _this == 2) then {
		private _marker = format ["%1%2", QGVAR(Position), _group];
		private _position = (_group getVariable QGVAR(Position));
		_marker setMarkerPos _position;
		private _ai = (_group getVariable QGVAR(AI));
		_marker setMarkerText format ["%1 %2", _group, _ai];
	}
	else {
		private _vehicle = _this select 2;
		private _marker = [ [_type, _group, _vehicle], (getPos _vehicle), "Icon", [1,1], "mil_dot", "colorWhite"] call FUNC(Create_Marker_F);
		
		if (_marker isEqualTo "") exitWith {};
		
		private _displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
		_marker setMarkerText format ["%1 ( %2 )", _group, _displayName];
		[_group, _vehicle, _marker] spawn {
			params ["_group","_vehicle","_marker"];
			
			while { ( (_group in (GVAR(Remount) select 0) ) && (units _group findIf { ( (isNull objectParent _x) && (assignedVehicle _x == _vehicle) ) } > -1) ) } do {
				sleep 1;
			};
			
			deleteMarker _marker;
		};
	};
};

if (_type isEqualTo QGVAR(Marker)) exitWith {
	private _group = _object;
	private _trigger = _this select 2;
	private _area = (triggerArea _trigger);
	private _shape = "ELLIPSE";
	
	if (_area select 3) then {
		_shape = "RECTANGLE";
	};
	
	private _position = (getPos _trigger);
	private _brush = [ [_type, _position], _position, _shape, [ (_area select 0), (_area select 1) ], "Horizontal", "colorGreen"] call FUNC(Create_Marker_F);
	private _border = [ [_type, _position, _area], _position, _shape, [ (_area select 0), (_area select 1) ], "Border", "colorGreen"] call FUNC(Create_Marker_F);
	_brush setMarkerDir + (_area select 2);
	_border setMarkerDir + (_area select 2);
	
	[_group, _trigger, _brush, _border, _area] spawn {
		params ["_group","_trigger","_brush","_border","_area"];
		
		private ["_enemy","_area0","_area1"];
		
		while { (units _group findIf { (alive _x) } > -1) } do {
			_brush setMarkerColor "colorGreen";
			_enemy = (_group getVariable QGVAR(Enemy));

			if (alive _enemy) then {
				if (_enemy inArea _trigger) then {
					_brush setMarkerColor "colorRed";
				};
			};
			
			_area0 = (_area select 0);
			_area1 = (_area select 1);
			
			while { ( (_area0 > 0) && (_area1 > 0) ) } do {
				_brush setMarkerSize [_area0, _area1];
				_area0 = (_area0 - 10);
				_area1 = (_area1 - 10);
				sleep 0.3;
			};
		};
		
		deleteMarker _brush;
		deleteMarker _border;
	};
};

if (_type isEqualTo QGVAR(Delete)) exitWith {
	private _logic = _object;
	private _marker = format ["%1%2", QGVAR(Logic), _logic];
	deleteMarker _marker;
};

True
