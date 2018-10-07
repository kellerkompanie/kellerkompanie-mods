#include "script_component.hpp"

if(!isserver) exitwith {};

params ["_targetLocation", "_projectiles"];

INFO_2("initiateAndShootProjectilePayload", _targetLocation, _projectiles);

[_targetLocation, _projectiles] spawn FUNC(shootProjectiles);
