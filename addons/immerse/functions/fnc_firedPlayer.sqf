#include "script_component.hpp"
/*
 * Author: joko // Jonas
 * Player Fired Event Handler
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

if (GVAR(recoilEnabled)) then {
    if (isNil "L_align_active") then {
        if ((_weapon != (toLower "throw")) && (_weapon != (toLower "put"))) then {
            addCamshake [1.3,0.4,15];
        };
    };
};

if (GVAR(forceEnabled)) then {
    if (_weapon != (toLower "throw")) then {        
        if ( ( diag_tickTime - GVAR(force_lastShot) ) <= 0.45 ) then {
            GVAR(force_multiplier) = (GVAR(force_multiplier) + 0.025) min 1;
        } else {
            GVAR(force_multiplier) = 0;
        };

        GVAR(force_CC) ppEffectAdjust [1, 1, 0, [1, 1, 1, -0.04], [1, 1, 1, 0.9 - (0.5 * GVAR(force_multiplier))], [0, 0, 0, 0]];
        GVAR(force_CC) ppEffectCommit 0;

        GVAR(force_RBlur) ppEffectAdjust [0.009 + (0.025 * GVAR(force_multiplier)), 0.09 + (0.025 * GVAR(force_multiplier)), 0.1 , 0.1 ];
        GVAR(force_RBlur) ppEffectCommit 0;


        GVAR(force_CC) ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 1], [0, 0, 0, 0]];
        GVAR(force_CC) ppEffectCommit 0.05 + (0.65 * GVAR(force_multiplier));

        GVAR(force_RBlur) ppEffectAdjust [0, 0, 0, 0];
        GVAR(force_RBlur) ppEffectCommit 0.12 + (0.16 * GVAR(force_multiplier));
        GVAR(force_lastShot) = diag_tickTime;
    };
};
