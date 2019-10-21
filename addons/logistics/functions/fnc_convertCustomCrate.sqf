#include "script_component.hpp"

params ["_crate"];

if !(isServer) exitWith {};

if (_crate isKindOf "ReammoBox_F" && !(_crate getVariable [QGVAR(isCustomCrate), false])) exitWith {false};

if (isNil QGVAR(customCrates)) then {
    GVAR(customCrates) = [];
};

private _classname = typeOf _crate;
private _name = _crate getVariable [QGVAR(customCrateName), getText (configFile >> "cfgVehicles" >> _classname >> "displayName")];
private _content = _crate call FUNC(getCrateInventory);
GVAR(customCrates) pushBack [_name, _classname, _content];

deleteVehicle _crate;

publicVariable QGVAR(customCrates);

true
