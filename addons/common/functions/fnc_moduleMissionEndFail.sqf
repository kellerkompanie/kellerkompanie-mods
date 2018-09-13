#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

["FAIL"] remoteExec [QEFUNC(logging,endMission), 2];
