#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

enableSaving [false, false];

["ace_settingsInitialized", {
    call FUNC(checkPBOs)
}] call CBA_fnc_addEventHandler;

ADDON = true;
