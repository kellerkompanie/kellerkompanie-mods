#include "script_component.hpp"

params ["_player"];

!isNull (_player getVariable [QGVAR(towRopesVehicle), objNull]) && vehicle _player == _player && _player call FUNC(isAllowedToTow);
