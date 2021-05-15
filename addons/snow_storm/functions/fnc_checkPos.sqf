#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (!isNil {player getVariable QGVAR(ck_ON)}) exitwith {};

player setVariable [QGVAR(ck_ON),true];

GVAR(alias_snow) = "Land_HelipadEmpty_F" createVehiclelocal [0,0,0];

while {!isNull player} do {
	while {GVAR(stormActive)} do {
		player call FUNC(inHouse);
		sleep 0.5
	};
	waitUntil {sleep 10; GVAR(stormActive)};
};