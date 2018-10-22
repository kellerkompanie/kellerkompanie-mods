#include "script_component.hpp"

if !(GVAR(enabled)) exitWith {};

params [
	"_unit",		// Unit that shot the projectile
	"_weapon",		// Weapon fired
	"",
	"",
	"_ammo",		// Ammo shot
	"",
	"_projectile"	// The projectile (duh!)
];

if (toLower(_weapon) isEqualTo "put") exitWith {};

if (isNull _projectile) then { // Fixes a locality issue with slow projectiles. Thanks to killzone kid!
     _projectile = nearestObject [_unit, _ammo];
};

if ((player distance _unit) >= 2500) exitWith {};

if ((side effectiveCommander (vehicle _unit)) != (side player)) then {
	if ((_weapon in ["throw","put"])) exitWith {};

	private _hit = [(configFile >> "CfgAmmo" >> _ammo >> "hit"), format [QGVAR(cached_hit_%1), _ammo]] call FUNC(readCacheValues);
	if (_hit == 0) exitWith {};

	private _dDist = (7 + (_hit / 2)) min 28;				// Calculate the detectionDistance (dDist)

	GVAR(mainArray) pushBack [_projectile, _dDist, _hit];
};
