#include "script_component.hpp"

INFO("compareAddons");

params ["_clientAddons", "_playerName"];

INFO_1("compareAddons _playerName", _playerName);
INFO_1("compareAddons _clientAddons", _clientAddons);

diag_log text format ["[KEKO] (checkpbo) _clientAddons = %1", _clientAddons];

private _serverAddons = parsingNamespace getVariable [QGVAR(loadedAddons), []];
diag_log text format ["[KEKO] (checkpbo) _serverAddons = %1", _serverAddons];
_serverAddons params ["_serverAddonNames", "_serverAddonVersions"];
_clientAddons params ["_clientAddonNames", "_clientAddonVersions"];

private _missingAddonsOnClient = _serverAddonNames - _clientAddonNames;
private _missingAddonsOnServer = _clientAddonNames - _serverAddonNames;

INFO_1("compareAddons _missingAddonsOnClient", _missingAddonsOnClient);
INFO_1("compareAddons _missingAddonsOnServer", _missingAddonsOnServer);

if(count _missingAddonsOnClient > 0) then {
	INFO("compareAddons error count _missingAddonsOnClient > 0");
	systemChat format ["FEHLER: Folgende Addons laufen auf dem Server, aber nicht bei %1: %2", _playerName, _missingAddonsOnClient];
};

INFO("compareAddons 1");

if(count _missingAddonsOnServer > 0) then {
	INFO("compareAddons error count _missingAddonsOnServer > 0");
	systemChat format ["FEHLER: Folgende Addons laufen bei %1, aber nicht auf dem Server: %2", _playerName, _missingAddonsOnClient];
};

INFO("compareAddons 2");

if( ((count _missingAddonsOnClient) == 0) && ((count _missingAddonsOnServer) == 0) ) then {
	// there is no obvious difference in loaded addons, now check versions
	INFO("compareAddons error ((count _missingAddonsOnClient) == 0) && ((count _missingAddonsOnServer) == 0)");
	private _i = 0;
	for [{_i = 0}, {_i < (count _clientAddonVersions)}, {_i = _i + 1}] do	{
	    private _serverAddonVersion = _serverAddonVersions select _i;
		private _clientAddonVersion = _clientAddonVersions select _i;

		if !(_serverAddonVersion isEqualTo _clientAddonVersion) then {
			private _serverAddonName = _serverAddonNames select _i;
			private _clientAddonName = _clientAddonNames select _i;
			systemChat format ["FEHLER: Unterschiedliche Versionen - Server: [%1, %2] | %3 [%4, %5]", _serverAddonName, _serverAddonVersion, _playerName, _clientAddonName, _clientAddonVersion];
		};
	};
};

INFO("compareAddons finish");
