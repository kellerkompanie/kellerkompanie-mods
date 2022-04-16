#include "script_component.hpp"

params ["_curator","_unit"];

private _group = (group _unit);
private _leader = (leader _group);
private _vehicle = (vehicle _leader);

if (_unit == _vehicle) then {	
	if (GVAR(Server)) then {
		(GVAR(Zeus) select 0) pushBack _group;
	}
	else {
		GVAR(Host) = [_group]; 
		publicVariable QGVAR(Host);
	};
	
	[_group] spawn FUNC(EH_Zeus_F4);
};
