#include "script_component.hpp"

params ["_player", "_destinationPlayer"];

TRACE_2("dialogTeleportToPlayer", _player, _destinationPlayer);

if (!isServer) exitWith {WARNING("dialogTeleportToPlayer only permitted on server"); false};

player allowDamage false;
titleText ["", "BLACK OUT", 2];
sleep 2;
titleText [format ["Du wirst zu %1 verlegt.", name _destinationPlayer], "BLACK FADED"];
sleep 1;
_player setPos (getPos _destinationPlayer);
sleep 1;
titleFadeOut 2;
player allowDamage true;
