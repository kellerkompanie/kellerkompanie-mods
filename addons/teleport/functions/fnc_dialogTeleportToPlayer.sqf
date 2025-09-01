#include "script_component.hpp"

params ["_player", "_uid"];

private _destination = [_uid] call BIS_fnc_getUnitByUID;

// Move the player out of the vehicle
moveOut _player;

// Function takes position AGL and must be ran where local
[_player, _destination modelToWorld [0,0,0]] call ace_zeus_fnc_moveToRespawnPosition;
