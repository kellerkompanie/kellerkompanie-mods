#include "script_component.hpp"

params ["_unit", "_fireMission", "_reloadDelayParam"];

private _reloadDelay = _reloadDelayParam * GVAR(EPDJtacCoolDownGlobalModifier);

if (GVAR(JtacCanFireSalvo)) then {
    GVAR(JtacCanFireSalvo) = false;
    GVAR(JtacReloadTimer) = _reloadDelay;
    sleep (5 + (random 15));
     call compile _fireMission;
    0 = [] spawn {
        if(!GVAR(EPDJtacDebug)) then {
            while { GVAR(JtacReloadTimer) > 0 } do {
                GVAR(JtacReloadTimer) = GVAR(JtacReloadTimer) - 1;
                sleep 1;
            };
        };
        GVAR(JtacCanFireSalvo) = true;
    };
} else {
    GVAR(JtacReloadTimer) remoteExec [QFUNC(clientAnotherJTACfired), _unit, false];
};
