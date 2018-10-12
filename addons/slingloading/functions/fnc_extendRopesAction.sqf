#include "script_component.hpp"

params ["_vehicle"];

_vehicle = vehicle player;

if([_vehicle] call FUNC(canExtendRopes)) then {
	private ["_activeRopes"];

	_activeRopes = [_vehicle] call FUNC(getActiveRopes);

	if(count _activeRopes > 1) then {
		player setVariable [QGVAR(ExtendIndexVehicle), _vehicle];
		["Extend Cargo Ropes",QGVAR(ExtendRopesIndexAction),_activeRopes] call FUNC(showSelectRopesMenu);
	} else {
		if(count _activeRopes == 1) then {
			[_vehicle,player,(_activeRopes select 0) select 0] call FUNC(extendRopes);
		};
	};
};
