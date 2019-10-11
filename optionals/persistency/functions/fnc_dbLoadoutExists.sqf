#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_player"];

private _playerUID = getPlayerUID _player;

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:containsLoadout:%1:%2", GVAR(key), _playerUID]);
private _playerExists = false;
if ((_ret select 0) == 1) then {
    if (count (_ret select 1) == 1) then {
        _playerExists = true;
    };
} else {
    ERROR_1("dbLoadoutExists: loading unsucessful %1", _ret);
};

_playerExists
