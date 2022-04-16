#include "script_component.hpp"

params ["_vehicle"];

private _array = [];

private _turrets = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "turrets");

if (isClass _turrets) then {
	if (count _turrets > 0) then {
		private ["_index","_turret"];		
		private _count = 0;
		
		for "_count" from _count to (count _turrets - 1) do {
			_index = _count;			
			_array pushBack [_index];			
			_turret = (_turrets select _count);
			
			if (count (_turret >> "turrets") > 0) then {
				_array = [_array, _index, _turret] call FUNC(Get_In_F4);
			};
		};
	};
};

_array
