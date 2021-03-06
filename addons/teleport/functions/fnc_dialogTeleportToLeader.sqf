#include "script_component.hpp"

private _playerGroup = group ACE_player;
private _groupLeader = leader _playerGroup;

private _pos = [];
if(_groupLeader == ACE_player) then {
    // player is already group leader, move to other team member
    private _otherGroupMembers = (units _playerGroup) - [ACE_player];

    if((count _otherGroupMembers) > 0) then {
        _pos = getPosASL (selectRandom _otherGroupMembers);
    } else {
        // no other group members found, move to highest ranking player
        _pos = getPosASL ACE_player;
        private _highest_rank = -1;
        {
            private _rank = rank _x;
            private _rank_no = -1;
            switch(_rank) do {
                case "PRIVATE": {
                    _rank_no = 0;
                };
                case "CORPORAL": {
                    _rank_no = 1;
                };
                case "SERGEANT": {
                    _rank_no = 2;
                };
                case "LIEUTENANT": {
                    _rank_no = 3;
                };
                case "CAPTAIN": {
                    _rank_no = 4;
                };
                case "MAJOR": {
                    _rank_no = 5;
                };
                case "COLONEL": {
                    _rank_no = 6;
                };
            };

            if(_rank_no > _highest_rank) then {
                _highest_rank = _rank_no;
                _pos = getPosASL _x;
            };
        } forEach (allPlayers - [ACE_player] - (entities "HeadlessClient_F"));
    };
} else {
    _pos = getPosASL _groupLeader;
};

ACE_player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;
titleText ["Du wirst zur Front verlegt.", "BLACK FADED"];
sleep 1;
ACE_player setPosASL _pos;
sleep 1;
titleFadeOut 2;
ACE_player allowDamage true;
