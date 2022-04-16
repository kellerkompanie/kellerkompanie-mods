#include "script_component.hpp"

params ["_group","_logic","_units","_groups"];

private _alpha = _group;
private _leader = (leader _alpha);

if (_leader == vehicle _leader) then {
	private _rank = [_leader] call FUNC(Rank_F);	
	private "_bravo";	
	private _count = 0;
	
	for "_count" from _count to (count _groups - 1) do {
		_bravo = (_groups select _count);		
		_condition = (units _bravo) select { ( (alive _x) && { (isNull objectParent _x) } && { (_x distance _leader < 100) } ) };
		
		if ( (_units <= count _condition) && { (_rank <= [leader _bravo] call FUNC(Rank_F)) } && { ( [_alpha, _bravo] call FUNC(KnowsAbout_F5) ) } ) exitWith	{
			private _units = (units _alpha);			
			[QGVAR(Position), _alpha] call FUNC(Marker_F1);			
			_groups = (_logic getVariable QGVAR(Reinforcement));			
			_groups deleteAt (_groups find _alpha);			
			_units join _bravo;			
			(GVAR(Regroup) select 0) append _units;			
			_units select { (count assignedVehicleRole _x > 0) } apply { [_x] orderGetIn False; [_x] allowGetIn False};
		};
	};
};

True
