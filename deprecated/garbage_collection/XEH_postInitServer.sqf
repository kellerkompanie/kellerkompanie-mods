#include "script_component.hpp"

addMissionEventHandler ["EntityKilled", {
    params ["_unit"];
    if !(isNull _unit) then {
        _unit call FUNC(onEntityKilled);
    };
}];

if (GVAR(corpseMode) > 0) then {
    GVAR(handleCorpsePFH) = [{call FUNC(cleanCorpses);}, GVAR(corpseMode)] call CBA_fnc_addPerFrameHandler;
};

if (GVAR(wreckMode) > 0) then {
    GVAR(handleWreckPFH) = [{call FUNC(cleanWrecks);}, GVAR(wreckMode)] call CBA_fnc_addPerFrameHandler;
};
