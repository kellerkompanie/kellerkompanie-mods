#include "script_component.hpp"

params ["_target", "_player", "_params"];
_params params ["_loc_id","_loc_name","_loc_type","_loc_radius"];

private _flagObject = createVehicle ["keko_redneck_flag", position _target, [], 0, "CAN_COLLIDE"];
deleteVehicle _target;
