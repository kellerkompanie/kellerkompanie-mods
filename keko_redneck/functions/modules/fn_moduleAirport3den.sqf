_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};

_id = _logic getVariable ["id", ""];

[position _logic, "AIRPORT", _id] call keko_redneck_common_fnc_createPOI;