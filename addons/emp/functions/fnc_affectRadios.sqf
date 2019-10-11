#include "script_component.hpp"

if (!isServer) exitWith {};

params ["_origin", "_range"];

{
    if(isPlayer _x) then {
        _x setVariable ["tf_unable_to_use_radio", true];
    };
} forEach nearestObjects [_origin, ["CAManBase"], _range];
