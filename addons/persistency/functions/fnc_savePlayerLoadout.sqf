#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("savePlayerLoadout: persistency disabled, exiting!"); false};
if(EGVAR(persistency_settings,key) == "") exitWith{WARNING("savePlayerLoadout: persistency key not set, exiting!"); false};
if !(EGVAR(persistency_settings,playersEnabled)) exitWith{WARNING("savePlayerLoadout: persistency for players is disabled, exiting!"); false};

params ["_playerUnit"];

if !(isPlayer _playerUnit) exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: not a player, exiting!"; false};

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

if (_playerUID find "HC" >= 0) exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: HC detected, exiting!"; false};

private _loadout = getUnitLoadout _playerUnit;
private _medicClass = _playerUnit getVariable ["ace_medical_medicClass", 0];
private _engineerClass = _playerUnit getVariable ["ACE_isEngineer", 0];
private _rank = rank _playerUnit;
private _position = getPos _playerUnit;

diag_log text format["[KEKO] (persistency) savePlayerLoadout _playerUID=%1 _playerName=%2", _playerUID, _playerName];

private _ret = "extDB3" callExtension format [ "1:keko_persistency:setPlayerLoadout:%1:%2:%3:%4:%5:%6:%7:%8",
	EGVAR(persistency_settings,key),
	_playerUID,
	_playerName,
	_loadout,
	_medicClass,
	_engineerClass,
	_rank,
	_position];

diag_log text format["[KEKO] (persistency) savePlayerLoadout: %1", _ret];
