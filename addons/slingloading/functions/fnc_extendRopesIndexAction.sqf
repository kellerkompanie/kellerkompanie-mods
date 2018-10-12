#include "script_component.hpp"

params ["_ropeIndex"];

private ["_vehicle","_canDeployRopes"];

_vehicle = player getVariable ["ASL_Extend_Index_Vehicle", objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canExtendRopes)) then {
	[_vehicle,player,_ropeIndex] call FUNC(extendRopes);
};
