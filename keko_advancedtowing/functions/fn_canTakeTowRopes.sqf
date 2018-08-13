params ["_player", "_vehicle"];
if([_vehicle] call keko_advancedtowing_fnc_isSupportedVehicle) then {
  private ["_existingVehicle","_existingTowRopes"];
  _existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
  _existingVehicle = player getVariable ["keko_advancedtowing_towRopesVehicle", objNull];
  vehicle player == player && player distance _vehicle < 10 && (count _existingTowRopes) == 0 && isNull _existingVehicle;
} else {
  false;
};
