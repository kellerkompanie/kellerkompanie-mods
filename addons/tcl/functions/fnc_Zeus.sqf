#include "script_component.hpp"

_this spawn {
	params ["_curators"];

	waitUntil { ( (alive player) && (time > 0) ) };

	private _bool = True;
	private _curator = objNull;
	private ["_count","_curator","_unit","_array"];

	while { _bool } do {
		_count = 0;
		
		for "_count" from _count to (count _curators - 1) do {
			_curator = _curators select _count;		
			_unit = (getAssignedCuratorUnit _curator);
			
			if (_unit == player) exitWith {
				_bool = False;			
				(GVAR(Curator) select 0) pushBack _curator;			
				publicVariable QGVAR(Curator);
			};
		};
		
		_array = GVAR(Curator) select 0;
		
		if (_array isEqualTo _curators) exitWith {};
			
		sleep 1;
	};

	if (alive _curator) then {
		_curator addEventHandler ["CuratorObjectPlaced", {_this spawn FUNC(EH_Zeus_F1) } ];	
		_curator addEventHandler ["CuratorWaypointPlaced", {_this call FUNC(EH_Zeus_F2) } ];	
		_curator addEventHandler ["CuratorWaypointDeleted", {_this call FUNC(EH_Zeus_F3) } ];
	};
};