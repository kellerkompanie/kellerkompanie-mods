#include "script_component.hpp"

if !(isServer) exitWith {ERROR("comparing addons can only be executed on server")};

params ["_clientAddons", "_player"];

private _playerName = name _player;
private _serverAddons = call FUNC(determineAddons);

_serverAddons params ["_serverAddonNames", "_serverAddonVersions"];
_clientAddons params ["_clientAddonNames", "_clientAddonVersions"];

private _missingAddonsOnClient = _serverAddonNames - _clientAddonNames;
private _missingAddonsOnServer = _clientAddonNames - _serverAddonNames;

private _errorMessages = [];

if(count _missingAddonsOnClient > 0) then {
    _errorMessages pushBack (format [localize LSTRING(errorAddonsOnServer), _playerName, _missingAddonsOnClient]);
};

if(count _missingAddonsOnServer > 0) then {
    _errorMessages pushBack (format [localize LSTRING(errorAddonsNotOnServer), _playerName, _missingAddonsOnClient]);
};

if( ((count _missingAddonsOnClient) == 0) && ((count _missingAddonsOnServer) == 0) ) then {
    // there is no obvious difference in loaded addons, now check versions
    private _i = 0;
    for [{_i = 0}, {_i < (count _clientAddonVersions)}, {_i = _i + 1}] do    {
        private _serverAddonVersion = _serverAddonVersions select _i;
        private _clientAddonVersion = _clientAddonVersions select _i;

        if !(_serverAddonVersion isEqualTo _clientAddonVersion) then {
            private _serverAddonName = _serverAddonNames select _i;
            private _clientAddonName = _clientAddonNames select _i;
            _errorMessages pushBack (format [localize LSTRING(errorDifferentVersions), _serverAddonName, _serverAddonVersion, _playerName, _clientAddonName, _clientAddonVersion]);
        };
    };
};

if (count _errorMessages > 0) then {
    _errorMessages = ["<t color='#ff0000' align='center'>You have to fix your addon errors before you can continue playing on this server</t>", "", "<t align='center'>Info: This message is also copied to your clipboard</t>", ""] + _errorMessages;
    private _errorMessage = parseText (_errorMessages joinString "<br/>");
    private _br = toString [13,10];
    (str (_errorMessages joinString _br)) remoteExec ["copyToClipboard", _player];
    ["Addon Erros Detected", _errorMessage, {findDisplay 46 closeDisplay 0}] remoteExec ["ace_common_fnc_errorMessage", _player];
};
