#include "script_component.hpp"

params ["_vehicle","_position"];

private _return = True;
private _distance = 100;

if (_vehicle isKindOf "Tank") then {
	private _random = (random 100);
	_distance = (_distance + _random);
};

private _objects = _position nearEntities [ ["CAManBase","Car","Tank","Helicopter"], _distance];

if (_objects isEqualTo [] ) exitWith {_return};

private "_object";
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_object = (_objects select _count);
	
	if ( (alive _object) && { (side _object getFriend side _vehicle > 0.6) } ) exitWith {
		_return = False;
	};
};

_return
