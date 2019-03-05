#include "script_component.hpp"

private ["_numJtacAttacks", "_bulletsCount"];

private _bullets = [];
private _shells = [];
private _grenades = [];
private _bombs = [];
private _missiles = [];
private _mines = [];
private _nonlethal = [];

_numJtacAttacks = count GVAR(availableJtacAttacks);
for "_jtackAttackI" from 0 to _numJtacAttacks -1 do {
    private ["_currentAttack", "_attackType"];
    _currentAttack = GVAR(availableJtacAttacks) select _jtackAttackI;
    _attackType = _currentAttack select 0;
    if(_attackType == "BULLETS") then {
        _bullets set [ count _bullets, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
    } else {
        if(_attackType == "SHELLS") then {
            _shells set [ count _shells, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
        } else {
            if(_attackType == "GRENADES") then {
                _grenades set [ count _grenades, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
            } else {
                if(_attackType == "BOMBS") then {
                    _bombs set [ count _bombs, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
                } else {
                    if(_attackType == "MISSILES") then {
                        _missiles set [ count _missiles, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
                    } else {
                        if(_attackType == "MINES") then {
                            _mines set [ count _mines, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
                        } else {
                            if(_attackType == "NONLETHAL") then {
                                _nonlethal set [ count _nonlethal, [_currentAttack select 1, _currentAttack select 2, _currentAttack select 3, _currentAttack select 4, _currentAttack select 5]];
                            } else {
                                diag_log format ["VirtualJTAC :::: Ignoring unknown payloadCategory for: %1",  _currentAttack];
                            };
                        };
                    };
                };
            };
        };
    };
};

_bulletsCount = count _bullets;
GVAR(JtacBulletMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _bullets select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacBulletMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _shells;
GVAR(JtacShellMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _shells select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacShellMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _grenades;
GVAR(JtacGrenadeMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _grenades select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacGrenadeMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _bombs;
GVAR(JtacBombsMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _bombs select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacBombsMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _missiles;
GVAR(JtacMissilesMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _missiles select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacMissilesMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _mines;
GVAR(JtacMinesMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _mines select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacMinesMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};

_bulletsCount = count _nonlethal;
GVAR(JtacNonLethalMenu) = [["JTAC Bullets", true]];
for "_bulletsI" from 0 to _bulletsCount -1 do {
    private ["_currentBullet", "_innerExpressionString"];
    _currentBullet = _nonlethal select _bulletsI;
    _innerExpressionString = format ["[%1, %2,'[", _currentBullet select 1, _currentBullet select 2] +
                            "%1, " +
                            format["%1", _currentBullet select 4] +
                            format["] call %1;'] call keko_jtac_fnc_clientRequestPermissionToFire;", _currentBullet select 3];
    GVAR(JtacNonLethalMenu) set [_bulletsI + 1,
        [_currentBullet select 0, [_bulletsI + 2], "", -5, [["expression", _innerExpressionString]], "1", "1"]
    ];
};
