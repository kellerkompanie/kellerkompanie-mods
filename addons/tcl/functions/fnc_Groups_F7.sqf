#include "script_component.hpp"

params ["_type","_group"];

private _string = call compile _type;
private _array = (_string select 0);

if (_group in _array) exitWith {
	private _error = [];
	
	_error pushBack _group;	
	_error pushBack format ["<t color='#ffff00'>( %1 )</t>", count units _group];
	
	private _text = _error joinString " ";
	
	hint parseText format ["%1<t align='left'>A.I. group <t color='#32cd32'>%2</t> was about to initialize multiple times in the same A.I. group type '<t color='#32cd32'>%3</t>'.<br/>Please make sure to use any A.I. group type for each A.I. group except '<t color='#32cd32'>Location</t>' A.I. group(s) ONCE only.", "<t size='1.5' color='#ff0000' underline='True'>Warning!</t><br/>", _text, _type];
};

if (_type == QGVAR(Idle)) exitWith {
	(GVAR(Idle) select 0) pushBack _group;
};

if (_type == QGVAR(Hold)) exitWith {
	(GVAR(Hold) select 0) pushBack _group;
	
	private "_object";
	
	if (count _this == 3) then {
		_object = _this select 2;
	}
	else {
		private _leader = (leader _group);		
		_object = createTrigger ["EmptyDetector", (getPos _leader) ];		
		_object setTriggerArea [50, 50, 0, False];		
		private _side = format ["%1", (side _leader) ];		
		_object setTriggerActivation [_side, "PRESENT", False];
	};
	
	_group setVariable [QGVAR(Enemy), objNull];	
	_group setVariable [QGVAR(Trigger), _object];
	
	[QGVAR(Marker), _group, _object] call FUNC(Marker_F1);
};

if (_type == QGVAR(Defend)) exitWith {
	(GVAR(Defend) select 0) pushBack _group;
};

if (_type == QGVAR(Custom)) exitWith {
	(GVAR(Custom) select 0) pushBack _group;
};

if (_type == QGVAR(Freeze)) exitWith {
	(GVAR(Freeze) select 0) pushBack _group;
};

if (_type == QGVAR(Default)) exitWith {
	(GVAR(Default) select 0) pushBack _group;
};

if (_type == QGVAR(Disabled)) exitWith {
	(GVAR(Disabled) select 0) pushBack _group;
};

if (_type == QGVAR(Enhanced)) exitWith {
	(GVAR(Freeze) select 0) pushBack _group;	
	(GVAR(Default) select 0) pushBack _group;	
	(GVAR(Enhanced) select 0) pushBack _group;
};

True

