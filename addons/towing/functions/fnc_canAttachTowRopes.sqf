// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_player", "_cargo"];
private ["_vehicle"];

_vehicle = _player getVariable [QGVAR(towRopesVehicle), objNull];

if(!isNull _vehicle && !isNull _cargo) then {
  [_vehicle, _cargo] call FUNC(isSupportedCargo) && vehicle _player == _player && _player distance _cargo < GVAR(maxRopeLength) && _vehicle != _cargo && _player call FUNC(isAllowedToTow);
} else {
  false;
};
