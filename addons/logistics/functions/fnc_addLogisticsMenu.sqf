#include "script_component.hpp"

params ["_object"];

[_object,
    [
        // title
        ("<t color='#42DCF4' size='2' align='center'>" + ("Logistik") + "</t>"),

        // script
        {if ([player,GVAR(accessLevel)] call FUNC(hasAccess) ) then { createDialog QGVAR(menuDialog); } },

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
] remoteExec ["addAction", [0, -2] select isDedicated, true];

[_object] remoteExec [QFUNC(addLogisticsMenuAction), [0, -2] select isDedicated, true];
