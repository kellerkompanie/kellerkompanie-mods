#include "script_component.hpp"

private _incomingAngle = random 360;
private _sourceHeight = 1300;
private _source2dDistance = 3919.25;

params ["_targetLocation", "_projectiles"];
_projectiles params ["_projectileClassName","_numberToSend","_bombSpeed","_speedVariance","_spreadRadial","_minTimeBetween","_maxRandomTime"];

private _sourceLocation = [ (_targetLocation select 0) + (cos _incomingAngle) * _source2dDistance,
				(_targetLocation select 1) + (sin _incomingAngle) * _source2dDistance,
				_sourceHeight + (_targetLocation select 2)];

for "_i" from 0 to _numberToSend - 1 do {

	private _spawnLocation = [(_sourceLocation select 0 ) + (random (2 * _spreadRadial) - _spreadRadial),
					(_sourceLocation select 1 ) + (random (2 * _spreadRadial) - _spreadRadial),
					_sourceLocation select 2];

	private _targetSourceDifference =  (_targetLocation vectorDiff _sourceLocation);
    _targetSourceDifference set [2,0];

	_targetSourceDifference = vectorNormalized _targetSourceDifference;
	private _bomb = _projectileClassName createVehicle _spawnLocation;
	_bomb setPosASL  _spawnLocation;
	private _angle = 270 - _incomingAngle;
	_bomb setDir _angle;
	_bombSpeed = _bombSpeed + (random (2*_speedVariance)) - _speedVariance;
	private _velocity = [_bombSpeed * (_targetSourceDifference select 0),_bombSpeed * (_targetSourceDifference select 1),0];
	_bomb setVelocity _velocity;

	sleep (_minTimeBetween + random _maxRandomTime);
};
