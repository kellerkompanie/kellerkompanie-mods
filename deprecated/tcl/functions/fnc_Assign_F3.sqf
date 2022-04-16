#include "script_component.hpp"

params ["_units","_vehicle"];

private _positions = ["Driver","Gunner","Commander"];
private ["_position","_unit"];

while { count _positions > 0 } do {
	_position = (_positions select 0);
	
	if (_units isEqualTo [] ) exitWith {};
		
	if (_vehicle emptyPositions _position > 0) then {
		_unit = (_units select 0);
		
		if (alive _unit) then {
			if (_position isEqualTo "Driver") exitWith {
				_unit assignAsDriver _vehicle;
			};
			
			if (_position isEqualTo "Gunner") exitWith {
				_unit assignAsGunner _vehicle;
			};
			
			if (_position isEqualTo "Commander") exitWith {
				_unit assignAsCommander _vehicle;
			};
		};
		
		_units deleteAt (_units find _unit);		
		[_unit] orderGetIn True; [_unit] allowGetIn True;
	};
	
	_positions deleteAt (_positions find _position);
};

_units
