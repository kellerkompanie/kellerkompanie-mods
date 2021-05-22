#include "script_component.hpp"

params ["_enemy","_group"];
	
private _array = [];
private _rating = [];
private _units = (units _group);

_array = (units _enemy) select { ( (alive _x) && { (_group knowsAbout vehicle _x > 0) } ) };
{_rating = [_x, _rating] call FUNC(Rating_F2) } count [_array, _units];

private _ai = (_group getVariable QGVAR(AI) select 1);
private _return = [_rating, _ai] call FUNC(Rating_F3);

_return
	