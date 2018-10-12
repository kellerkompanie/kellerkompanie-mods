#include "script_component.hpp"

params ["_vehicle","_player",["_ropeIndex",0]];

if(local _vehicle) then {
	private ["_existingRopes"];

	_existingRopes = [_vehicle,_ropeIndex] call FUNC(getRopes);

	if(count _existingRopes > 0) then {
		_ropeLength = ropeLength (_existingRopes select 0);
		if(_ropeLength <= 100 ) then {
			{
				ropeUnwind [_x, 3, 5, true];
			} forEach _existingRopes;
		};
	};
} else {
	[_this,QFUNC(extendRopes),_vehicle,true] call FUNC(remoteExec);
};
