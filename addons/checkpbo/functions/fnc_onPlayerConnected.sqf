#include "script_component.hpp"

//INFO("onPlayerConnected");

private _loadedAddons = parsingNamespace getVariable [QGVAR(loadedAddons), []];

//TRACE_1("fnc_onPlayerConnected", _loadedAddons);

[_loadedAddons, name player] remoteExec [QFUNC(compareAddons), 2];

//INFO("onPlayerConnected finished");
