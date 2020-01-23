#include "script_component.hpp"

params ["_crate", ["_force", false]];

if !(isServer) exitWith {};

if (!_force && (!(_crate isKindOf "ReammoBox_F") || !(_crate getVariable [QGVAR(isCustomCrate), false]))) exitWith {
    false
};

private _classname = typeOf _crate;
private _name = _crate getVariable [QGVAR(customCrateName), getText (configFile >> "cfgVehicles" >> _classname >> "displayName")];
private _content = _crate call FUNC(getCrateInventory);
GVAR(crates) pushBack [_name, _classname, _content];

deleteVehicle _crate;

publicVariable QGVAR(crates);

true
