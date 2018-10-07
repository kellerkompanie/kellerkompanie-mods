#include "script_component.hpp"

if(!isServer) exitwith {};

params ["_targetLocation", "_projectiles"];

[_targetLocation, _projectiles] spawn FUNC(dropBombs);
