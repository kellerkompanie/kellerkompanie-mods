#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

missionNamespace setVariable [QGVAR(supply_drop_pos), getPos _logic];
createDialog QGVAR(supplyDropDialog);

deletevehicle _logic;
