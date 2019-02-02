#include "script_component.hpp"

params ["_player", "_vehicle"];

private ["_existingTowRopes"];

if([_vehicle] call FUNC(isSupportedVehicle)) then {
  _existingTowRopes = _vehicle getVariable [QGVAR(towRopes),[]];
  vehicle _player == _player && _player distance _vehicle < GVAR(maxRopeLength) && (count _existingTowRopes) > 0 && _player call FUNC(isAllowedToTow);
} else {
  false;
};
