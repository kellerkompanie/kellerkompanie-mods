#include "script_component.hpp"

private _loadedAddons = parsingNamespace getVariable [QGVAR(loadedAddons), []];
[_loadedAddons, player] remoteExec [QFUNC(compareAddons), 2];
