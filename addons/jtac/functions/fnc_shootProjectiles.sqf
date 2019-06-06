#include "script_component.hpp"

private _incomingAngle = random 360;
private _sourceHeight = 982.1129;
private _source2dDistance = 2000;
private _projectileSpeed = 1000;

params ["_targetLocation","_projectiles"];
_projectiles params ["_projectileClassName","_verticalOffset","_numberToSend","_spreadRadial","_spreadNormal","_minTimeBetween","_maxRandomTime"];

private _sourceLocation = [ (_targetLocation select 0) + (cos _incomingAngle) * _source2dDistance,
                (_targetLocation select 1) + (sin _incomingAngle) * _source2dDistance,
                _sourceHeight + (_targetLocation select 2)];

for "_i" from 0 to _numberToSend - 1 do {
    //Add some inaccurary...
    private _targetLocationRandom = [ (_targetLocation select 0) + (random 2*_spreadRadial) - _spreadRadial,
                            (_targetLocation select 1) + (random 2*_spreadRadial) - _spreadRadial,
                            (_targetLocation select 2) + (random 2*_spreadNormal) - _spreadNormal
    ];

    private _targetSourceDifference =  (_targetLocationRandom vectorDiff _sourceLocation);
    _targetSourceDifference set [2, (_targetSourceDifference select 2) + _verticalOffset];
    _targetSourceDifference = vectorNormalized _targetSourceDifference;
    private _velocity = [_projectileSpeed * (_targetSourceDifference select 0),_projectileSpeed * (_targetSourceDifference select 1),_projectileSpeed * (_targetSourceDifference select 2)];

    private _projectile = _projectileClassName createVehicle [(_sourceLocation select 0),(_sourceLocation select 1),_sourceLocation select 2];
    _projectile setPosASL [(_sourceLocation select 0), (_sourceLocation select 1), (_sourceLocation select 2)];
    _projectile setVelocity _velocity;

    sleep (_minTimeBetween + random _maxRandomTime);
};
