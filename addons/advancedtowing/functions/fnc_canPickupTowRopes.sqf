// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_player", "_vehicle"];

private ["_existingTowRopes","_vehicleHasRopesAttached","_playerIsNotCarryingRope"];

_existingTowRopes = _vehicle getVariable [QGVAR(towRopes),[]];
_vehicleHasRopesAttached = (count _existingTowRopes) > 0;
_playerIsNotCarryingRope = isNull (_player getVariable [QGVAR(towRopesVehicle), objNull]);

_playerIsNotCarryingRope && (vehicle _player == _player) && _vehicleHasRopesAttached && _player call FUNC(isAllowedToTow);
