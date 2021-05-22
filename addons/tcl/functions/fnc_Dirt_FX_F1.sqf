#include "script_component.hpp"

params ["_vehicle","_size"];
	
if (isOnRoad _vehicle) exitWith {};

private "_random";
private _count = (_size + random _size);

while { _count > 0 } do {
	_random = [
		0.5 + (random 0.7), 
		[ 
			(random 10 - random 10), 
			(random 10 - random 10), 
			5 + (random 7) 
		], 
		[0.3 + random 0.7, 0.7 - random 0.3]
	];
	
	drop [ 
		["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 12, 9, 0], 
		"",
		"Billboard", 
		0.05, 
		_random select 0,	
		[0,0,-1],
		_random select 1, 
		0, 
		1, 
		0, 
		0,	
		_random select 2, 
		[ 
			[0.1,0.1,0.1,1],
			[0.1,0.1,0.1,0.5],
			[0.1,0.1,0.1,0.3] 
		], 
		[1],	
		1, 
		1, 
		QPATHTOF(functions\fnc_Dirt_FX.sqf), 
		"", 
		_vehicle, 
		random 360	
	];
	
	_count = _count - 3;
};
