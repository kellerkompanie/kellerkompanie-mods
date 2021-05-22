#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _knowsAbout = (_group getVariable QGVAR(KnowsAbout));
private _ai = (_group getVariable QGVAR(AI) select 10);
private _value = [QGVAR(Time), (time + _ai) ];

if ( (alive _enemy) && { (_group knowsAbout vehicle _enemy > 0) } ) then {
	_knowsAbout = 0;	
	_logic setVariable _value;	
	_group setVariable _value;
}
else {
	if (_group in (GVAR(Reinforcement) select 1) ) then {
		_knowsAbout = 0;
	}
	else {
		if (_knowsAbout > 3) then {
			private _time = (_group getVariable QGVAR(Time));
			
			if (time > _time) then {
				private _array = ( (GVAR(Hold) select 0) + (GVAR(Join) select 0) + (GVAR(Defend) select 0) + (GVAR(Artillery) select 0) );
				
				if (_group in _array) then {
					(GVAR(Retreat) select 0) pushBack _group;
				}
				else {
					_group setVariable _value;
				};
			};
		};
		
		_knowsAbout = _knowsAbout + 1;
	};
};

_group setVariable [QGVAR(KnowsAbout), _knowsAbout];

if (_knowsAbout == 3) then {
	(GVAR(Reinforcement) select 2) pushBack _group;
}
else {
	if (_knowsAbout == 0) then {
		if (_group in (GVAR(Reinforcement) select 2) ) then {
			DELETE_AT(GVAR(Reinforcement), 2, _group);
		};
	};
};

if (_group in (GVAR(Sneaking) select 0) ) then {
	private _leader = (leader _group);
	
	if ( (_leader distance _logic < 100) || ( [_enemy, _group] call FUNC(Sneaking_F) ) ) then {
		private _units = (units _group);		
		{_x setUnitPos "AUTO"} count _units;		
		DELETE_AT(GVAR(Sneaking), 0, _group);		
		[_group] call FUNC(Behaviour_F1);
	};
};

True
