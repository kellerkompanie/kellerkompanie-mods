#include "script_component.hpp"

if (isNil QGVAR(customLoadouts)) then {
    GVAR(customLoadouts) = [];
};

{
    _x params ["_unit"];

    if !(_unit getVariable [QGVAR(isCustomLoadout), false]) exitWith {false};

    INFO_1("convertCustomLoadout _unit = %1", _unit);

    private _classname = typeOf _unit;
    private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _classname >> "loadoutDummy");
    private _name = _unit getVariable [QGVAR(customLoadoutName), getText (configFile >> "CfgVehicles" >> _classname >> "displayName")];
    private _loadout = getUnitLoadout _unit;
    private _medicClass = _unit getVariable ["ace_medical_medicClass", 0];
    private _engineerClass = _unit getVariable ["ACE_isEngineer", 0];

    INFO_1("convertCustomLoadout _loadout = %1", _loadout);

    GVAR(customLoadouts) pushBack [_loadoutDummyClass, _name, _loadout, _medicClass, _engineerClass];

    deleteVehicle _unit;
} forEach GVAR(customLoadoutUnitsQueue);

publicVariable QGVAR(customLoadouts);
