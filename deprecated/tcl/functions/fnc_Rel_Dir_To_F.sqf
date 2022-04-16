#include "script_component.hpp"

params ["_object","_position"];

private "_direction";

if (isNull objectParent _object) then {
	_direction = (_object getRelDir _position);
}
else {
	private _weaponPosition = [];
	
	if (assignedVehicleRole _object select 0 == "Cargo") then {
		_weaponPosition = (_object weaponDirection currentWeapon _object);
	}
	else {
		private _vehicle = (vehicle _object);
		
		if (_vehicle isKindOf "Tank") then {
			_weaponPosition = (_vehicle weaponDirection currentWeapon _vehicle);
		};
	};
	
	if (_weaponPosition isEqualTo [] ) exitWith {
		_direction = (_object getRelDir _position);
	};
	
	private _weaponDirection = (_weaponPosition select 0) atan2 (_weaponPosition select 1);	
	_weaponDirection = _weaponDirection - (_object getDir _position);
	
	if (_weaponDirection < 0) then {		
		_weaponDirection = _weaponDirection + 360;
	};
	
	if (_weaponDirection > 360) then {
		_weaponDirection = _weaponDirection - 360;
	};
	
	_direction = _weaponDirection;
};

_direction
	