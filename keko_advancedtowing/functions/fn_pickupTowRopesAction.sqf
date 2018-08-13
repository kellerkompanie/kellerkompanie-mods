private ["_nearbyTowVehicles","_canPickupTowRopes","_vehicle"];
_nearbyTowVehicles = missionNamespace getVariable ["keko_advancedtowing_nearbyTowVehicles",[]];
if([] call keko_advancedtowing_fnc_canPickupTowRopes) then {

  _vehicle = _nearbyTowVehicles select 0;
  _canPickupTowRopes = true;

  if!(keko_settings_advancedtowing_locked == 1) then {
    if( locked _vehicle > 1 ) then {
      hint "Cannot pick up tow ropes from locked vehicle";
      _canPickupTowRopes = false;
    };
  };

  if(_canPickupTowRopes) then {
    [_nearbyTowVehicles select 0, player] call keko_advancedtowing_fnc_pickupTowRopes;
  };

};
