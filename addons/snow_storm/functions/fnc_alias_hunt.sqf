#include "script_component.hpp"

if (!isServer) exitWith {};
if (!isNil QGVAR(hunt_alias)) exitWith {};

while {true} do {
	_aliveUnits = [];
	{
		if (alive _x) then {
			_aliveUnits pushBack _x
		};
	} foreach ([switchableUnits, playableUnits] select isMultiplayer);
	GVAR(hunt_alias) = selectRandom _aliveUnits;
	publicVariable QGVAR(hunt_alias);
	sleep 60;
};