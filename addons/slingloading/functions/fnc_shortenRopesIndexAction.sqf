#include "script_component.hpp"

params ["_ropeIndex"];

private ["_vehicle"];

_vehicle = player getVariable ["ASL_Shorten_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canShortenRopes)) then {
	[_vehicle,player,_ropeIndex] call FUNC(shortenRopes);
};
