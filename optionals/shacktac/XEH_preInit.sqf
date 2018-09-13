#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["keko_settings_shacktac", "LIST", ["ShackTac", "Enable/Disable ShackTac"], "STUI Settings", [[1,0], ["Enabled","Disabled"], 0]] call cba_settings_fnc_init;

#include "cbaSettings.sqf"

GVAR(Debug) = (productVersion select 4) == "Diag" || {profileNamespace getVariable [QGVAR(Debug), false]};

if (isNil QGVAR(Canvas_Funcs)) then
{
    GVAR(Canvas_Funcs) = [];
};

// These numbers were chosen based on Nou's CCIP Canvas, STHUD and further testing
#define Canvas_ConstZoom 0.0001
#define Canvas_ConstCentre [25, 26, 0]

GVAR(Canvas_Profile) = false;
GVAR(Canvas_ProfileData) = [];

GVAR(BlankDialog) =
{
    createDialog QGVAR(BlankDialog);
    findDisplay 999;
};

if (isNil QGVAR(Occlusion)) then {GVAR(Occlusion) = true};

#include "fontmetrics.sqf"

GVAR(ALUT) =
[
     "MAIN"
    ,"RED"
    ,"GREEN"
    ,"BLUE"
    ,"YELLOW"
];

[] call FUNC(stgi);

[] call FUNC(nametagsInit);

QFUNC(stamina) call FUNC(canvasAdd);

[] call FUNC(sthud);

ADDON = true;
