#include "script_component.hpp"

params ["_player", "_uid"];

ACE_player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;

private _destinationPlayer = [_uid] call BIS_fnc_getUnitByUID;
if (_destinationPlayer != ACE_player) then {
    titleText [format ["Du wirst zu %1 verlegt.", name _destinationPlayer], "BLACK FADED"];
    sleep 1;
    _player setPosASL (getPosASL _destinationPlayer);
} else {
    titleText ["Das ging schief.", "BLACK FADED"];
    sleep 1;
};

sleep 1;
titleFadeOut 2;
ACE_player allowDamage true;
