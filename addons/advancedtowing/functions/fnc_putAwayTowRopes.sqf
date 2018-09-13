// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_player", "_vehicle"];

if(local _vehicle) then {
  private ["_existingTowRopes"];

  _existingTowRopes = _vehicle getVariable [QGVAR(towRopes),[]];
  if(count _existingTowRopes > 0) then {
    _this call FUNC(pickupTowRopes);
    _this call FUNC(dropTowRopes);
    {
      ropeDestroy _x;
    } forEach _existingTowRopes;
    _vehicle setVariable [QGVAR(towRopes),nil,true];
  };
} else {
  _this remoteExecCall [QFUNC(putAwayTowRopes), _vehicle];
};
