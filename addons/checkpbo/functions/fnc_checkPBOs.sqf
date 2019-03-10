/*
 * Based on ACE3s checkPBOs
 * Original Author: commy2
 * Used to execute the checkPBOs module without placing the module. Don't use this together with the module.
 * Checks PBO versions and compares to the one running on server.
 */
#include "script_component.hpp"

private _whitelist = ace_common_checkPBOsWhitelist;

INFO_1("_whitelist = %1", _whitelist);

//lowercase and convert whiteList String into array of strings:
_whitelist = toLower _whitelist;
_whitelist = _whitelist splitString "[,""']";
//TRACE_1("Array",_whitelist);

keko_Version_Whitelist = _whitelist;

if (!isServer) then {
    [{
        if (isNil "keko_Version_ClientErrors") exitWith {};

        keko_Version_ClientErrors params ["_missingAddon", "_missingAddonServer", "_oldVersionClient", "_oldVersionServer"];

        (_this select 0) params ["_whitelist"];

        // Display error message.
        if (_missingAddon || {_missingAddonServer} || {_oldVersionClient} || {_oldVersionServer}) then {
            private _text = "[keko] Version mismatch:<br/><br/>";
            private _error = format ["keko version mismatch: %1: ", profileName];

            if (_missingAddon) then {
                _text = _text + "Detected missing addon on client<br/>";
                _error = _error + "Missing file(s); ";
            };
            if (_missingAddonServer) then {
                _text = _text + "Detected missing addon on server<br/>";
                _error = _error + "Additional file(s); ";
            };
            if (_oldVersionClient) then {
                _text = _text + "Detected old client version<br/>";
                _error = _error + "Older version; ";
            };
            if (_oldVersionServer) then {
                _text = _text + "Detected old server version<br/>";
                _error = _error + "Newer version; ";
            };

            //[QGVAR(systemChatGlobal), _error] call CBA_fnc_globalEvent;

            ERROR(_error);

            [{alive player}, {
                params ["_text"];
                TRACE_2("Player is alive, showing msg and exiting",time,_text);
                _text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
                ["[KEKO] ERROR", _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
            }, [_text]] call CBA_fnc_waitUntilAndExecute;

        };

        [_this select 1] call CBA_fnc_removePerFrameHandler;
    }, 1, [_whitelist]] call CBA_fnc_addPerFrameHandler;
};

0 spawn COMPILE_FILE(scripts\checkVersionNumber); // @todo
