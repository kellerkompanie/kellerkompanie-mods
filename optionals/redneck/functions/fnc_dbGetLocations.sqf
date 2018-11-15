#include "script_component.hpp"

private _ret = call compile ("extDB3" callExtension format [ "0:keko_redneck:getLocations:%1", EGVAR(persistency,key)]);
private _locations = [];

if ((_ret select 0) == 1) then {
	INFO("dbGetLocations: loading sucessful");

	// assume loading was sucess
	{
		_x params ["_locationVariable", "_side"];
		_locations pushBack [_locationVariable, _side];
		INFO_2("dbGetLocations: loaded location %1 %2", _locationVariable, _side);
	} forEach (_ret select 1);
	true
} else {
	ERROR("dbGetLocations: loading unsucessful %1", _ret);
	false
};

_locations
