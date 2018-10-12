#include "script_component.hpp"

private ["_vehicle","_canRetractRopes"];
if(vehicle player == player) then {
	_vehicle = cursorTarget;
} else {
	_vehicle = vehicle player;
};
if([_vehicle] call FUNC(canRetractRopes)) then {
	private ["_activeRopes"];
	_activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
	if(count _activeRopes > 1) then {
		player setVariable [QGVAR(RetractRopesIndexVehicle), _vehicle];
		["Retract Cargo Ropes",QFUNC(retractRopesIndexAction),_activeRopes] call FUNC(showSelectRopesMenu);
	} else {
		if(count _activeRopes == 1) then {
			[_vehicle,player,(_activeRopes select 0) select 0] call FUNC(retractRopes);
		};
	};
};
