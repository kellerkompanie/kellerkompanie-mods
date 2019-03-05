#include "script_component.hpp"

params ["_player"];

private _vehicleAndIndex = _player getVariable [QGVAR(RopesVehicle), []];
if(count _vehicleAndIndex == 2) then {
    [_vehicleAndIndex select 0, _player, _vehicleAndIndex select 1] call FUNC(dropRopes);
};
