#include "script_component.hpp"

params ["_target", "_player", "_params"];
_params params ["_loc_id","_loc_name","_loc_type","_loc_radius"];

private _flagObject = createVehicle ["keko_redneck_flag", position _target, [], 0, "CAN_COLLIDE"];
deleteVehicle _target;
_flagObject allowDamage false;

private _idx = GVAR(LocationMapKeys) find _loc_id;
GVAR(LocationMapValues) set [_idx, 'REDNECK'];
[_loc_id, 'REDNECK'] call FUNC(dbUpdateLocation);
