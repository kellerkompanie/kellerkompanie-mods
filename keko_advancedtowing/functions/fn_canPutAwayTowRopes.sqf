params ["_player", "_vehicle"];
private ["_existingTowRopes"];
if([_vehicle] call keko_advancedtowing_fnc_isSupportedVehicle) then {
  _existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
  vehicle player == player && player distance _vehicle < 10 && (count _existingTowRopes) > 0;
} else {
  false;
};
