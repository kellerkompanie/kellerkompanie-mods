#include "script_component.hpp"

params ["_player","_teleporterName"];

TRACE_2("fnc_dialogJumpGroup", _player, _teleporterName);

if (!isServer) exitWith {WARNING("fnc_dialogJumpGroup only permitted on server"); false};

INFO("jumping group @ marker", _teleporterName);

private _playerGroup = group _player;
private _groupLeader = leader _playerGroup;

if(_groupLeader == _player) then {
  {
    [_teleporterName] remoteExec [QFUNC(dialogJump), _x, false];
        sleep 3;
  } forEach units _playerGroup;
} else {
  hintC "Only group leader may parachute the group.";
};
