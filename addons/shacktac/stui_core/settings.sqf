#include "\a3\editor_f\Data\Scripts\dikCodes.h"

STUI_Options_Pre =
{
    closeDialog 0;
    "core\settings.sqf" call STUI_Load;
    "grouphud\settings.sqf" call STUI_Load;
    call STUI_Options;
};

STUI_Options =
{
    [player, ["_this call STUI_Options_Menu"]] call CBA_ui_fnc_menu;
    true;
};

STUI_Options_Menu =
{
    private _menus =
    [
        [
            "Reset layout",
            {["STUI_Reset"] call CBA_fnc_localEvent}, // code to run
            "", // icon
            "Use if e.g. changed resolution", // tooltip
            [], // submenu
            DIK_R, // key
            true, // enabled
            true  // visible
        ]
    ];

    // Get modules to populate the menu
    ["STUI_Options", _menus] call CBA_fnc_localEvent;

    [
        ["main", "ShackTac UI Options", "popup"],
        _menus
    ]
};

if (STUI_Debug) then
{
    STUI_PostInits pushBack
    {
        [
            "STUI", "STUI", "STUI Options",
            {call STUI_Options_Pre}, {false},
            [DIK_H, [true, false, true]]
        ] call CBA_fnc_addKeybind;
    };
}
else
{
    STUI_PostInits pushBack
    {
        [
            "STUI", "STUI", "STUI Options",
            {call STUI_Options}, {false},
            [DIK_H, [true, false, true]]
        ] call CBA_fnc_addKeybind;
    };
};
