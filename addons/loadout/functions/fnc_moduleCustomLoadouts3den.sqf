#include "script_component.hpp"

_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (loadout) running moduleCustomLoadouts3den";

if (isNil QGVAR(customLoadouts)) then {
	GVAR(customLoadouts) = [];
};

_objects = synchronizedObjects _logic;
diag_log text format ["[KEKO] (loadout) synchronizedObjects _logic: %1", _objects];

{
	diag_log text format ["[KEKO] (loadout) converting %1 to loadout", _x];

	_loadout = getUnitLoadout _x;
	_type = typeOf _x;
	_loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
	_name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

	GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout];

	deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(customLoadouts);
diag_log text format ["[KEKO] (loadout) customLoadouts: %1", GVAR(customLoadouts)];
