#include "script_component.hpp"

drop [ 
	["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 12, 9, 0], 
	"", 
	"Billboard",
	1, 
	1 + random 1,
	_this, 
	[0,0,0],
	0, 
	1.3 + random 0.7, 
	1, 
	0,
	[1 + random 1, 1 - random 1, random 1], 
	[ 
		[0.1,0.1,0.1,1],
		[0.1,0.1,0.1,0] 
	], 
	[1000], 
	0, 
	0, 
	"", 
	"", 
	""
];