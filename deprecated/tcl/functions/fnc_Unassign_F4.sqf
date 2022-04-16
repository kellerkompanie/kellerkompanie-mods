#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
[_group, _logic] call FUNC(Reveal_F1);

if (_group knowsAbout vehicle _enemy > 0) then {
	private _units = (units _group); 
	_units doWatch (getPos _enemy);
	_group setVariable [QGVAR(KnowsAbout), 0];
	
	if ( [dayTime] call FUNC(Daytime_F)) then {
		private _leader = (leader _group);
		
		if (isNull objectParent _leader) then {
			[_enemy, _group] spawn FUNC(Smoke_F1);
			_units select { ( (alive assignedVehicle _x) && { (assignedVehicle _x isKindOf "LandVehicle") } && { (_x == driver assignedVehicle _x) } ) } apply { [_enemy, _group, assignedVehicle _x] spawn FUNC(Smoke_F2) };
		}
		else {
			private _vehicle = (vehicle _leader);
			
			if (_vehicle isKindOf "LandVehicle") then {
				[_enemy, _group, _vehicle] spawn FUNC(Smoke_F2);
			};
		};
	}
	else {
		[_enemy, _group, _logic] spawn FUNC(Flare_F1);
	};
	
	[_enemy, _group, _logic] call FUNC(Artillery_F1);
};

True
