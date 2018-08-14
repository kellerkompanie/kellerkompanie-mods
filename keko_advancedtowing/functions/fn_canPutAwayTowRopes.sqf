// original version by Duda https://github.com/sethduda/AdvancedTowing

params ["_player", "_vehicle"];

private ["_existingTowRopes"];
if([_vehicle] call keko_advancedtowing_fnc_isSupportedVehicle) then {
  _existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
  vehicle _player == _player && _player distance _vehicle < keko_settings_advancedtowing_maxRopeLength && (count _existingTowRopes) > 0 && _player call keko_advancedtowing_fnc_isAllowedToTow;
} else {
  false;
};
