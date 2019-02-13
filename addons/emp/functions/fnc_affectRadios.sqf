#include "script_component.hpp"

if (!isServer) exitWith {WARNING("function affectRadios needs to be run on server! exiting.")};

params ["_origin", "_range"];

{
	if(isPlayer _x) then {
		_x setVariable ["tf_unable_to_use_radio", true];
	};
} forEach nearestObjects [_origin, ["CAManBase"], _range];
