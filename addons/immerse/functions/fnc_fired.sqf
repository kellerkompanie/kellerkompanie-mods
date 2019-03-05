#include "script_component.hpp"
/*
 * Author: joko // Jonas
 * Fired Event Handler
 *
 * Arguments:
 * Fired Event Paramter
 *
 * Return Value:
 * None
 */

params [
    "_shooter",
    "_weapon",
    "",
    "",
    "_ammo",
    "",
    "_projectile"
];

if (toLower(_weapon) isEqualTo "put") exitWith {};

if (isNull _projectile) then {
     _projectile = nearestObject [_shooter, _ammo];
     _this set [6, _projectile];
};

if (GVAR(twitchEnabled) && !(vehicle player != player) ) then {
    _this call FUNC(firedTwitch);
};

if (GVAR(exShakeEnabled) && !(vehicle player != player) ) then {
    _this call FUNC(firedExShake);
};
