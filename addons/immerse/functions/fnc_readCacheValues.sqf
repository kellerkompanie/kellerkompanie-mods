#include "script_component.hpp"
/*
 * Author: joko // Jonas
 * Read Value from config and save it in the cache Location and read and save the value if the value not exist
 * if config entry not exist return the Default Value
 *
 * Arguments:
 * 0: Config Path or Array with Config Path <Config, Array>
 * 1: Variable Name for Saving <String>
 * 2: Default Return <Any> (Default: "")
 *
 * Return Value:
 * Cached Value <Any>
 *
 * Example:
 * ["example"] call DS_sys_fnc_readCacheValue;
 */
params [["_config", configNull, [configNull, []]], ["_varName", "", [""]], ["_default", ""]];
// systemChat str ["InPut",_this];
private _var = GVAR(variableHandler) getVariable _varName;
if (isNil "_var") then {
    if (IS_ARRAY(_config)) then {
        private _path = configFile;
        {
            _path = _path >> _x;
        } count _config;
        _config = _path;
    };
    _var = switch (true) do {
        case (isNumber _config): {
            getNumber _config;
        };
        case (isText _config): {
            getText _config;
        };
        case (isArray _config): {
            getArray _config;
        };
        default {_default};
    };

    GVAR(variableHandler) setVariable [_varName, _var];
};

// systemChat str ["InPut",_var];
_var
