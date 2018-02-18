_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
diag_log "running teleport menu module init";

_objects = synchronizedObjects _logic;
{
	diag_log format ["adding menu to: %1", str _x];
	[_x] call keko_fnc_addTeleportMenu;
} forEach _objects;