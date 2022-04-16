#include "script_component.hpp"

params ["_unit","_group","_vehicle"];

if (_group in (GVAR(Artillery) select 0) ) exitWith {};

_unit leaveVehicle _vehicle; 
[_unit] orderGetIn False; 
[_unit] allowGetIn False;

True
	