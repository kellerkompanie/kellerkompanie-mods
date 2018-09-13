#include "script_component.hpp"

private _logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (loadout) running moduleCustomLoadouts3den";

if (isNil QGVAR(customLoadouts)) then {
	GVAR(customLoadouts) = [];
};

private _objects = synchronizedObjects _logic;
diag_log text format ["[KEKO] (loadout) synchronizedObjects _logic: %1", _objects];

{
	diag_log text format ["[KEKO] (loadout) converting %1 to loadout", _x];

	private _loadout = getUnitLoadout _x;
	private _type = typeOf _x;
	private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
	private _name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

	GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout];

	deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(customLoadouts);
diag_log text format ["[KEKO] (loadout) customLoadouts: %1", GVAR(customLoadouts)];
