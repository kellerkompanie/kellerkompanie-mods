params ["_logic"];
if (!local _logic) exitWith {};

missionNamespace setVariable ["keko_logistics_spawn_crate_pos", getPos _logic];
createDialog "keko_logistics_spawnCrateDialog";

deletevehicle _logic;