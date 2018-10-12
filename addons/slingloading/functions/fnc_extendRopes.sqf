#include "script_component.hpp"

params ["_vehicle","",["_ropeIndex",0]];

if(local _vehicle) then {
	private ["_existingRopes"];

	_existingRopes = [_vehicle,_ropeIndex] call FUNC(getRopes);

	if(count _existingRopes > 0) then {
		private _ropeLength = ropeLength (_existingRopes select 0);
		if(_ropeLength <= 100 ) then {
			{
				ropeUnwind [_x, 3, 5, true];
			} forEach _existingRopes;
		};
	};
} else {
	_this remoteExecCall [QFUNC(extendRopes), _vehicle];
};
