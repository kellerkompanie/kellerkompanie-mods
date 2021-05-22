#include "script_component.hpp"

params ["_bullet","_detector"];
	
if (alive _bullet) then {
	private _sound = selectRandom (GVAR(Resource) select 0);
	
	private _random = 1 + (random 3);
	
	_detector say3D [_sound, 100, _random];
	
	private _time = (time + 1);
	
	while { ( (alive _bullet) && { (time < _time) } ) } do {
		_detector setPos (getPos _bullet);		
		sleep 0.01;
	};
	
	_detector setPos [0,0,0];
};

(GVAR(Whiz_FX) select 0) deleteAt ( (GVAR(Whiz_FX) select 0) find _bullet);
(GVAR(Whiz_FX) select 1) pushBack _detector;
	
