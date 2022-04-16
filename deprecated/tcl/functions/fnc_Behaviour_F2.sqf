#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _units = (units _group);
private _leader = (leader _group);
{_x setUnitPos "AUTO"} count _units;
private _speedMode = (speedMode _group);
private _formation = (formation _group);
private _behaviour = (behaviour _leader);
(GVAR(Behaviour) select 0) pushBack _group;
private _combatMode = (combatMode _group);

if (_leader distance _logic > 300) then {
	[_enemy, _group, _logic] spawn FUNC(Unassign_F1);
};

_group setSpeedMode "FULL";
_group setBehaviour "AWARE";
_group setCombatMode "YELLOW";

if (floor (random 100) < 35) then {
	_group setFormation "WEDGE";
}
else {
	_group setFormation "STAG COLUMN";
};

_units = _units - (GVAR(Helicopter) select 0);
_units doFollow _leader;
{_x forceSpeed -1} count _units;
private ["_waypoint","_knowsAbout"];

while { ( (units _group findIf { (alive _x) } > -1) && { (_group in (GVAR(Reinforcement) select 0) ) } ) } do {
	_waypoint = (_group getVariable QGVAR(Waypoint));	
	_knowsAbout = (_group getVariable QGVAR(KnowsAbout));
	
	if (_knowsAbout == 0) exitWith {
		_group setSpeedMode _speedMode;		
		_group setFormation _formation;		
		_group setBehaviour _behaviour;		
		_group setCombatMode _combatMode;
	};
	
	if (_leader distance _waypoint < 100) then {
		if (behaviour _leader isEqualTo _behaviour) exitWith {};		
		_group setBehaviour _behaviour;
	};
	
	sleep 5;
};

DELETE_AT(GVAR(Behaviour),0,_group);
