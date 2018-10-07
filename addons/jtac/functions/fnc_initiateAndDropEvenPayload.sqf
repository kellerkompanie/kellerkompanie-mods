#include "script_component.hpp"

if(!isServer) exitwith {};

params ["_targetLocation", "_projectileSet"];

[_targetLocation, _projectileSet] spawn FUNC(evenSpreadProjectiles);
