#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(playersEnabled) == 0) exitWith{WARNING("loadPlayerLoadout: persistency for players is disabled, exiting!"); false};

params ["_playerUnit"];

if !(isPlayer _playerUnit) exitWith {
	ERROR("loadPlayerLoadout: not a player, exiting!");
	false
};

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

if (_playerUID find "HC" >= 0) exitWith{
	ERROR("loadPlayerLoadout: not a player!");
	false
};

TRACE_3("loadPlayerLoadout", _playerUID, _playerName, GVAR(key));

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getPlayerLoadout:%1:%2", GVAR(key), _playerUID]);

if ((_ret select 0) != 1) exitWith {ERROR("loadPlayerLoadout: loading unsucessful", _ret); false};

TRACE_1("loadPlayerLoadout: loading sucessful %1", _ret);

// assume loading was sucess
((_ret select 1) select 0) params [
	"_loadout",
	"_medicClass",
	"_engineerClass",
	"_rank",
	"_position"];

TRACE_5("loadPlayerLoadout", _loadout, _medicClass, _engineerClass, _rank, _position);

_playerUnit setUnitLoadout _loadout;
_playerUnit setVariable ["ace_medical_medicClass", _medicClass, true];
_playerUnit setVariable ["ACE_isEngineer", _engineerClass, true];
_playerUnit setRank _rank;

if (GVAR(synchronizePlayerPosition)) then {
	_playerUnit setPos _position;
};

if (GVAR(moneyEnabled)) then {
	_playerUnit call FUNC(loadMoney);
};

true
