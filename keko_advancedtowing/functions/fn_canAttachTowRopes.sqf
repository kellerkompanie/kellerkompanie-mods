params ["_player", "_cargo"];

_vehicle = _player getVariable ['keko_advancedtowing_towRopesVehicle', objNull]

if(!isNull _vehicle && !isNull _cargo) then {
  [_vehicle,_cargo] call keko_advancedtowing_fnc_isSupportedCargo && vehicle player == player && player distance _cargo < 10 && _vehicle != _cargo;
} else {
  false;
};
