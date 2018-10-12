#include "script_component.hpp"

params ["_count"];

private ["_vehicle","_canDeployRopes"];

_vehicle = player getVariable ["ASL_Deploy_Count_Vehicle", objNull];

if(_count > 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
	[_vehicle,player,_count] call FUNC(deployRopes);
};
