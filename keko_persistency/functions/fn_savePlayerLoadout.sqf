params ["_playerUnit", "_loadoutKey", "_playerUID", "_playerName"];

_loadout = getUnitLoadout _playerUnit;
_medicClass = _playerUnit getVariable ["ace_medical_medicClass", 0];
_engineerClass = _playerUnit getVariable ["ACE_isEngineer", 0];
_rank = rank _playerUnit;
_position = getPos _playerUnit;

_ret = "extDB3" callExtension format [ "0:keko_persistency:setPlayerLoadout:%1:%2:%3:%4:%5:%6:%7:%8", 
	_loadoutKey,
	_playerUID,
	_playerName,
	_loadout,
	_medicClass,
	_engineerClass,
	_rank,
	_position];

diag_log _ret;