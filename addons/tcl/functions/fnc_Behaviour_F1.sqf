#include "script_component.hpp"

params ["_group"];

private ["_behaviour","_combatMode","_speedMode","_formation"];
private _units = (units _group);
private _leader = (leader _group);

if (_group in (GVAR(Reinforcement) select 1) ) then {
	if (isNull objectParent _leader) then {
		_behaviour = "AWARE";
	}
	else {
		_behaviour = selectRandom ["SAFE","SAFE","AWARE","AWARE"];		
		private _vehicle = (vehicle _leader);
		
		if (_vehicle isKindOf "Air") then {
			_behaviour = "AWARE";
		};
	};
	
	_combatMode = "YELLOW";
	
	if (combatMode _group isEqualTo "RED") then {
		_combatMode = "RED";		
		(GVAR(Red) select 0) pushBack _group;
	};
	
	if (_group in (GVAR(Sneaking) select 0) ) then {
		_behaviour = (behaviour _leader);
		_combatMode = (combatMode _group);
	};
	
	if (speedMode _group isEqualTo "NORMAL") then {
		(GVAR(Speed) select 0) pushBack _group;
	}
	else {
		_group setVariable [QGVAR(Speed), (speedMode _group) ];
	};
	
	_speedMode = selectRandom ["FULL","FULL","FULL","FULL"];
	_formation = selectRandom ["WEDGE","COLUMN","STAG COLUMN"];
}
else {
	_behaviour = "COMBAT";
	
	private _random = (GVAR(Tweak) select 0);
	
	if (floor (random 100) < _random) then {
		{
			_x disableAI "AUTOCOMBAT";
		} forEach _units;
		
		_behaviour = "AWARE";
	};
	
	_combatMode = "YELLOW";
	
	if (_group in (GVAR(Red) select 0) ) then {
		_combatMode = "RED";
	}
	else {
		if (floor (random 100) < 50) then {
			_combatMode = "RED";
		};
	};
	
	if (_group in (GVAR(Sneaking) select 0) ) then {
		_behaviour = (behaviour _leader);
		_combatMode = (combatMode _group);
	};
	
	_formation = selectRandom ["WEDGE","WEDGE","ECH LEFT","ECH RIGHT","VEE"];
	
	if (_group in (GVAR(Speed) select 0) ) then {
		_speedMode = selectRandom ["NORMAL","FULL"];
	}
	else {
		_speedMode = (_group getVariable QGVAR(Speed));
	};
};

if (behaviour _leader isEqualTo "STEALTH") then {
	_behaviour = "STEALTH";
};

_group setSpeedMode _speedMode;
_group setFormation _formation;
_group setBehaviour _behaviour;
_group setCombatMode _combatMode;
_units doFollow _leader;

True
