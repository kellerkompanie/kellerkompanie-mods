#include "script_component.hpp"

params ["_vehicle","_size"];

private _shard = selectRandom ["Shard.p3d","Shard2.p3d","Shard3.p3d","Shard4.p3d"];

private _string = "\A3\Data_F\ParticleEffects\Shard\" + _shard;
private "_random";
private _count = _size + (random _size);

while { _count > 0 } do {
	_random = [
		50,
		[ (random _size - random _size), (random _size - random _size), (random _size) + (random _size) ],
		3 + random 5,
		[0.7 + random 0.3],
		0.5 - random 0.1
	];
	
	if (floor (random 100) < 50) then {
		_random set [1, [ (random _size - random _size) * 5, (random _size - random _size) * 5, (random _size) + (random _size) ] ];
	};
	
	if (_size < 10) then {
		_random set [3, [0.3 + random 0.7] ];
	};
	
	if (_random select 3 select 0 > 0.5) then {
		_random set [4, 0.5 - random 0.3];
	};
	
	drop [
		_string, 
		"", 
		"SpaceObject", 
		1, 
		(_random select 0),	
		"destructionEffect1", 
		(_random select 1), 
		(_random select 2), 
		1, 
		0, 
		0,	
		_random select 3, 
		[[1,1,1,1]], 
		[1000], 
		random 0.5, 
		random 1, 
		"", 
		"", 
		_vehicle, 
		random 360, 
		True, 
		_random select 4 
	];
	
	_count = _count - 1;
};
