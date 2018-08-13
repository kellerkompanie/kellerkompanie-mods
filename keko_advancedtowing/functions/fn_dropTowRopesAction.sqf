private ["_vehicle"];
_vehicle = player getVariable ["keko_advancedtowing_towRopesVehicle", objNull];
if([] call keko_advancedtowing_fnc_canDropTowRopes) then {
  [_vehicle, player] call keko_advancedtowing_fnc_dropTowRopes;
};
