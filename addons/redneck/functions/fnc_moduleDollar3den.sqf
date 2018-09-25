#include "script_component.hpp"

params["_logic","",""];

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};

private _id = _logic getVariable ["id", ""];

[position _logic, "DOLLAR", _id] call keko_redneck_common_fnc_createPOI;
