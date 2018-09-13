#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

["WIN"] remoteExec [QEFUNC(logging,endMission), 2];
