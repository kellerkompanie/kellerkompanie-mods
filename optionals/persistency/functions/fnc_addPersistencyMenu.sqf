#include "script_component.hpp"

params ["_object"];

//_object addAction [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}];
[_object,
    [
        // title
        ("<t color='#8B008B' size='2' align='center'>" + ("Save Loadout") + "</t>"),

        // script
        {[player, true, getPlayerUID player] call FUNC(savePlayerLoadout);},

        // arguments
        _object,

        // priority
        1.5,

        // showWindow,
        true,

        // hideOnUse
        true,

        // shortcut
        "",

        // condition
        "true",

        // radius
        5
    ]
] remoteExec ["addAction", 0, true];
