#include "script_component.hpp"

params ["_player","_target"];

private _vehicle = (_player getVariable [QGVAR(RopesVehicle), [objNull,0]]) select 0;

if(!isNull _vehicle && !isNull _target) then {
    [_vehicle,_target] call FUNC(isSupportedCargo) && vehicle _player == _player && _player distance _target < 10 && _vehicle != _target;
} else {
    false;
};
