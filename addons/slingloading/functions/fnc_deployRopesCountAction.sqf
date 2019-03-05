#include "script_component.hpp"

params ["_count"];

private _vehicle = player getVariable [QGVAR(DeployCountVehicle), objNull];

if(_count > 0 && !isNull _vehicle && [_vehicle] call FUNC(canDeployRopes)) then {
    [_vehicle, player, _count] call FUNC(deployRopes);
};
