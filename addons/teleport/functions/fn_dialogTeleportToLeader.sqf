diag_log text format["[KEKO] (teleport) teleporting %1 to leader", player];

_playerGroup = group player;
_groupLeader = leader _playerGroup;

_pos = [];
if(_groupLeader == player) then {
  // player is already group leader, move to other team member
  _otherGroupMembers = (units _playerGroup) - [player];

  if((count _otherGroupMembers) > 0) then {
    _pos = _otherGroupMembers select 0;
  } else {
    // no other group members found, move to highest ranking player
    _pos = getPos player;
    _highest_rank = -1;
    {
      _rank = rank _x;
      _rank_no = -1;
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
        _pos = getPos _x;
      };
    } forEach (allPlayers - [player]);
  };
} else {
  _pos = getPos _groupLeader;
};

player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;
titleText ["Du wirst zur Front verlegt.", "BLACK FADED"];
sleep 1;
player setPos _pos;
sleep 1;
titleFadeOut 2;
player allowDamage true;
