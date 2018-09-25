#include "script_component.hpp"

params ["_fleeing_unit"];

_dir = 180 + (_fleeing_unit getDir player); //direction opposite to enemy
_fleeing_location = _fleeing_unit getrelPos [300,_dir];
[_fleeing_unit] join grpNull;
_fleeing_unit setBehaviour "CARELESS";
_fleeing_unit setSpeedMode "FULL";
_fleeing_unit doMove _fleeing_location;
