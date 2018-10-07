#include "script_component.hpp"

if(!isserver) exitwith {};

params ["_targetLocation", "_projectileSet"];

[_targetLocation, _projectileSet] spawn FUNC(layMinefield);
