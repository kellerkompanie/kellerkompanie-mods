#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(playersEnabled) == 0) exitWith{WARNING("savePlayerLoadout: persistency for players is disabled, exiting!"); false};

params [
    ["_playerUnit", nil],
    ["_forceSave", false]
];

if !(isPlayer _playerUnit) exitWith {
    WARNING("savePlayerLoadout: not a player, exiting!");
    false
};

if (_forceSave) then {
    INFO_1("savePlayerLoadout: performing force save on player %1", name _playerUnit);
};

private _hasReceivedDefaultLoadout = _playerUnit getVariable [QGVAR(hasReceivedLoadout), false];
private _hasDBLoadoutEntry = _playerUnit call FUNC(dbLoadoutExists);
private _hasReceivedDBLoadout = _playerUnit getVariable [QGVAR(loadoutLoaded), false];

if (!_forceSave && (!_hasReceivedDefaultLoadout)) exitWith {
    ERROR_1("player %1 was not fully initalized, not going to save to DB", name _playerUnit);
    false
};

if (!_forceSave && (_hasDBLoadoutEntry && !_hasReceivedDBLoadout)) exitWith {
    ERROR_1("player %1 has a DB loadout, which was not loaded yet, not going to save to DB", name _playerUnit);
    false
};

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

if (_playerUID find "HC" >= 0) exitWith {
    WARNING("savePlayerLoadout: HC detected, exiting!");
    false
};

private _loadout = getUnitLoadout _playerUnit;
private _medicClass = _playerUnit getVariable ["ace_medical_medicClass", 0];
private _engineerClass = _playerUnit getVariable ["ACE_isEngineer", 0];
private _rank = rank _playerUnit;
private _position = getPos _playerUnit;

TRACE_2("savePlayerLoadout", _playerUID, _playerName);

"extDB3" callExtension format [ "1:keko_persistency:setPlayerLoadout:%1:%2:%3:%4:%5:%6:%7:%8",
    GVAR(key),
    _playerUID,
    _playerName,
    _loadout,
    _medicClass,
    _engineerClass,
    _rank,
    _position];

if (GVAR(moneyEnabled)) then {
    _playerUnit call FUNC(saveMoney);
};

TRACE_1("savePlayerLoadout", _ret);

true
