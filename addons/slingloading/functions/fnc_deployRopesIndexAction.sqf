#include "script_component.hpp"

params ["_ropesIndex"];
private ["_vehicle"];
_vehicle = player getVariable [QGVAR(deployRopesIndexVehicle), objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
	[_vehicle,player,_ropesIndex] call FUNC(deployRopesIndex);
};
