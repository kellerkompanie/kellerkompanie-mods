params ["_logic"];

if !(local _logic) exitWith {};

["WIN"] remoteExec ["keko_logging_fnc_endMission", 2];
