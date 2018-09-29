#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
INFO("running moduleCustomLoadouts3den");

if (isNil QGVAR(customLoadouts)) then {
	GVAR(customLoadouts) = [];
};

private _objects = synchronizedObjects _logic;
TRACE_1("synchronizedObjects", _objects);

{
	TRACE_1("converting to loadout", _x);

	private _loadout = getUnitLoadout _x;
	private _type = typeOf _x;
	private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
	private _name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

	GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout];

	deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(customLoadouts);
TRACE_1("customLoadouts", GVAR(customLoadouts));
