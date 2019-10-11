#include "script_component.hpp"

params ["_unit", "_payload"];

[GVAR(JtacCanFireSalvo), GVAR(JtacReloadTimer), GVAR(EPDJtacAquisitionGlobalModifier), _payload] remoteExec [QFUNC(clientReceivePermissionToFire), _unit, false];
