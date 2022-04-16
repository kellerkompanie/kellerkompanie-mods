#include "script_component.hpp"

params ["_unit"];

private _return = 0;

if (alive _unit) then {
	private _rank = (rank _unit);
	
	if (_rank isEqualTo "PRIVATE") exitWith {
		_return = 1;
	};
	
	if (_rank isEqualTo "CORPORAL") exitWith {
		_return = 2;
	};
	
	if (_rank isEqualTo "SERGEANT") exitWith {
		_return = 3;
	};
	
	if (_rank isEqualTo "LIEUTENANT") exitWith {
		_return = 4;
	};
	
	if (_rank isEqualTo "CAPTAIN") exitWith {
		_return = 5;
	};
	
	if (_rank isEqualTo "MAJOR") exitWith {
		_return = 6;
	};
	
	if (_rank isEqualTo "COLONEL") exitWith {
		_return = 7;
	};
};

_return