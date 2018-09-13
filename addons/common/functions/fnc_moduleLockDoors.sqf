#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

profileNamespace setVariable [QGVAR(lockDoors_center), getPos _logic];

createDialog QGVAR(lockDoorsDialog);

deleteVehicle _logic;