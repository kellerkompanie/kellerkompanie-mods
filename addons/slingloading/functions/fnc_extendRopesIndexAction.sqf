#include "script_component.hpp"

params ["_ropeIndex"];

private _vehicle = player getVariable [QGVAR(ExtendIndexVehicle), objNull];
if(_ropeIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canExtendRopes)) then {
	[_vehicle,player,_ropeIndex] call FUNC(extendRopes);
};
