#include "script_component.hpp"

private ["_vehicle","_volume"];

_vehicle = _this select 0;

if (_vehicle != vehicle player) then {
	_volume = GVAR(Chatter) select 1;

	while { _volume > 0 } do {
		_volume = _volume - 0.1;
		0 fadeMusic _volume;
		sleep 0.1;
	};

	sleep 1;
	playMusic "";
	hint "";
	0 fadeMusic 0.5;
};

vehicle player