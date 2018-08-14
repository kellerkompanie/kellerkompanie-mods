params ["_player", "_vehicle"];

if([_vehicle] call keko_advancedtowing_fnc_isSupportedVehicle) then {
  private ["_existingVehicle","_existingTowRopes"];
  _existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
  _existingVehicle = _player getVariable ["keko_advancedtowing_towRopesVehicle", objNull];
  vehicle _player == _player && _player distance _vehicle < keko_settings_advancedtowing_maxRopeLength && (count _existingTowRopes) == 0 && isNull _existingVehicle && _player call keko_advancedtowing_fnc_isAllowedToTow;
} else {
  false;
};
