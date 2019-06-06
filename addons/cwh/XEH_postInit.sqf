#include "script_component.hpp"

if !(isDedicated) exitWith {
    if(GVAR(Enabled)) then {
        [] spawn {
            while { true } do {
                sleep GVAR(CheckTimeout);

                [] spawn FUNC(processNearHolders);
            };
        };
    };
};
