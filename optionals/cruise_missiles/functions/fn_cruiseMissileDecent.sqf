/* 

BWCSM_fnc_CruiseMissileDecent

Author: Big_Wilk, based on maths provided in this script: http://www.kylania.com/ex/?p=21 by Kylania.

Description: Makes an object travel towards a target, the object is then deleted and explosions occur around the target area. 

0: Object: _plane
1: Position: [0,0,0]
2: Array: [driver _plane, gunner _plane]

Example One:
[player, [0,0,0], []] spawn BWCSM_fnc_CruiseMissileDecent; // For Fun make yourself fly!

Example Two:
[PlaneOne, [0,0,0], (units group PlaneOne)] spawn BWCSM_fnc_CruiseMissileDecent; // Best used on planes, BWCSM cruise missiles are based on planes. 

*/

_misSky = _this select 0;
_target = _this select 1;
_misSkyCrew = _this select 2;

{deleteVehicle _x;} forEach _misSkyCrew;

_missileSpeed = 400;
_perSecondChecks = 25;
_interval = 1 / _perSecondChecks;
	
while {(alive _misSky)} do { // Edited version of Kylania guided missile script.  
	private ["_velocityX", "_velocityY", "_velocityZ"];
	
	_travelTime = (_target distance _misSky) / _missileSpeed;

	_velocityX = ((( _target) select 0) - ((getPosASL _misSky) select 0)) / _travelTime;
	_velocityY = ((( _target) select 1) - ((getPosASL _misSky) select 1)) / _travelTime;
	_velocityZ = ((( _target) select 2) - ((getPosASL _misSky) select 2)) / _travelTime;

	_misSky setVelocity [_velocityX, _velocityY, (_velocityZ / 2)];

	sleep _interval; 
};

_crashPos = getPos _misSky; 
deleteVehicle _misSky;

if (_crashPos distance _target < 150) then { // Bulls Eye..

	"Bo_GBU12_LGB" createVehicle _target;
	
	for "_i" from 0 to 3 do {
		_Pos = [_target, 25, (_i * 90)] call keko_cruise_missiles_fnc_mathsTriangulatePos;
		"Bo_GBU12_LGB" createVehicle _Pos;
	};
	
} else { // We missed the target.. 

	"Bo_GBU12_LGB" createVehicle _crashPos;
	
};