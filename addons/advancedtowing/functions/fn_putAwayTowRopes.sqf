// original version by Duda https://github.com/sethduda/AdvancedTowing

params ["_player", "_vehicle"];

if(local _vehicle) then {
  private ["_existingTowRopes","_hitchPoint","_rope"];

  _existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
  if(count _existingTowRopes > 0) then {
    _this call keko_advancedtowing_fnc_pickupTowRopes;
    _this call keko_advancedtowing_fnc_dropTowRopes;
    {
      ropeDestroy _x;
    } forEach _existingTowRopes;
    _vehicle setVariable ["keko_advancedtowing_towRopes",nil,true];
  };
} else {
  _this remoteExecCall ["keko_advancedtowing_fnc_putAwayTowRopes", _vehicle];
};
