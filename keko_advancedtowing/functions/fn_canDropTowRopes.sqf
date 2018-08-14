params ["_player"];

!isNull (_player getVariable ["keko_advancedtowing_towRopesVehicle", objNull]) && vehicle _player == _player && _player call keko_advancedtowing_fnc_isAllowedToTow;
