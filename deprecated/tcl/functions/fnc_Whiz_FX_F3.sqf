#include "script_component.hpp"

params ["_shell"];

private _detector = "EmptyDetector" createVehicleLocal (getPos _shell);
private _sound = selectRandom (GVAR(Resource) select 1);
_detector say3D [_sound, 300];
private _time = (time + 1);

while { ( (alive _shell) && { (time < _time) } ) } do {
	_detector setPos (getPos _shell);	
	sleep 0.01;
};

deleteVehicle _detector;
