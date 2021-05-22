#include "script_component.hpp"

private ["_objects","_church","_index","_sound","_time"];

sleep 5 - (random 5);

while { True } do {
	if ([dayTime] call FUNC(Daytime_F)) then {
		sleep 10 + (random 30);
		
		if (alive player) then {
			if (floor (random 100) < 50) then {
				_objects = nearestObjects [player, ["Land_Church_01_F","Land_Church_02_F","Land_Church_03_F"], 500];
				
				if (count _objects > 0) then {
					_church = (_objects select 0);					
					_index = selectRandom [8,9,10];					
					_sound = selectRandom (GVAR(Resource) select _index);					
					_time = 50 + (random 100);
					
					if (_index == 8) exitWith {
						_time = 130 + (random 130);
					};
					
					if (_index == 9) exitWith {
						_time = 150 + (random 150);
					};
					
					if (_index == 10) exitWith {
						_time = 170 + (random 170);
					};
					
					_church say3D [_sound, 500];					
					sleep _time;
				};
			};
		};
	};
	
	sleep 150 + (random 170);
};