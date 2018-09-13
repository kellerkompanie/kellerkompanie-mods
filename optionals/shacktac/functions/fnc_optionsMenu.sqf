#include "script_component.hpp"

private _menus =
[
    [
        "Reset layout",
        {[QGVAR(Reset)] call CBA_fnc_localEvent}, // code to run
        "", // icon
        "Use if e.g. changed resolution", // tooltip
        [], // submenu
        DIK_R, // key
        true, // enabled
        true  // visible
    ]
];

// Get modules to populate the menu
[QGVAR(Options), _menus] call CBA_fnc_localEvent;

[
    ["main", "ShackTac UI Options", "popup"],
    _menus
]
