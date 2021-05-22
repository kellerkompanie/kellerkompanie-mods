#include "script_component.hpp"

params ["_group","_logic","_spot"];

if (alive _spot) then {
	deleteVehicle _spot;
};

private _units = (units _group);
private _array = (_logic getVariable QGVAR(Reinforcement));

{
	DELETE_AT(GVAR(Reinforcement), _x, _group);
} forEach [0,1,2];

{
	DELETE_AT(_x, 0, _group);
} forEach [GVAR(Red), GVAR(Join), GVAR(Retreat), GVAR(Request), GVAR(Waiting), GVAR(Sneaking), GVAR(Flanking), GVAR(Behaviour)];

if (_units findIf { (alive _x) } < 0) then {
	[QGVAR(Position), _group] call FUNC(Marker_F1);
};

_array deleteAt (_array find _group);

if (_array isEqualTo [] ) then {
	DELETE_AT(GVAR(Logic), 0, _logic);	
	[QGVAR(Delete), _logic] call FUNC(Marker_F1);	
	deleteVehicle _logic;
};

True
