#include "script_component.hpp"

_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (loadout) running moduleAddLoadoutMenu3den";

_objects = synchronizedObjects _logic;
{
	diag_log text format ["[KEKO] (loadout) adding menu to: %1", _x];
	[_x] call FUNC(addLoadoutMenu);
} forEach _objects;

deleteVehicle _logic;
