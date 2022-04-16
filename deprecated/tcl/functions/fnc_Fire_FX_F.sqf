#include "script_component.hpp"

params ["_unit"];

private _position = (getPos _unit);

private _offset = 0.3 + (random 0.5);

private _fire = "#particlesource" createVehicleLocal _position;
_fire setDropInterval 0.01;
_fire attachTo [_unit, [0,0,_offset] ];

private _light = "#lightpoint" createVehicleLocal _position;
_light setLightBrightness 0;
_light setLightAmbient [3,1,0];
_light setLightColor [3,1,0];
_light lightAttachObject [_unit, [0,0,_offset] ];

private _sound = createSoundSource ["Sound_Fire", _position, [], 0];
_sound attachto [_unit, [0,0,_offset] ];

private _value = 1 + (random 1);

while { _value > 1 } do {
	_fire setParticleParams [ 
		["\A3\Data_F\ParticleEffects\Universal\Universal.p3d", 16, 10, 32, 1], 
		"", 
		"Billboard", 
		1, 
		0.3 + random 0.5,	
		[0, 0, (getPos _unit select 2) + _offset], 
		[0, 0, 0], 
		0, 
		1, 
		1, 
		0.7,	
		[_value / 3, _value / 7], 
		[ 
			[1,1,1,-0],
			[1,1,1,-1],
			[1,1,1,-1],
			[1,1,1,-1],
			[1,1,1,-1],
			[1,1,1,0]
		], 
		[3 - random 1], 
		0, 
		0, 
		"", 
		"", 
		_unit
	];
	
	_fire setParticleRandom [0.5, [0.1, 0.1, 0.1], [0.1, 0.1, 0.1], 0.1, 0.5, [0.1,0.1,0.1,0], 0, 0];	
	_light setLightBrightness (_value / 7);
	
	if (alive _unit) then {
		_value = _value + (random 0.01);
		
		if (floor (random 100) < 35) then {
			private _scream = selectRandom (GVAR(Resource) select 15);			
			_unit say _scream;
		};
	}
	else {
		_offset = 0.5;		
		_value = _value - (random 0.01);		
		_value = _value - (rain / 7);
	};
	
	sleep 1;
};

deleteVehicle _fire;
deleteVehicle _light; 
deleteVehicle _sound;
