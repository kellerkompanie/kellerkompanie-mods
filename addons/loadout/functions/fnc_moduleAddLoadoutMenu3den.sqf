_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (loadout) running moduleAddLoadoutMenu3den";

_objects = synchronizedObjects _logic;
{
	diag_log text format ["[KEKO] (loadout) adding menu to: %1", _x];
	[_x] call keko_loadout_fnc_addLoadoutMenu;
} forEach _objects;

deleteVehicle _logic;