#include "script_component.hpp"

params ["_group","_x"];

private _return = True;

if (GVAR(Radio) select 0) then {
	_return = False;
	
	private _bool = [_group] call FUNC(Radio_F2);
	
	if (_bool) then	{
		private _leader = (leader _group);		
		private _distance = [_group] call FUNC(Radio_F3);
		
		if (_leader distance leader _x < _distance) then {
			_bool = [_x] call FUNC(Radio_F2);
			
			if (_bool) then	{
				_leader = (leader _x);
				_distance = [_x] call FUNC(Radio_F3);
				
				if (_leader distance leader _group < _distance) then {
					_return = True;
				};
			};
		};
	};
};

_return
