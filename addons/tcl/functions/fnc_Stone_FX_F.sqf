#include "script_component.hpp"

params ["_vehicle","_size"];

private "_random";

_count = _size;
_count = _count + (random _size);

while { _count > 0 } do {
	_random = [
		50,
		[(random _size - random _size), (random _size - random _size), (random _size)],
		1 + random 5,
		[0.1 + random 0.5],
		0.5 - random 0.1
	];
	
	if (floor (random 100) < 50) then {
		if (_random select 3 select 0 < 0.3) then {
			_random set [1, [ (random _size - random _size) * 3, (random _size - random _size) * 3, (random _size) ] ];
		};
	};
	
	if (_size < 10) then {
		_random set [3, [0.1 + random 0.3] ];
	};
	
	if (_random select 3 select 0 > 0.3) then {
		_random set [4, 0.3 - random 0.1];
	};
	
	drop [
		"\A3\Data_F\ParticleEffects\Pstone\PStone.p3d", 
		"", 
		"SpaceObject", 
		1, 
		_random select 0,
		"destructionEffect1", 
		_random select 1,
		_random select 2, 
		1, 
		0, 
		0,	
		_random select 3, 
		[[1,1,1,1]],
		[1000], 
		0, 
		0, 
		"", 
		"", 
		_vehicle, 
		random 360, 
		True, 
		_random select 4
	];
	
	_count = _count - 1;
};
