#include "script_component.hpp"
/*
 * Author: joko // Jonas
 * ExShake Handler
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */

private _deleted = false;
{
    _x params ["_projectile", "_weapon", "_ammo", "_fncName", "_pos"];

    if (alive _projectile) then {
        if (_weapon != "put") then {
            GVAR(exShakeArray) set [_forEachIndex, [_projectile, _weapon, _ammo, _fncName, getPosATL _projectile]];
        };
    } else {
        private _dist = ((positionCameraToworld [0,0,0]) distance _pos);
        private _data = _dist call (missionNamespace getVariable [_fncName, {hintSilent "Error Function Dont exist"; [0,0,0]}]);
        
        [{
            if ((vehicle player) != player) exitWith {};
            if (((getPos player) select 2) > 1) exitWith {};

            params ["_force", "_length", "_frequency"];

            if (_force < 0) then { _force = 0; };
            if (_length < 0) then { _length = 0; };
            if (_frequency < 0) then { _frequency = 0; };
            addCamShake [_force, _length, _frequency];
        }, _data , (_dist / 343)] call CBA_fnc_waitAndExecute;
        GVAR(exShakeArray) set [_forEachIndex, objNull];
        _deleted = true;
    };
} forEach GVAR(exShakeArray);


if (_deleted) then {
    GVAR(exShakeArray) = GVAR(exShakeArray) - [objNull];
};
