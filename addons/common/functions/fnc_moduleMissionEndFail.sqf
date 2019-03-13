#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for ending a mission with a failure.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleMissionEndFail
 *
 */

if (isServer) then {
    "FAIL" call EFUNC(logging,endMission);
};
