// original version by Duda https://github.com/sethduda/AdvancedTowing

params ["_player", "_vehicle"];

_existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
_vehicleHasRopesAttached = (count _existingTowRopes) > 0;
_playerIsNotCarryingRope = isNull (_player getVariable ["keko_advancedtowing_towRopesVehicle", objNull]);

_playerIsNotCarryingRope && (vehicle _player == _player) && _vehicleHasRopesAttached && _player call keko_advancedtowing_fnc_isAllowedToTow;
