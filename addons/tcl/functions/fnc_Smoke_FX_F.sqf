#include "script_component.hpp"

params ["_vehicle","_size"];

_fuel = (fuel _vehicle);
private ["_count","_random"];
private _smoke = "#particlesource" createVehicleLocal (getPos _vehicle);
_smoke setDropInterval 0.1;

while { _fuel > 0 } do {		
	_fuel = _fuel - (random 0.005);	
	_random = [
		5 + random 7,
		[ (random 5 - random 5), (random 5 - random 5), 5 + random 7],
		[_size / 5, _size / 3]
	];		
	
	_smoke setParticleParams [ 
		["\A3\Data_F\ParticleEffects\Universal\Universal_02.p3d", 8, 0, 8, 1], 
		"", 
		"Billboard", 
		1, 
		_random select 0,		
		"destructionEffect1", 
		_random select 1, 
		1, 
		1, 
		1, 
		1,		
		_random select 2, 
		[ 
			[-1,-1,-1,0.1],
			[-1,-1,-1,0.3],
			[-1,-1,-1,0.5],
			[-1,-1,-1,1],
			[-1,-1,-1,0.5],
			[-1,-1,-1,0.3],
			[-1,-1,-1,0.1] 
		], 
		[random 3], 
		0, 
		0, 
		"", 
		"", 
		_vehicle, 
		random 360
	];
		
	hint str _fuel;
	sleep 1;
};

