#include "script_component.hpp"

params ["_group"];
	
private _units = GVAR(Players) select 0;

if (GVAR(System) select 3) then {
	_units = GVAR(Players) select 1;
};

_units = _units select { ( (alive _x) && { (_group knowsAbout vehicle _x > 0) } && { (side _group getFriend side _x < 0.6) } ) };

private "_unit";
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if ( [_unit, _group] call FUNC(KnowsAbout_F2) ) exitWith {
		private _enemy = _unit;		
		private _logic = [_enemy] call FUNC(Logic_F1);
		
		(GVAR(Logic) select 0) pushBack _logic;
		
		_logic setVariable [QGVAR(Group), group _enemy];		
		_logic setVariable [QGVAR(Units), units _enemy];
		
		[QGVAR(Logic), _logic] call FUNC(Marker_F1);
		
		_logic setVariable [QGVAR(Artillery), [True, False] ];
		
		[_enemy, _group, _logic] call FUNC(Reinforcement_F1);
	};
};

True
