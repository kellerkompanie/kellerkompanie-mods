#include "script_component.hpp"

if !(isServer) then {
    if(EGVAR(persistency,enabled) && EGVAR(persistency,playersEnabled) > 0) then {
        if !(EGVAR(loadout,loadoutOnSpawn)) then {
            if ( EGVAR(persistency,playersEnabled) == PERSISTENCY_ENABLED || (EGVAR(persistency,playersEnabled) == PERSISTENCY_SELECTIVE && player getVariable [QEGVAR(persistency,persistencyEnabled), false]) ) then {
                player remoteExec [QEFUNC(persistency,loadPlayerLoadout), 2];
            };
        };
    };
};

if (hasInterface) then {
    if (count EGVAR(persistency,key) > 32) then {
        systemChat "[KEKO] (Persistency) WARNING: persistency key has more than 32 characters!";
    };

    call FUNC(initializeUI);
};
