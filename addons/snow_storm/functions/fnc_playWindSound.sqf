#include "script_component.hpp"

if (!hasInterface) exitWith {};

while {GVAR(stormActive)} do {
	playSound QGVAR(bcg_wind);
	sleep 42;
};