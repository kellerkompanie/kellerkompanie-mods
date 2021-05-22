#include "script_component.hpp"

params ["_vehicle","_size"];

if (isOnRoad _vehicle) exitWith {};

private "_random";
private _count = (_size * 3);
_count = (_count + random _size);

while { _count > 0 } do {
	_random = [
		1 + random 3,
		[ (random 7 - random 7), (random 7 - random 7), 1 + (random 3) ],
		[_size / 3],
		[ [0.1,0.1,0.1,1],[0.1,0.1,0.1,0.5],[0.1,0.1,0.1,0.3] ]
	];
	
	if (floor (random 100) < 35) then {
		_random set [3, [ [0.3,0.3,0.3,1],[0.3,0.3,0.3,0.5],[0.3,0.3,0.3,0.3] ] ];
	};
	
	drop [ 
		["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 12, 9, 0], 
		"", 
		"Billboard", 
		1, 
		_random select 0,	
		[0,0,-1], 
		_random select 1, 
		0, 
		1, 
		0, 
		0,	
		_random select 2,
		_random select 3,
		[1000],
		0, 
		0, 
		"",
		"", 
		_vehicle, 
		random 360
	];
	
	_count = _count - 1;
};
