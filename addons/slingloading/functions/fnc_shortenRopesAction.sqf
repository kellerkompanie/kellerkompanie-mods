#include "script_component.hpp"

private ["_vehicle"];
_vehicle = vehicle player;
if([_vehicle] call FUNC(canShortenRopes)) then {
	private ["_activeRopes"];
	_activeRopes = [_vehicle] call FUNC(getActiveRopes);
	if(count _activeRopes > 1) then {
		player setVariable [QGVAR(ShortenIndexVehicle), _vehicle];
		["Shorten Cargo Ropes",QFUNC(shortenRopesIndexAction),_activeRopes] call FUNC(showSelectRopesMenu);
	} else {
		if(count _activeRopes == 1) then {
			[_vehicle,player,(_activeRopes select 0) select 0] call FUNC(shortenRopes);
		};
	};
};
