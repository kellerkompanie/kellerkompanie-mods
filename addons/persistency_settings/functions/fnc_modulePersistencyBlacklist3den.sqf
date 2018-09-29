#include "script_component.hpp"

private _logic = _this select 0;

INFO("running modulePersistencyBlacklist3den");

private _objects = synchronizedObjects _logic;

if ((count _objects) > 0) then {
    {
        TRACE_1("blacklisting object: %1", _x);
        _x setVariable [QGVAR(isBlacklisted), true, true];
    } forEach _objects;
} else {
  "ERROR: synchronize Persistency blacklist module to at least 1 object" remoteExec ["systemChat", 0];
};
