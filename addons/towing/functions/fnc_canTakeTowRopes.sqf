// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_player", "_vehicle"];

if([_vehicle] call FUNC(isSupportedVehicle)) then {
  private ["_existingVehicle","_existingTowRopes"];
  _existingTowRopes = _vehicle getVariable [QGVAR(towRopes),[]];
  _existingVehicle = _player getVariable [QGVAR(towRopesVehicle), objNull];
  vehicle _player == _player && _player distance _vehicle < GVAR(maxRopeLength) && (count _existingTowRopes) == 0 && isNull _existingVehicle && _player call FUNC(isAllowedToTow)
} else {
  false
};
