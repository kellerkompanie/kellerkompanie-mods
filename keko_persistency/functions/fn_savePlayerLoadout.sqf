if(keko_settings_persistency_enabled == 0) exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: persistency disabled, exiting!"; false};
if(keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: persistency key not set, exiting!"; false};

params ["_playerUnit"];

if !(isPlayer _playerUnit) exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: not a player, exiting!"; false};

_playerUID = getPlayerUID _playerUnit;
_playerName = name _playerUnit;

if (_playerUID find "HC" >= 0) exitWith{diag_log text "[KEKO] (persistency) savePlayerLoadout: HC detected, exiting!"; false};

_loadout = getUnitLoadout _playerUnit;
_medicClass = _playerUnit getVariable ["ace_medical_medicClass", 0];
_engineerClass = _playerUnit getVariable ["ACE_isEngineer", 0];
_rank = rank _playerUnit;
_position = getPos _playerUnit;

diag_log text format["[KEKO] (persistency) savePlayerLoadout _playerUID=%1 _playerName=%2", _playerUID, _playerName];

_ret = "extDB3" callExtension format [ "1:keko_persistency:setPlayerLoadout:%1:%2:%3:%4:%5:%6:%7:%8", 
	keko_settings_persistency_key,
	_playerUID,
	_playerName,
	_loadout,
	_medicClass,
	_engineerClass,
	_rank,
	_position];

diag_log text format["[KEKO] (persistency) savePlayerLoadout: %1", _ret];