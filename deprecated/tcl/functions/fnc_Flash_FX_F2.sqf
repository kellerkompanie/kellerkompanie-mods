#include "script_component.hpp"

params ["_vehicle","_size"];

private "_random";
private _count = _size;
_count = _count + (random _size);

while { _count > 0 } do {
	_random = [
		0.1 + random 0.3,
		[(random 10 - random 10), (random 10 - random 10), (random _size)]
	];
	
	drop [ 
		["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 0, 16, 1], 
		"", 
		"Billboard", 
		1, 
		_random select 0,	
		"destructionEffect1", 
		_random select 1, 
		0, 
		1, 
		0, 
		0,	
		[_size / 5, _size / 3], 
		[ 
			[1,1,1,-3],
			[1,1,1,-2],
			[1,1,1,-1],
			[1,1,1,-0]
		],
		[(random _size) + (random _size)],	
		1, 
		1, 
		"", 
		"", 
		_vehicle, 
		random 360
	];
	
	_count = _count - 1;
};

True
