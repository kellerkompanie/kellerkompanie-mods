_logic = _this select 0;

if (!isServer) exitWith {};

_objects = synchronizedObjects _logic;
{
	[_x] call keko_logistics_fnc_addLogisticsMenu;
} forEach _objects;