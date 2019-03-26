#include "script_component.hpp"

params ["_player", "_destinationPlayer"];

player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;
titleText [format ["Du wirst zu %1 verlegt.", name _destinationPlayer], "BLACK FADED"];
sleep 1;
_player setPosASL (getPosASL _destinationPlayer);
sleep 1;
titleFadeOut 2;
player allowDamage true;
