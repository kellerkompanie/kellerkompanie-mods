#include "script_component.hpp"

params ["_object", "_type", "_action", "_actionDuration", "_removeAction", "_title", "_content", "_removeObject", "_codeOnInteraction", "_openMap", "_shareWith"];

private _textures = [
    QPATHTOF(ui\background_misc.paa),
    QPATHTOF(ui\background_file.paa),
    QPATHTOF(ui\background_file_secret.paa),
    QPATHTOF(ui\background_documents.paa),
    QPATHTOF(ui\background_map.paa),
    QPATHTOF(ui\background_files_secret.paa),
    QPATHTOF(ui\background_laptop.paa),
    QPATHTOF(ui\background_money.paa),
    QPATHTOF(ui\background_notepad.paa),
    QPATHTOF(ui\background_phone.paa),
    QPATHTOF(ui\background_phone_old.paa),
    QPATHTOF(ui\background_tablet.paa),
    QPATHTOF(ui\background_rugged_tablet.paa),
    QPATHTOF(ui\background_wallet.paa),
    QPATHTOF(ui\background_chinese_cockpit.paa),
    QPATHTOF(ui\background_chinese_file.paa),
    QPATHTOF(ui\background_notes.paa)
];
private _typeTexture = _textures select _type;

_content = "<t align='left' font='EtelkaMonospaceProBold'>" + _content + "</t>";

[
    // Object the action is attached to
    _object,

     // Title of the action
    _action,

    // Idle icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",

     // Progress icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",

    // Condition for the action to be shown
    "_this distance _target < 2",

    // Condition for the action to progress
    nil,

    // Code executed when action starts
    {},

    // Code executed on every progress tick
    {
        private _progressTick = _this select 4;
        if (_progressTick % 2 == 0) exitwith {};
        playsound3d [((getarray (configfile >> "CfgSounds" >> "Orange_Action_Wheel" >> "sound")) param [0,""]) + ".wss",player,false,getposasl player,1,0.9 + 0.2 * _progressTick / 24];
    },

    // Code executed on completion
    {
        params ["_object", "", "_actionId", "_arguments"];
        _arguments params ["_typeTexture", "_title", "_content", "_removeObject", "_removeAction", "_codeOnInteraction", "_openMap", "_shareWith"];

        private _texture = _typeTexture;
        private _text = _content;
        private _sound = selectrandom ["Orange_Leaflet_Investigate_01","Orange_Leaflet_Investigate_02","Orange_Leaflet_Investigate_03"];
        private _textureRatio = -1;

        disableserialization;
        private _data = [_texture, _text, _sound, _textureRatio];
        missionNamespace setvariable ["RscDisplayRead_data", _data];
        ([] call bis_fnc_displayMission) createdisplay "RscDisplayRead";

        // wait for display to close
        waitUntil {sleep 0.1; isNull (findDisplay 2035)};

        // here code after close
        if (count _codeOnInteraction > 0) then {
            [_object, _codeOnInteraction] spawn {
                params ["_object", "_codeOnInteraction"];
                call compile _codeOnInteraction;
            };
        };

        switch (_shareWith) do {
            case 1: {
                // share with group
                {
                    [_title, _content] remoteExec [QFUNC(addIntelBriefingEntry), _x];
                } forEach (units (group player));
            };
            case 2: {
                // share with side
                private _allHCs = entities "HeadlessClient_F";
                private _allHumans = allPlayers - _allHCs;

                {
                    if ((side _x) == (side player)) then
                    {
                        [_title, _content] remoteExec [QFUNC(addIntelBriefingEntry), _x];
                    };
                } forEach _allHumans;
            };
            case 3: {
                // share with all
                private _allHCs = entities "HeadlessClient_F";
                private _allHumans = allPlayers - _allHCs;

                {
                    [_title, _content] remoteExec [QFUNC(addIntelBriefingEntry), _x];
                } forEach _allHumans;
            };
            default {
                // only on player who interacted with intel
                [_title, _content] call FUNC(addIntelBriefingEntry);
            };
        };

        if (_removeObject) then {deleteVehicle _object};
        if (_removeAction) then {[ _object, _actionId ] remoteExec ["BIS_fnc_holdActionRemove", [0, -2] select isDedicated];};

        if(_openMap) then {
            openMap true;
        };
    },

    // Code executed on interrupted
    {},

    // Arguments passed to the scripts
    [_typeTexture, _title, _content, _removeObject, _removeAction, _codeOnInteraction, _openMap, _shareWith],

    // Action duration
    _actionDuration,

    // Priority
    nil,

    // Remove on completion
    _removeAction
] remoteExec ["BIS_fnc_holdActionAdd", [0, -2] select isDedicated, true];
