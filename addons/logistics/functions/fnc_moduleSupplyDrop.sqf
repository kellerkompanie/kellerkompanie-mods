params ["_logic"];
if (!local _logic) exitWith {};

missionNamespace setVariable ["keko_logistics_supply_drop_pos", getPos _logic];
createDialog "keko_logistics_supplyDropDialog";

deletevehicle _logic;