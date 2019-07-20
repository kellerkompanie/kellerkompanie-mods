// Original Version by [RFT] Bridge.J http://responseforcetempest.com
#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(enabled), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(knockPeopleUnconcious), localize LSTRING(knockPeopleUnconciousTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(canPunchHigherRank), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(canPunchHigherRank), localize LSTRING(canPunchHigherRankTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(enabledSnapNeck), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(snapNeck), localize LSTRING(snapNeckTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;


#include "\a3\editor_f\Data\Scripts\dikCodes.h";

["Kellerkompanie", "keko_punch", "Punch", {[player] call FUNC(punchTarget)}, {}, [DIK_HOME, [false,false,false]]] call cba_fnc_addKeybind;
["Kellerkompanie", "keko_kill", "Snap neck", {[player] call FUNC(killTarget)}, {}, [DIK_END, [false,false,false]]] call cba_fnc_addKeybind;

ADDON = true;
