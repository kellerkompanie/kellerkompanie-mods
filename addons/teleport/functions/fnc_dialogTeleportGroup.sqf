#include "script_component.hpp"

params ["_player","_teleporterName"];

diag_log text format["[KEKO] (teleport) fnc_dialogTeleportGroup: %1 %2", _player, _teleporterName];

if (!isServer) exitWith {diag_log text "[KEKO] (teleport) fnc_dialogTeleportGroup only permitted on server"; false};

diag_log text format["[KEKO] (teleport) teleport group @ marker: %1", _teleporterName];

private _playerGroup = group _player;
private _groupLeader = leader _playerGroup;

if(_groupLeader == _player) then {
  {
    [_teleporterName] remoteExec ["keko_teleport_fnc_dialogTeleport", _x, false];
    sleep 3;
  } forEach units _playerGroup;
} else {
  hintC "Only group leader may teleport the group.";
};
