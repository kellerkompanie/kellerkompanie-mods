#include "script_component.hpp"

params ["_location_id"];

private _idx = GVAR(LocationMapKeys) find _location_id;
private _value = GVAR(LocationMapValues) select _idx;
_value params ["", "", "", "_loc_side", ""];

_loc_side == "REDNECK"
