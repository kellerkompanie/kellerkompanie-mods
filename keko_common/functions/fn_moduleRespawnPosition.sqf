params ["_logic"];
if (!local _logic) exitWith {};

[getPos _logic] call keko_common_fnc_setRespawnPosition;

deletevehicle _logic;