#include "script_component.hpp"

params ["_vit_x", "_vit_y"];

waitUntil {!isNil QGVAR(rafala)};

if (GVAR(rafala)) then {
	GVAR(al_nearobjects) = nearestObjects [GVAR(hunt_alias), [], 50];
	GVAR(ar_obj_eligibl) = [];
	{
		if((_x isKindOf "LandVehicle") or (_x isKindOf "Man") or (_x isKindOf "Air") or (_x isKindOf "Wreck")) then {
			GVAR(ar_obj_eligibl) pushBack _x;
		};
	} foreach GVAR(al_nearobjects);
	sleep 1;
	if (count GVAR(ar_obj_eligibl) > 0) then {
		private _blowobj = selectRandom GVAR(ar_obj_eligibl);
		_blowobj setvelocity [_vit_x, _vit_y, random 0.1];
		sleep 0.1;
		_blowobj setvelocity [_vit_x * 1.5, _vit_y * 1.5, random 0.1];
		sleep 0.1;
		_blowobj setvelocity [wind#0 / 4, wind#0 / 4, random 0.1];
	};
};