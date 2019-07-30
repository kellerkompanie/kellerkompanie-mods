#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllCrates:%1", GVAR(key)]);

private _existingVariables = allVariables missionNamespace;
if ((_ret select 0) == 1) then {
    INFO("generateNewObjectVariable: loading from db sucessful");

    {
        private _objectVariable = _x select 0;
        _existingVariables pushBack _objectVariable;
    } forEach (_ret select 1);
} else {
    ERROR("generateNewObjectVariable: loading unsucessful %1", _ret);
};

private _objectVariable = format ["keko_persistency_%1", 0];
private _counter = 1;

while {_objectVariable in _existingVariables} do {
    _objectVariable = format ["keko_persistency_%1", _counter];
    _counter = _counter + 1;
};

_objectVariable
