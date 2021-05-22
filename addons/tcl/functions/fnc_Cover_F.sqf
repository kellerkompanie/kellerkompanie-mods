#include "script_component.hpp"

params ["_unit","_array","_distance"];

private _position = (_array select 1);
_objects = (_array select 2);

if ((_unit distance _position > _distance) || (_objects isEqualTo [])) then {
	_objects = nearestTerrainObjects [_position, ["HIDE","ROCK","ROCKS","BUSH"], _distance];	
	_array set [2, _objects];	
	_array set [1, (getPos _unit) ];
};

_objects