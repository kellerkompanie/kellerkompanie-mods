#include "script_component.hpp"

params ["_player","_teleporterName"];

diag_log text format["[KEKO] (teleport) fnc_dialogJumpGroup: %1 %2", _player, _teleporterName];

if (!isServer) exitWith {diag_log text "[KEKO] (teleport) fnc_dialogJumpGroup only permitted on server"; false};

diag_log text format["[KEKO] (teleport) jumping group @ marker: %1", _teleporterName];

_playerGroup = group _player;
_groupLeader = leader _playerGroup;

if(_groupLeader == _player) then {
  {
    [_teleporterName] remoteExec ["keko_teleport_fnc_dialogJump", _x, false];
		sleep 3;
  } forEach units _playerGroup;
} else {
  hintC "Only group leader may parachute the group.";
};
