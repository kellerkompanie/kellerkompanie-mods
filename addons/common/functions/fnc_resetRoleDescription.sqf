#include "script_component.hpp"

{
	_type = typeOf _x;
	systemChat str _type;
	_description = getText(configFile >> "CfgVehicles" >> _type >> "displayName");
	_x set3DENAttribute ["description", _description];

} forEach (get3DENSelected "object");