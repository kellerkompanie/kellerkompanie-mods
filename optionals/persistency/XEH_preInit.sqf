#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if !(GVAR(enabled)) exitWith{WARNING("preInit: persistency disabled, exiting!"); false};
if (GVAR(key) == "") exitWith{WARNING("preInit: persistency key not set, exiting!"); false};

addMissionEventHandler ["HandleDisconnect",
{
    params ["_unit", "", "_uid", "_name"];

    if (_name == "__SERVER__" || _name in ["HC1","HC2","HC3"]) exitWith {false};

    [_unit, true, _uid] call FUNC(savePlayerLoadout);
    false
}];

if (GVAR(loadPlayersOnStart)) then {
    [QEGVAR(loadout,onLoadoutFinished), {
        params ["_player"];
        _player call FUNC(loadPlayerLoadout);
        _player setVariable [QGVAR(hasReceivedLoadout), true, true];
    }] call CBA_fnc_addEventHandler;
};

ADDON = true;
