#include "script_component.hpp"

params ["_vehicle","",["_ropeIndex",0]];

if(local _vehicle) then {
	private _existingRopes = [_vehicle,_ropeIndex] call FUNC(getRopes);

	if(count _existingRopes > 0) then {
		private _ropeLength = ropeLength (_existingRopes select 0);
		if(_ropeLength <= 2 ) then {
			_this call FUNC(releaseCargo);
		} else {
			{
				if(_ropeLength >= 10) then {
					ropeUnwind [_x, 3, -5, true];
				} else {
					ropeUnwind [_x, 3, -1, true];
				};
			} forEach _existingRopes;
		};
	};
} else {
	_this remoteExecCall [QFUNC(shortenRopes), _vehicle];
};
