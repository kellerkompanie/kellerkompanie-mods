#include "script_component.hpp"

private _logic = _this select 0;

if !(isServer) exitWith {};

private _objects = synchronizedObjects _logic;

{
    private _loadout = getUnitLoadout _x;
    private _type = typeOf _x;
    private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
    private _name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

    GVAR(addLoadouts) pushBack [_loadoutDummyClass, _name, _loadout];

    deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(addLoadouts);

deleteVehicle _logic;
