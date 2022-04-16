#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _return = False;

if (_group in (GVAR(Hold) select 0) ) then {
	if ( [_group, _logic] call FUNC(Trigger_F) ) then {
		_return = True;
	};
}
else {
	if (_group in (GVAR(Waiting) select 0) ) then {
		if ( [_enemy, _group, _logic] call FUNC(Waiting_F1) ) then {
			_return = True;			
			GVAR(Waiting) set [0, (GVAR(Waiting) select 0) - [_group] ];
		};
	}
	else {
		_return = True;
	};
};

_return
