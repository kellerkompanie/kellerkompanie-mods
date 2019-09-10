#include "script_component.hpp"

if (GVAR(preventCorpseLooting)) then {
    addMissionEventHandler ["EntityKilled", {
        params ["_unit"];

        if (_unit isKindOf "CAManBase") then {
            [
                {
                    (_this select 0) call FUNC(onEntityKilled)
                },
                [_this],
                5
            ] call CBA_fnc_waitAndExecute;
        };
    }];
};
