#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

// FIXME replace with actual markers
["p1","p2"] remoteExec [QFUNC(tornado), 2];
