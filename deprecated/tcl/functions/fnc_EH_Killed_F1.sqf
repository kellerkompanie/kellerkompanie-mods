#include "script_component.hpp"

params ["_vehicle"];
	
if (GVAR(Server)) then {
	if (_vehicle isKindOf "Tank") then {
		if (GVAR(FX) select 11) then {
			if (floor (random 100) < (GVAR(FX) select 12) ) then {
				private _crew = (crew _vehicle);
				
				if (_crew isEqualTo [] ) exitWith {};
				
				[_crew, _vehicle] spawn FUNC(Crew_FX_F1);
			};
		};
	};
	
	[_vehicle] call FUNC(EH_Killed_F2);
};

if (GVAR(Dedicated)) exitWith {};

if (GVAR(FX) select 13) then {
	[_vehicle] spawn FUNC(Explosion_FX_F1);
};

True
	