#include "script_component.hpp"

params ["_position","_distance","_direction"];

if (_position isEqualType objNull) exitWith {
	private _return = (_position getPos [_distance, _direction] select [0, 2] ) + [getPos _position select 2];	
	_return
};

if (_position isEqualType [] ) exitWith {
	private _return = (_position getPos [_distance, _direction] select [0, 2] ) + ( [ [], [_position select 2] ] select (count _position > 2) );	
	_return
};