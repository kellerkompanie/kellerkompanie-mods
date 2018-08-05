params ["_logic"];

if !(local _logic) exitWith {};

["FAIL"] remoteExec ["keko_logging_fnc_endMission", 2];
