#include "script_component.hpp"

private _playerGroup = group ACE_player;
private _groupLeader = leader _playerGroup;
private _destination = _groupLeader;

if(_groupLeader == ACE_player) then {
    // player is already group leader, teleport to random team member
    private _otherGroupMembers = (units _playerGroup) - [ACE_player];
    _destination = selectRandom _otherGroupMembers;    
};

// Move the player out of the vehicle
moveOut _player;

// Function takes position AGL and must be ran where local
["ace_zeus_fnc_moveToRespawnPosition", [_player, _destination modelToWorld [0,0,0]], _player] call CBA_fnc_targetEvent;
