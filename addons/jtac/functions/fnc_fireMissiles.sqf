#include "script_component.hpp"

private _incomingAngle = random 360;
private _sourceHeight = 1300;

params ["_targetLocation","_projectiles"];
_projectiles params ["_projectileClassName","_numberToSend","_source2dDistance","_pitch","_pitchVariance","_yawVariance","_minTimeBetween","_maxRandomTime"];

private _sourceLocation = [ (_targetLocation select 0) + (cos _incomingAngle) * _source2dDistance,
                (_targetLocation select 1) + (sin _incomingAngle) * _source2dDistance,
                _sourceHeight + (_targetLocation select 2)];

for "_i" from 0 to _numberToSend - 1 do {

    private _targetSourceDifference =  (_targetLocation vectorDiff _sourceLocation);
    _targetSourceDifference set [2,0];

    _targetSourceDifference = vectorNormalized _targetSourceDifference;

    private _missile = _projectileClassName createVehicle _sourceLocation;
    _missile setPosASL  _sourceLocation;

    private _yaw = 270 - _incomingAngle + (random (2*_yawVariance)) - _yawVariance;
    private _roll = 0;
    private _pitchRandom = _pitch + (random (2*_pitchVariance)) - _pitchVariance;
    _missile setVectorDirAndUp [
        [ sin _yaw * cos _pitchRandom,cos _yaw * cos _pitchRandom,sin _pitchRandom],
        [ [ sin _roll,-sin _pitchRandom,cos _roll * cos _pitchRandom],-_yaw] call BIS_fnc_rotateVector2D
    ];

    sleep (_minTimeBetween + random _maxRandomTime);
};
