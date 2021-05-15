#include "script_component.hpp"

params ["_ambient_sounds_al"];

while {GVAR(stormActive)} do {
	sleep 120 + random _ambient_sounds_al;
	if (GVAR(pos_p) in ["open", "in_da_house", "player_car"]) then {
		_relpos = GVAR(hunt_alias) getRelPos [100 + random 200, 360];
		playSound3D [selectRandom [QPATHTOF(sound\lup_01.ogg), QPATHTOF(sound\lup_02.ogg), QPATHTOF(sound\lup_03.ogg)], "", false, [_relpos#0, _relpos#1, 50 + random 100], 0.2, 0.7, 2000];
	};
};