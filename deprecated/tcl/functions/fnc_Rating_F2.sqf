#include "script_component.hpp"

params ["_units","_rating"];
	
private _array = [];
private _value = 0.01;
private ["_unit","_vehicle"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (alive _unit) then {
		if ( (weapons _unit isEqualTo [] ) || (magazines _unit isEqualTo [] ) ) exitWith {};
		
		_value = _value + 1;
		_array pushBack _unit;
	};
	
	_vehicle = (vehicle _unit);
	
	if (_vehicle in _array) then {
		_array = _array;
	}
	else {
		_array pushBack _vehicle;
		
		if ( (canFire _vehicle) && { (someAmmo _vehicle) } ) then {
			if (_vehicle isKindOf "Car") exitWith {
				_value = _value + 5;
			};
			
			if (_vehicle isKindOf "Tank") exitWith {
				_value = _value + 10;
			};
			
			if (_vehicle isKindOf "Air") exitWith {
				_value = _value + 15;
			};
			
			if (_vehicle isKindOf "Ship") exitWith {
				_value = _value + 15;
			};
			
			_value = _value + 1;
		};
	};
};

_rating pushBack _value;

_rating
