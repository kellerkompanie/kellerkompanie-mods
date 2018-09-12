#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[] spawn
{
    disableSerialization;
    waitUntil {uiSleep 1; !isNull(findDisplay 12)};
    ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", "_this call keko_shacktac_fnc_autoBrightnessOnDraw"];
};

"STGI_Update" call FUNC(canvasAdd);

if (!isDedicated) then
{
    player setVariable [GVAR(OwnerID), clientOwner, true];
};

[
    "STUI", "STUI", "STUI Options",
    {call FUNC(options), {false},
    [DIK_H, [true, false, true]]
] call CBA_fnc_addKeybind;
