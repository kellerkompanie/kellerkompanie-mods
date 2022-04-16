#include "script_component.hpp"

params ["_array","_index","_turret"];

private _turrets = (_turret >> "turrets");
private _count = 0;

for "_count" from _count to (count _turrets - 1) do {
	_array pushBack [_index, _count];
};

_array
