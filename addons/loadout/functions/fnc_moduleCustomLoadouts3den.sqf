#include "script_component.hpp"

if !(isServer) exitWith {false};

if (isNil QGVAR(customLoadouts)) then {
    GVAR(customLoadouts) = [];
};

private _logic = _this select 0;
private _objects = synchronizedObjects _logic;

{
    private _loadout = getUnitLoadout _x;
    private _type = typeOf _x;
    private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
    private _name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

    private _medicClass = _x getVariable ["ace_medical_medicClass", 0];
    private _engineerClass = _x getVariable ["ACE_isEngineer", 0];

    GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout, _medicClass, _engineerClass];

    deleteVehicle _x;
} forEach _objects;

deleteVehicle _logic;

publicVariable QGVAR(customLoadouts);

true
