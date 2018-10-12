#include "script_component.hpp"

params ["_vehicle","_cargo"];

if(!isNull _vehicle && !isNull _cargo) then {
	[_vehicle,_cargo] call FUNC(isSupportedCargo) && vehicle player == player && player distance _cargo < 10 && _vehicle != _cargo;
} else {
	false;
};
