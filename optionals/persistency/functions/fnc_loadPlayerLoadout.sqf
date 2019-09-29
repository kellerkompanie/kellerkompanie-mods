#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(playersEnabled) == 0) exitWith{WARNING("loadPlayerLoadout: persistency for players is disabled, exiting!"); false};

params ["_playerUnit"];

private _playerUID = getPlayerUID _playerUnit;
if (_playerUID find "HC" >= 0) exitWith {
    INFO("loadPlayerLoadout exiting beacuse playerUID contains 'HC'");
    false
};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getPlayerLoadout:%1:%2", GVAR(key), _playerUID]);

if ((_ret select 0) != 1) exitWith {
    ERROR("loadPlayerLoadout: loading unsucessful", _ret);
    false
};

INFO_1("loadPlayerLoadout: loading sucessful %1", _ret);

// assume loading was sucess
((_ret select 1) select 0) params [
    "_loadout",
    "_medicClass",
    "_engineerClass",
    "_rank",
    "_position"];

_playerUnit setUnitLoadout _loadout;
_playerUnit setVariable ["ace_medical_medicClass", _medicClass, true];
_playerUnit setVariable ["ACE_isEngineer", _engineerClass, true];
_playerUnit setRank _rank;

if (GVAR(synchronizePlayerPosition)) then {
    [{
        params ["_playerUnit", "_position"];
        _playerUnit setPos _position;
    }, [_playerUnit, _position], 3] call CBA_fnc_waitAndExecute;
};

if (GVAR(moneyEnabled)) then {
    _playerUnit call FUNC(loadMoney);
};

_playerUnit setVariable [QGVAR(loadoutLoaded), true, true];

[QGVAR(onLoadoutLoaded), [_playerUnit]] call CBA_fnc_localEvent;
[QGVAR(onLoadoutLoaded), [_playerUnit]] call CBA_fnc_serverEvent;

true
