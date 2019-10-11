#include "script_component.hpp"

private _logic = _this select 0;

private _objects = synchronizedObjects _logic;

if ((count _objects) > 0) then {
    {
        _x setVariable [QEGVAR(persistency,isBlacklisted), true, true];
    } forEach _objects;
} else {
    "ERROR: synchronize Persistency blacklist module to at least 1 object" remoteExec ["systemChat", 0];
};
