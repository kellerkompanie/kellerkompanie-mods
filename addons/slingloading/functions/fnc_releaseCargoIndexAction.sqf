#include "script_component.hpp"

params ["_ropesIndex"];

private _vehicle = player getVariable [QGVAR(ReleaseCargoIndexVehicle), objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canReleaseCargo)) then {
	[_vehicle,player,_ropesIndex] call FUNC(releaseCargo);
};
