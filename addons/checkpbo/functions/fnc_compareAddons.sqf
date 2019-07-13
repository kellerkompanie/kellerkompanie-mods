#include "script_component.hpp"

if !(isServer) exitWith {ERROR("comparing addons can only be executed on server")};

params ["_clientAddons", "_player"];

private _playerName = name _player;
private _serverAddons = call FUNC(determineAddons);

_serverAddons params ["_serverAddonNames", "_serverAddonVersions"];
_clientAddons params ["_clientAddonNames", "_clientAddonVersions"];

private _missingAddonsOnClient = _serverAddonNames - _clientAddonNames;
private _missingAddonsOnServer = _clientAddonNames - _serverAddonNames;

private _errorMessagesMissingAddonsOnClient = [];
if(count _missingAddonsOnClient > 0) then {
    _errorMessagesMissingAddonsOnClient pushBack (format [localize LSTRING(errorAddonsOnServer), _playerName, _missingAddonsOnClient]);
};

private _errorMessagesMissingAddonsOnServer = [];
if(count _missingAddonsOnServer > 0) then {
    _errorMessagesMissingAddonsOnServer pushBack (format [localize LSTRING(errorAddonsNotOnServer), _playerName, _missingAddonsOnClient]);
};

private _errorMessagesVersionMismatch = [];
if( ((count _missingAddonsOnClient) == 0) && ((count _missingAddonsOnServer) == 0) ) then {
    // there is no obvious difference in loaded addons, now check versions
    private _i = 0;
    for [{_i = 0}, {_i < (count _clientAddonVersions)}, {_i = _i + 1}] do    {
        private _serverAddonVersion = _serverAddonVersions select _i;
        private _clientAddonVersion = _clientAddonVersions select _i;

        if !(_serverAddonVersion isEqualTo _clientAddonVersion) then {
            private _serverAddonName = _serverAddonNames select _i;
            private _clientAddonName = _clientAddonNames select _i;
            _errorMessagesVersionMismatch pushBack (format [localize LSTRING(errorDifferentVersions), _serverAddonName, _serverAddonVersion, _playerName, _clientAddonName, _clientAddonVersion]);
        };
    };
};

if (count _errorMessagesMissingAddonsOnClient > 0 || count _errorMessagesMissingAddonsOnServer > 0 || count _errorMessagesVersionMismatch > 0) then {
    private _errorMessages = [localize LSTRING(errorMessage), "", localize LSTRING(errorMessageClipboard), ""];

    if(count _errorMessagesMissingAddonsOnClient > 0) then {
        _errorMessages pushBack (localize LSTRING(errorMessageAddonsOnServer));
        _errorMessages pushBack "";
    };
    if (count _errorMessagesMissingAddonsOnServer > 0) then {
        _errorMessages pushBack (localize LSTRING(errorMessageAddonsNotOnServer));
        _errorMessages pushBack "";
    };
    if (count _errorMessagesVersionMismatch > 0) then {
        _errorMessages pushBack (localize LSTRING(errorMessageDifferentVersions));
        _errorMessages pushBack "";
    };

    private _br = toString [13,10];
    private _allErrors = _errorMessages + _errorMessagesMissingAddonsOnClient + _errorMessagesMissingAddonsOnServer + _errorMessagesVersionMismatch;
    private _comprehensiveErrorMessage = (_allErrors joinString _br) + _br;

    if(GVAR(reaction) isEqualTo "KICK" || GVAR(reaction) isEqualTo "WARN") then {
        _comprehensiveErrorMessage remoteExec ["diag_log", _player];
        ["ace_clipboard", _comprehensiveErrorMessage] remoteExec ["callExtension", _player];
        ["ace_clipboard", "--COMPLETE--"] remoteExec ["callExtension", _player];

        private _errorMessage = parseText (_errorMessages joinString "<br/>");

        if(GVAR(reaction) isEqualTo "KICK") then {
            [localize LSTRING(errorTitle), _errorMessage, {findDisplay 46 closeDisplay 0}] remoteExec ["ace_common_fnc_errorMessage", _player];
        } else {
            [localize LSTRING(errorTitle), _errorMessage, {}] remoteExec ["ace_common_fnc_errorMessage", _player];
        }
    }
};
