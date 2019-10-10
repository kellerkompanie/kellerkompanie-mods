#include "script_component.hpp"

params ["_player", "_target"];

if !(GVAR(enabled)) exitWith {false};
if !(alive _target) exitWith {false};
if (_target getVariable ['ACE_isUnconscious', false]) exitWith {false};

if !(isPlayer _target) exitWith {true};

private _playerRank = (rank _player) call FUNC(getRankIndex);
private _targetRank = (rank _target) call FUNC(getRankIndex);

if(!GVAR(canPunchHigherRank) && (_targetRank > _playerRank)) exitWith {false};

true
