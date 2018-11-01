#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

missionNamespace setVariable [QGVAR(heli_drop_pos), getPos _logic];
createDialog QGVAR(heliDropDialog);

deletevehicle _logic;
