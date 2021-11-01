#include "script_component.hpp"

GVAR(zeusPlayers) = [];

private _playerFPSEH = [QGVAR(FPS), {
    params ["_uid", "_fps"];
    GVAR(playerToFPSMap) set [_uid, _fps];
}] call CBA_fnc_addEventHandler;

private _playerZeusEH = [QGVAR(Zeus), {
    params ["_player"];
    GVAR(zeusPlayers) pushBack (owner _player);
}] call CBA_fnc_addEventHandler;