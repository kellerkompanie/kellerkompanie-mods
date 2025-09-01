#include "script_component.hpp"

private _playerGroup = group ACE_player;
private _groupLeader = leader _playerGroup;
private _destination = _groupLeader;

if (_groupLeader == ACE_player and count (units _playerGroup) > 0) then {
    // player is already group leader, teleport to random team member
    private _otherGroupMembers = (units _playerGroup) - [ACE_player];
    _destination = selectRandom _otherGroupMembers;    
};

// Move the player out of the vehicle
moveOut ACE_player;

[ACE_player, _destination modelToWorld [0,0,0]] call ace_zeus_fnc_moveToRespawnPosition;
