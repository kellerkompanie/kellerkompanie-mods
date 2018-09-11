#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Kellerkompanie Police","keko_police_shout_key", "Shout", {_this call keko_police_fnc_surrenderUnits}, "", [DIK_F, [true, false, false]]] call CBA_fnc_addKeybind;
["Kellerkompanie Police","keko_police_handcuff_key", "Handcuff", {_this call keko_police_fnc_handcuffUnit}, "", [DIK_H, [true, false, false]]] call CBA_fnc_addKeybind;

["ace_captiveStatusChanged", keko_police_fnc_captiveStatusChanged] call CBA_fnc_addEventHandler;

ADDON = true;