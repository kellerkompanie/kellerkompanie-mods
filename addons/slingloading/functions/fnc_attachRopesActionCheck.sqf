#include "script_component.hpp"

private ["_vehicleWithIndex","_cargo"];
_vehicleWithIndex = player getVariable [QGVAR(RopesVehicle), [objNull,0]];
_cargo = cursorTarget;
[_vehicleWithIndex select 0,_cargo] call FUNC(canAttachRopes);
