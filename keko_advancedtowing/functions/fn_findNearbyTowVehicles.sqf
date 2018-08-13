private ["_nearVehicles","_nearVehiclesWithTowRopes","_vehicle","_ends","_end1","_end2"];
_nearVehicles = [];
{
  _nearVehicles append (position player nearObjects [_x, 30]);
} forEach (missionNamespace getVariable ["keko_advancedtowing_TOW_SUPPORTED_VEHICLES_OVERRIDE", keko_advancedtowing_TOW_SUPPORTED_VEHICLES]);
_nearVehiclesWithTowRopes = [];
{
  _vehicle = _x;
  {
    _ends = ropeEndPosition _x;
    if(count _ends == 2) then {
      _end1 = _ends select 0;
      _end2 = _ends select 1;
      if(((position player) distance _end1) < 5 || ((position player) distance _end2) < 5 ) then {
        _nearVehiclesWithTowRopes pushBack _vehicle;
      }
    };
  } forEach (_vehicle getVariable ["keko_advancedtowing_towRopes",[]]);
} forEach _nearVehicles;
_nearVehiclesWithTowRopes;
