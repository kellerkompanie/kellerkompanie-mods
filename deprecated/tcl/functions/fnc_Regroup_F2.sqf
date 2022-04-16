#include "script_component.hpp"

params ["_group","_logic","_count","_groups"];

private _leader = (leader _group);

if (isNull objectParent _leader) then {
	private "_units";
	private _rank = [_leader] call FUNC(Rank_F);
	private _condition = {_this select { ( (alive _x) && { (isNull objectParent _x) } && { (_x distance _leader < 100) } ) }; count _this};
	{
		_units = (units _x);
	
		if ( (_count <= _units call _condition) && { (_rank <= [leader _x] call FUNC(Rank_F)) } && { ( [_group, _x] call FUNC(KnowsAbout_F5) ) } ) exitWith {
			_units = (units _group);
			[QGVAR(Position), _group] call FUNC(Marker_F1);
			_groups = (_logic getVariable QGVAR(Reinforcement));
			_groups deleteAt (_groups find _group);
			_units join _x;
			(GVAR(Regroup) select 0) append _units;
			_units select { (count assignedVehicleRole _x > 0) } apply { [_x] orderGetIn False; [_x] allowGetIn False};
			_units select { ( (fleeing _x) || (captive _x) ) } apply {if (fleeing _x) then {_x allowFleeing 0} else {_x setCaptive False} };
		};	
	} forEach _groups;
};

True
