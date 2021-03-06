#include "script_component.hpp"

params ["_endType"];

_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionEnd:%1:%2:%3", missionName, missionVersion, worldName ];

{
    disableUserInput true;
} remoteExec ["bis_fnc_call", 0];

if(_endType == "WIN") then {
  "EveryoneWon" call BIS_fnc_endMissionServer;
} else {
  "EveryoneLost" call BIS_fnc_endMissionServer;
};
