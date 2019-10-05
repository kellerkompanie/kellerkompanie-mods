#include "script_component.hpp"

addMissionEventHandler ["EntityKilled", {
    _this call FUNC(onEntityKilled);
}];

if (GVAR(corpseMode) > 0) then {
    INFO("adding corpse PFH");
    GVAR(handleCorpsePFH) = [{INFO("running corpse PFH"); call FUNC(cleanCorpses);}, GVAR(corpseMode)] call CBA_fnc_addPerFrameHandler;
};

if (GVAR(wreckMode) > 0) then {
    INFO("adding wreck PFH");
    GVAR(handleWreckPFH) = [{INFO("running wrecks PFH"); call FUNC(cleanWrecks);}, GVAR(wreckMode)] call CBA_fnc_addPerFrameHandler;
};
