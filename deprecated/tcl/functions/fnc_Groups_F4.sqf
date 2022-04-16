#include "script_component.hpp"

params ["_type","_group"];

private _return = True;
private _units = (units _group);
private "_unit";
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (isNil {_unit getVariable _type} ) then {
		_return = _return;
	}
	else {
		if (_unit getVariable _type) then {
			_return = False;			
			_count = (count _units);			
			[_type, _group] call FUNC(Groups_F7);
		};
	};
};

_return
	
