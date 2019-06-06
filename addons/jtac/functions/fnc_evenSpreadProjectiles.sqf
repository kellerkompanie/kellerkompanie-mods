#include "script_component.hpp"

private _initialAngle = random 360;
private _numberToSend = 12;

private _targetLocation = _this select 0;
private _projectileClassNames = (_this select 1) select 0;
private _spreadRadial = (_this select 1) select 1;
private _downwardSpeed = (_this select 1) select 2;
private _sourceHeight = (_targetLocation select 2) + ((_this select 1) select 3);

for "_i" from 0 to _numberToSend - 1 do {
    private _targetLocationRandom = [0,0,0];

    if(_i < 3) then {
        private _loopRadius = _spreadRadial / 2;
        _targetLocationRandom = [ (_targetLocation select 0) + cos(_initialAngle + 120*(_i)) * _loopRadius,
                                (_targetLocation select 1) + sin(_initialAngle + 120*(_i)) * _loopRadius,
                                _sourceHeight
                                ];
    } else {
        private _loopRadius = _spreadRadial;
        _targetLocationRandom = [ (_targetLocation select 0) + cos(_initialAngle + 40*(_i-3)) * _loopRadius,
                                (_targetLocation select 1) + sin(_initialAngle + 40*(_i-3)) * _loopRadius,
                                _sourceHeight
                                ];
    };

    private _velocity = [0,0,_downwardSpeed];

    private _projectile = (_projectileClassNames call BIS_fnc_selectRandom) createVehicle _targetLocationRandom;
    _projectile setPosASL _targetLocationRandom;
    _projectile setVelocity _velocity;
};
