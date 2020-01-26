#include "script_component.hpp"

if (GVAR(preventCorpseLooting)) then {
    addMissionEventHandler ["EntityKilled", {
        params ["_unit"];
        if (_unit isKindOf "CAManBase") then {
            [
                {
                    params ["_unit"];
                    if !(isNull _unit) then {
                        _unit call FUNC(onEntityKilled);
                    };
                },
                [_unit],
                5
            ] call CBA_fnc_waitAndExecute;
        };
    }];
};
