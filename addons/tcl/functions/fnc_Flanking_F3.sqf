#include "script_component.hpp"

params ["_position"];

private _spot = createVehicle ["Sign_Arrow_Large_Yellow_F", _position, [], 0, "CAN_COLLIDE"];

sleep 5;

deleteVehicle _spot;
