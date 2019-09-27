#include "script_component.hpp"

params ["_unit"];

if !(_unit getVariable [QGVAR(isCustomLoadout), false]) exitWith {false};

if (isNil QGVAR(customLoadouts)) then {
    GVAR(customLoadouts) = [];
};

private _classname = typeOf _unit;
private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _classname >> "loadoutDummy");
private _name = _unit getVariable [QGVAR(customLoadoutName), getText (configFile >> "CfgVehicles" >> _classname >> "displayName")];
private _loadout = getUnitLoadout _unit;
private _medicClass = _unit getVariable ["ace_medical_medicClass", 0];
private _engineerClass = _unit getVariable ["ACE_isEngineer", 0];
GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout, _medicClass, _engineerClass];

_unit enableSimulation false;
_unit hideObject true;

true
