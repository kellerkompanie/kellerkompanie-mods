_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
//diag_log "running teleport menu module init";

// FIXME don't run on headless clients

_objects = synchronizedObjects _logic;
{
	//diag_log format ["adding menu to: %1", str _x];
	[_x] call keko_logistics_fnc_addLogisticsMenu;
} forEach _objects;