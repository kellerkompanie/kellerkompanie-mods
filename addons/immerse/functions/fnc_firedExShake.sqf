#include "script_component.hpp"
/*
 * Author: joko // Jonas
 * ExShake Fired Event Handler
 *
 * Arguments:
 * Fired Event Paramter
 *
 * Return Value:
 * None
 */
params [
    "",
    "_weapon",
    "",
    "",
    "_ammo",
    "",
    "_projectile"
];

private _fncName = [configFile >> "CfgAmmo" >> _ammo >> "L_exShake_func", QGVAR(exShake_) + _ammo, ""] call FUNC(readCacheValues);

if (_fncName != "") then {
    GVAR(exShakeArray) pushBack [_projectile, _weapon, _ammo, _fncName, getPosATL _projectile];
};
