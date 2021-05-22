#include "script_component.hpp"

_this spawn {
	private ["_objects","_lighthouse","_sound"];

	sleep 10 + (random 30);

	while { True } do {
		if ([dayTime] call FUNC(Daytime_F)) then {
			sleep 150 + (random 170);
		}
		else {
			if (fog > 0) then {
				_objects = nearestObjects [player, ["Land_LightHouse_F","Land_LightHouse_smalle_F","Land_LightHouse_03_green_F","Land_LightHouse_03_red_F"], 500];
				
				if (count _objects > 0) then {
					_lighthouse = (_objects select 0);				
					_sound = selectRandom (GVAR(Resource) select 11);				
					_lighthouse say3D [_sound, 1000];
				};
			};		
			sleep 150 + (random 170);
		};
	};
};