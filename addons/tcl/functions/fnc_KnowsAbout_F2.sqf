#include "script_component.hpp"

params ["_enemy","_group"];
	
if (_group in (GVAR(Reinforcement) select 0) ) exitWith {
	False
};

private _return = True;
private _array = GVAR(Logic) select 0;
private _ai = (_group getVariable QGVAR(AI));
private "_logic";
private _count = 0;

for "_count" from _count to (count _array - 1) do {
	_logic = (_array select _count);
	
	if ( [_enemy, _group, _logic] call FUNC(KnowsAbout_F3) ) exitWith {
		_return = False;
		
		if (_ai select 3) then {
			_return = True;
		}
		else {			
			private _bool = False;
			
			if (_group knowsAbout vehicle _enemy > (_ai select 4) ) then {
				_bool = True;
			}
			else {
				private _leader = (leader _group);
				
				if (_leader distance _logic < (_ai select 5) ) then	{
					_bool = True;
				};
			};
			
			if (_bool) then	{
				if (_ai select 6) then {
					(GVAR(Join) select 0) pushBack _group;
				};
				
				[_enemy, _group, _logic] call FUNC(Reinforcement_F1);
			};
		};
	};
};

_return
