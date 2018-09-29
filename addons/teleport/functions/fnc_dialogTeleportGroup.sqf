#include "script_component.hpp"

params ["_player","_teleporterName"];

TRACE_2("dialogTeleportGroup", _player, _teleporterName);

if (!isServer) exitWith {WARNING("dialogTeleportGroup only permitted on server"); false};

TRACE_1("teleport group @ marker", _teleporterName);

private _playerGroup = group _player;
private _groupLeader = leader _playerGroup;

if(_groupLeader == _player) then {
  {
    [_teleporterName] remoteExec [QFUNC(dialogTeleport), _x, false];
    sleep 3;
  } forEach units _playerGroup;
} else {
  hintC "Only group leader may teleport the group.";
};
