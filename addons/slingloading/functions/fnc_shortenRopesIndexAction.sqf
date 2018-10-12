#include "script_component.hpp"

params ["_ropeIndex"];

private _vehicle = player getVariable [QGVAR(ShortenIndexVehicle), objNull];

if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canShortenRopes)) then {
	[_vehicle,player,_ropeIndex] call FUNC(shortenRopes);
};
