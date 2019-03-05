#include "script_component.hpp"

if (isServer) then {
    "FAIL" call EFUNC(logging,endMission);
};
