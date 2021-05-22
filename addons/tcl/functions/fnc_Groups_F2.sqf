#include "script_component.hpp"

params ["_type","_group","_objects"];

if (_type isEqualTo QGVAR(Location)) then {
	[_group, _objects] call FUNC(Groups_F3);
}
else {
	if (isNil {_group getVariable _type} ) then {
		private _bool = [_type, _group] call FUNC(Groups_F4);
		
		if (_bool) then {
			_bool = [_type, _group, _objects] call FUNC(Groups_F5);
			
			if (_bool) then {
				[_type, _group] call FUNC(Groups_F6);
			};
		};
	}
	else {
		if (_group getVariable _type) then {
			[_type, _group] call FUNC(Groups_F7);
		};
	};
};

True

