_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if !(_activated && local _logic) exitWith {};

missionNamespace setVariable ["keko_logistics_supply_drop_pos", getPos _logic];
createDialog "keko_logistics_supplyDropDialog";

deletevehicle _logic;