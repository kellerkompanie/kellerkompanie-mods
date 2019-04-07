#include "script_component.hpp"

params ["_player", "_destinationPlayerUID"];

player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;

private _destinationPlayer = player;
{
    if (getPlayerUID _x == _destinationPlayerUID) exitWith {
        _destinationPlayer = _x;
    };
} forEach allPlayers - [player];

if (_destinationPlayer != player) then {
    titleText [format ["Du wirst zu %1 verlegt.", name _destinationPlayer], "BLACK FADED"];
    sleep 1;
    _player setPosASL (getPosASL _destinationPlayer);
} else {
    titleText ["Das ging schief.", "BLACK FADED"];
    sleep 1;
};

sleep 1;
titleFadeOut 2;
player allowDamage true;
