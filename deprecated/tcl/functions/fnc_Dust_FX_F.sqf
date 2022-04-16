#include "script_component.hpp"

params ["_vehicle","_size"];

private "_random";
private _array = selectRandom [[0.345,0.345,0.168], [0.345,0.29,0.168], [0.4,0.3,0.2], [0.2,0.2,0.1]];
private _color = [_array + [-0.1], _array + [-0.1], _array + [- random 0.5], _array + [-0.05] ];

if (floor (random 100) < 100) then {
	_d = 360;
	
	while { _d > 0 } do {
		_e = 3;
		
		while { _e > 0 } do {			
			_random = [
				10,
				[sin _d * 1, cos _d * 1, - 3 + random 1],
				[ (random 13 - random 13) * 3, (random 13 - random 13) * 3, (random 3 - random 3) ],
				[random _size]
			];
						
			drop [ 
				["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], 
				"", 
				"Billboard", 
				1, 
				_random select 0,
				_random select 1, 
				_random select 2, 
				0, 
				1, 
				0.7, 
				0.1,
				_random select 3, 
				_color, 
				[0,1,0], 
				0.6, 
				0.3, 
				"", 
				"", 
				_vehicle, 
				random 360
			];
			
			_e = _e - 1;
		};
		
		_d = _d - 1;
	};
}
else {
	_d = 0;
	
	while { _d < 361 } do {
		_e = 0;
		
		while { _e < 2 } do {
			_random = [7.5, [sin _d * 1, cos _d * 1, -2.0 + random 0.5 - random 1.5], [ (random 7 - random 7), (random 7 - random 7), (random 2 - random 2) ], [7 - random 4, 7 - random 4, 1] ];
			
			drop [ 
				["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], 
				"", 
				"Billboard", 
				1, _random select 0,			
				_random select 1, 
				_random select 2, 
				1, 
				2, 
				1.55, 
				0.10,			
				_random select 3, 
				_color, 
				[0,1,0], 
				0.6, 
				0.3, 
				"", 
				"", 
				_vehicle, 
				random 360
			];
			
			_e = _e + 1;
		};
		
		_d = _d + 1;
	};
};
