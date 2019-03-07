#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    ["ace_captiveStatusChanged", { _this params ["_unconUnit"]; if (_unconUnit getVariable [QGVAR(isObserved), false]) exitWith {_this call FUNC(onSurrender); }; }] call CBA_fnc_addEventHandler;
    [QGVAR(interrogated), { _this params ["_unit"]; if (_unit getVariable [QGVAR(isObserved), false]) exitWith {_this call FUNC(onInterrogated); }; }] call CBA_fnc_addEventHandler;
};

ADDON = true;
