_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};
//diag_log "running teleport menu module init";

_allowBLUFOR = _logic getVariable ["allowBLUFOR", true];
_allowINDFOR = _logic getVariable ["allowINDFOR", true];
_allowOPFOR  = _logic getVariable ["allowOPFOR",  true];
_allowCIV 	 = _logic getVariable ["allowCIV",    true];

_objects = synchronizedObjects _logic;
{
	//diag_log format ["adding menu to: %1", str _x];
	[_x, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportMenu;
} forEach _objects;