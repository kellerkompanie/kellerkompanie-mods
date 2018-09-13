#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

missionNamespace setVariable [QGVAR(spawn_crate_pos), getPos _logic];
createDialog QGVAR(spawnCrateDialog);

deletevehicle _logic;
