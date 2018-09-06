_logic = _this select 0;

diag_log text "[KEKO] (persistency_settings) running modulePersistencyBlacklist3den";

_objects = synchronizedObjects _logic;

if ((count _objects) > 0) then {
    {
        diag_log text format ["[KEKO] (persistency_settings) blacklisting object: %1", _x];
        _x setVariable ["keko_persistency_isBlacklisted", true, true];
    } forEach _objects;
} else {
  "ERROR: synchronize Persistency blacklist module to at least 1 object" remoteExec ["systemChat", 0];
};
