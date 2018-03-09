_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (logistics) running moduleAddLogisticsMenu3den";

_objects = synchronizedObjects _logic;
{
	diag_log text format ["[KEKO] (logistics) adding menu to: %1", _x];
	[_x] call keko_logistics_fnc_addLogisticsMenu;
} forEach _objects;

deleteVehicle _logic;