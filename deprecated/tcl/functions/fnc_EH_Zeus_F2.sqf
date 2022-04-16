#include "script_component.hpp"

params ["_curator","_group","_waypoint"];

if (GVAR(Server)) then {
	(GVAR(Zeus) select 1) pushBackUnique _group;	
	(GVAR(Freeze) select 0) pushBackUnique _group;
	
	if (_group in (GVAR(Garrison) select 0) ) then {
		private _units = (units _group);		
		private _leader = (leader _group);		
		_units doFollow _leader;		
		DELETE_AT(GVAR(Garrison),0,_group);		
		private _array = (_group getVariable QGVAR(Garrison));		
		GVAR(Garrison) set [1, (GVAR(Garrison) select 1) - _array];
	};
}
else {
	GVAR(Host) = _this; 
	publicVariable QGVAR(Host);
};

True
	