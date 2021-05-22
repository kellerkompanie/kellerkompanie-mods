#include "script_component.hpp"

params ["_unit","_group","_logic","_objects"];

private ["_building","_positions"];
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_building = (_objects select _count);
	_positions = [_building] call FUNC(Building_Pos_F);
	
	if (_positions > 1) exitWith {
		[_unit, _group, _logic, _building, _positions] spawn FUNC(House_Search_F3);
	};
};

True
