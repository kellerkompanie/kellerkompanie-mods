#include "script_component.hpp"

[missionNamespace, "EntityKilled", {
    params ["_unit"];

    if (_unit isKindOf "CAManBase") then {
        _unit call FUNC(nvgRemove);
    };
}, nil] call CBA_fnc_addBISEventHandler;
