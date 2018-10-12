#include "script_component.hpp"

private ["_obj","_mass"];
_obj = [_this,0] call BIS_fnc_param;
_mass = [_this,1] call BIS_fnc_param;
_obj setMass _mass;
