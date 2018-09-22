#include "script_component.hpp"

if !(keko_settings_persistency_enabled) exitWith{diag_log text "[KEKO] (persistency) loadPlayerLoadout: persistency disabled, exiting!"; false};
if(keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) loadPlayerLoadout: persistency key not set, exiting!"; false};
if !(keko_settings_persistency_playersEnabled) exitWith{diag_log text "[KEKO] (persistency) loadPlayerLoadout: persistency for players is disabled, exiting!"; false};

params ["_playerUnit"];

if !(isPlayer _playerUnit) exitWith{diag_log text "[KEKO] (persistency) loadPlayerLoadout: not a player, exiting!"; false};

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

if (_playerUID find "HC" >= 0) exitWith{diag_log text "[KEKO] (persistency) loadPlayerLoadout: not a player!"; false};

diag_log text format["[KEKO] (persistency) loadPlayerLoadout: _playerUID=%1 _playerName=%2 key=%3", _playerUID, _playerName, keko_settings_persistency_key];

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getPlayerLoadout:%1:%2", keko_settings_persistency_key, _playerUID]);

if ((_ret select 0) == 1) then {
	diag_log text format ["[KEKO] (persistency) loadPlayerLoadout: loading sucessful %1", _ret];

	// assume loading was sucess
	((_ret select 1) select 0) params [
		"_loadout",
		"_medicClass",
		"_engineerClass",
		"_rank",
		"_position"];

	diag_log text format ["[KEKO] (persistency) loadPlayerLoadout: _loadout=%1 _medicClass=%2 _engineerClass=%3 _rank=%4 _position=%5", _loadout, _medicClass, _engineerClass, _rank, _position];

	_playerUnit setUnitLoadout _loadout;
	_playerUnit setVariable ["ace_medical_medicClass", _medicClass, true];
	_playerUnit setVariable ["ACE_isEngineer", _engineerClass, true];
	_playerUnit setRank _rank;
	true
} else {
	diag_log text format ["[KEKO] (persistency) loadPlayerLoadout: loading unsucessful %1", _ret];
	false
};
