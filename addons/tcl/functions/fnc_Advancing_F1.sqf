#include "script_component.hpp"

params ["_object","_weapon","_muzzle"];

private _return = 0;
private _array = ["Throw","Put"];

if (_weapon in _array) exitWith {_return};

private _type = {_weapon isKindOf [_this, configFile >> "CfgWeapons"] };

if ( ("Pistol" call _type) || ("Rifle" call _type) ) then {
	private _muzzle = (currentMuzzle _object);
	
	if (_weapon isEqualTo _muzzle) then {
		private _accessories = (_object weaponAccessories _muzzle);
		private _suppressor = (_accessories select 0);
		
		_return = GVAR(Feature) select 24;
		
		if (_suppressor isEqualTo "") then {
			_return = GVAR(Feature) select 26;
		};
	}
	else {
		_return = GVAR(Feature) select 24;
	};
}
else {
	if ("Launcher" call _type) then {
		_return = (GVAR(Feature) select 25);
	}
	else {
		_return = (GVAR(Feature) select 26);
	};
};

_return
