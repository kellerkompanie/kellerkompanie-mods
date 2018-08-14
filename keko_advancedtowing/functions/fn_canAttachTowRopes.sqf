params ["_player", "_cargo"];

_vehicle = _player getVariable ['keko_advancedtowing_towRopesVehicle', objNull];

if(!isNull _vehicle && !isNull _cargo) then {
  [_vehicle, _cargo] call keko_advancedtowing_fnc_isSupportedCargo && vehicle _player == _player && _player distance _cargo < keko_settings_advancedtowing_maxRopeLength && _vehicle != _cargo && _player call keko_advancedtowing_fnc_isAllowedToTow;
} else {
  false;
};
