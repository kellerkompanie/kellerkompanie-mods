#include "script_component.hpp"

params [
    ["_object", objNull, [objNull]],
    ["_faction", "DEFAULT", [""]]
];

if(_faction isEqualTo "DEFAULT") then {
    _faction = GVAR(loadoutFaction);
};

[_object,
    [
        // title
        ("<t color='#008800' size='2' align='center'>" + ("Loadout") + "</t>"),

        // script
        {
            params ["_target", "_caller", "", "_arguments"];
            _arguments params ["_faction"];

            [_caller, _faction, _target] call FUNC(openLoadoutMenu);
        },

        // arguments
        [_faction],

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
