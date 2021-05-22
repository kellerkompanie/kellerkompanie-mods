#include "script_component.hpp"

params ["_enemy","_group","_logic"];

if (alive _enemy) then {
	if ( [_enemy, _group, _logic] call FUNC(Reinforcement_F3) ) then {
		private _x = [_enemy, _group] call FUNC(Reinforcement_F4);
		private _units = (units _x);
		
		if (_units findIf { (alive _x) } > -1) then {
			private _leader = (leader _x);
			
			if (_x in (GVAR(Join) select 0) ) exitWith {
				DELETE_AT(GVAR(Join), 0, _x);
			};
			
			if (isNull objectParent _leader) then {
				_leader playMove "Acts_listeningToRadio_Loop";
				
				[_leader] spawn	{
					params ["_leader"];
					
					private _value = 5 + (random 7);
					sleep _value;
					_leader switchMove "";
				};
			};
			
			private _ai = (_logic getVariable QGVAR(AI));
			
			if (_ai select 11) then {
				_x setVariable [QGVAR(AI), _condition];
			};
			
			[_enemy, _x, _logic] call FUNC(Reinforcement_F1);
			private _vehicle = (vehicle _leader);
			
			if (_vehicle isKindOf "Helicopter") then {
				[_enemy, _group, _vehicle] spawn FUNC(Smoke_F1);
			};
		};
	};
};

True
