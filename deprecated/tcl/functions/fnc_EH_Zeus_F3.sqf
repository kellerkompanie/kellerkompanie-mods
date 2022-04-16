#include "script_component.hpp"

params ["_curator","_group","_waypoint"];

if (GVAR(Server)) then {
	private _array = (waypoints _group);
	
	if (count _array == 1) then {
		DELETE_AT(GVAR(Zeus), 1, _group);		
		DELETE_AT(GVAR(Freeze), 0, _group);		
		[_group] spawn FUNC(Garrison_F1);
	};
}
else {
	GVAR(Host) = _this; 
	publicVariable QGVAR(Host);
};

True
	