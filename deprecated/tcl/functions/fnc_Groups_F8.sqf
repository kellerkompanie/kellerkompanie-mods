#include "script_component.hpp"

params ["_group"];

private _random = (random 15);
private _units = (units _group);
private _leader = (leader _group);

_group setVariable [QGVAR(Move), 5];

private _vehicle = (vehicle _leader);

_group setVariable [QGVAR(Enemy), objNull];
_group setVariable [QGVAR(Watch), (time + _random) ];
_group setVariable [QGVAR(Position), (getPos _leader) ];
_group setVariable [QGVAR(Waypoint), (getPos _leader) ];
_group setVariable [QGVAR(Behaviour), [ (behaviour _leader), (combatMode _group), (formation _group), (speedMode _group) ] ];

if (getArray (configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "availableForSupportTypes") select 0 isEqualTo "Artillery") then {
	(GVAR(Artillery) select 0) pushBack _group;
	
	_group setVariable [QGVAR(Artillery), True];
	
	if (_group in (GVAR(Location) select 0) ) exitWith {
		DELETE_AT(GVAR(Location), 0, _group);
	};
};

if (isNil { (_group getVariable QGVAR(AI)) } )then {
	_group setVariable [QGVAR(AI), GVAR(AI)];
}
else {
	private _text = format ["%1<t align='left'>The '<t color='#32cd32'>AI</t>' settings of <t color='#ffff00'>%2</t> are not configurated properly!<br/>Please check the '<t color='#32cd32'>AI</t>' settings of <t color='#ffff00'>%2</t> and correct them.", "<t size='1.5' color='#ff0000' underline='True'>Warning!</t><br/>", _group];
	private _array = GVAR(AI);
	private _ai = _group getVariable QGVAR(AI);
	
	if (_array isEqualTypeArray _ai) then {
		_text = _text;
	}
	else {
		hint parseText _text;
	};
};

if (_group getVariable QGVAR(AI) select 7) then {
	[QGVAR(Freeze), _group] call FUNC(Groups_F7);
};

if (_group getVariable QGVAR(AI) select 8) then {
	[QGVAR(Default), _group] call FUNC(Groups_F7);
};

True