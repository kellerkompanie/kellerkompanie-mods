#include "script_component.hpp"

params ["_vehicle"];

private _size = (sizeOf typeOf _vehicle);

[_vehicle, _size] call FUNC(Flash_FX_F1);
[_vehicle, _size] call FUNC(Flash_FX_F2);
[_vehicle, _size] call FUNC(Shard_FX_F1);

private _detector = objNull;

if (GVAR(Sound)) then {
	_detector = "EmptyDetector" createVehicleLocal (getPos _vehicle);
	
	private _sound = selectRandom (GVAR(Resource) select 14);	
	private _distance = (_size * 50);
	
	_detector say [_sound, _distance];
};

while { (getPos _vehicle select 2 > 3) } do {
	sleep 1;
};

if (surfaceIsWater getPos _vehicle) exitWith {};

[_vehicle, _size] call FUNC(Dust_FX_F1);
[_vehicle, _size] spawn FUNC(Mud_FX_F1);
[_vehicle, _size] spawn FUNC(Dirt_FX_F1);
[_vehicle, _size] spawn FUNC(Stone_FX_F1);

if (alive _detector) then {
	sleep 5;	
	deleteVehicle _detector;
};
