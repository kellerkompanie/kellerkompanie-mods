#include "script_component.hpp"

INFO("clientRequestPermissionToFire");

[player, _this] remoteExec [QFUNC(serverRequestPermissionToFire), 2, false];
