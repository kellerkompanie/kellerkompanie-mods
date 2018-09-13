#include "script_component.hpp"

params["_logic"];

diag_log text "[KEKO] (common) running moduleRespawn3den";

private _respawnSide = _logic getVariable [QGVAR(RespawnSide), 0];

private _objects = synchronizedObjects _logic;
if ((count _objects) > 0) then {
	{
		diag_log text format ["[KEKO] (common) setting respawn to position of: %1 @ %2", _x, getPos _x];
		[getPos _x, _respawnSide] call FUNC(setRespawnPosition);
	} forEach _objects;
} else {
	[getPos _logic, _respawnSide] call FUNC(setRespawnPosition);
};
