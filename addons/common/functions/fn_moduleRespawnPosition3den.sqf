_logic = _this select 0;

diag_log text "[KEKO] (common) running moduleRespawn3den";

_respawnSide = _logic getVariable ["RespawnSide", 0];

_objects = synchronizedObjects _logic;
if ((count _objects) > 0) then {
	{
		diag_log text format ["[KEKO] (common) setting respawn to position of: %1 @ %2", _x, getPos _x];
		[getPos _x, _respawnSide] call keko_common_fnc_setRespawnPosition;
	} forEach _objects;
} else {
	[getPos _logic, _respawnSide] call keko_common_fnc_setRespawnPosition;
};

