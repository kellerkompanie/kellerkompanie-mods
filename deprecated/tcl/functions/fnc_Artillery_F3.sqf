#include "script_component.hpp"

params ["_vehicle","_position"];

private _return = False;
private _gunner = (gunner _vehicle);

if ( (canFire _vehicle) && { (alive _gunner) } ) then {
	if (getArray (configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "availableForSupportTypes") select 0 isEqualTo "Artillery") then {
		private _magazine = (getArtilleryAmmo [_vehicle] select 0);
		private _range = _position inRangeOfArtillery [crew _vehicle, _magazine];
		
		if (_range) then {
			_return = [_vehicle, _position] call FUNC(Artillery_F4);
		};
	};
};

_return
	