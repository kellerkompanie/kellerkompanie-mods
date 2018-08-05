params ["_endType"];

_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionEnd:%1:%2:%3", missionName, missionVersion, worldName ];
diag_log text format["[KEKO] (logging) endMission: %1 %2 %3", missionName, missionVersion, worldName];
diag_log text format["[KEKO] (logging) endMission: %1", _ret];

if(_endType == "WIN") then {
  "EveryoneWon" call BIS_fnc_endMissionServer;
} else {
  "EveryoneLost" call BIS_fnc_endMissionServer;
};
