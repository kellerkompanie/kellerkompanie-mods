#include "script_component.hpp"

params ["_ropesIndex"];
private ["_vehicle"];
_vehicle = player getVariable [QGVAR(retractRopesIndexVehicle), objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canRetractRopes)) then {
	[_vehicle,player,_ropesIndex] call FUNC(retractRopes);
};
