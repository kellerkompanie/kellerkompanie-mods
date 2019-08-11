#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Changes 3den mission attributes based on input in the Kellerkompanie initialize
 * mission module, e.g., changing mission name and setting parameters. Also adds
 * HC entities and default admin curator entitiy if not already present.
 *
 * Arguments:
 * 0: Kellerkompanie initialize mission module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _this call keko_common_fnc_3denAttributesChanged
 *
 */

params ["_module"];

private _initModuleExists = false;
private _existingInitModule = objNull;
private _gameMasterModuleExists = false;
private _hc1Exists = false;
private _hc2Exists = false;
private _hc3Exists = false;

{
    private _logicName = (_x get3DENAttribute "name") select 0;
    //systemChat _logicName;
    switch(_logicName) do {
        case QGVAR(3den_initModule): {
            _initModuleExists = true;
            _existingInitModule = _x;
            break;
        };
        case QGVAR(3den_gameMaster): {
            _gameMasterModuleExists = true;
            break;
        };
        case "HC1": {
            _hc1Exists = true;
            break;
        };
        case "HC2": {
            _hc2Exists = true;
            break;
        };
        case "HC3": {
            _hc3Exists = true;
            break;
        };
    };
} forEach (all3DENEntities select 3);

if (_initModuleExists) then {
    if(_module != _existingInitModule) then {
        ERROR_MSG("There can be only one Init Module");
        delete3DENEntities _this;
        if(true) exitWith {};
    };
};

if !(_initModuleExists) then {
    set3DENMissionAttributes [
        ["Scenario", "SaveBinarized", false],

        ["Multiplayer", "Respawn", 3],
        ["Multiplayer", "RespawnDelay", 10],
        ["Multiplayer", "MinPlayers", 1],

        ["Multiplayer", "DisabledAI", true],
        ["Multiplayer", "AIKills", false],
        ["Multiplayer", "EnableTeamSwitch", false],
        ["Multiplayer", "RespawnTemplates", ["Counter"]],

        ["Multiplayer", "GameType", "COOP"]
    ];

    _module set3DENAttribute ["Name", QGVAR(3den_initModule)];
};

// update number of players + 3 for headless clients
set3DENMissionAttributes [ ["Multiplayer", "MaxPlayers", (count playableUnits) + 3] ];

// update scenario variables from module settings
private _missionTitle = _module getVariable "MissionTitle";
private _missionAuthor = _module getVariable "MissionAuthor";
private _missionPicture = _module getVariable "MissionPicture";
private _missionPictureSubtitle = _module getVariable "MissionPictureSubtitle";
private _sideRelations = _module getVariable "SideRelations";
private _garbageCollectionCorpses = _module getVariable ["GarbageCollectionCorpses", true];
private _gargabeCollectionWrecks = _module getVariable ["GarbageCollectionWrecks", true];

"Scenario" set3DENMissionAttribute ["Author", _missionAuthor];
"Scenario" set3DENMissionAttribute ["IntelBriefingName", _missionTitle];
"Scenario" set3DENMissionAttribute ["LoadScreen", _missionPicture];
"Scenario" set3DENMissionAttribute ["OnLoadMission", _missionPictureSubtitle];

switch(_sideRelations) do {
    case 0: {
        "Multiplayer" set3DENMissionAttribute ["IntelIndepAllegiance",[0,0]];
    };
    case 1: {
        "Multiplayer" set3DENMissionAttribute ["IntelIndepAllegiance",[1,0]];
    };
    case 2: {
        "Multiplayer" set3DENMissionAttribute ["IntelIndepAllegiance",[0,1]];
    };
    case 3: {
        "Multiplayer" set3DENMissionAttribute ["IntelIndepAllegiance",[1,1]];
    };
};



// set garbage collection by default
"Multiplayer" set3DENMissionAttribute ["minPlayerDistance", 50];

if (_garbageCollectionCorpses) then {
    "Multiplayer" set3DENMissionAttribute ["CorpseManagerMode", 1];
    "Multiplayer" set3DENMissionAttribute ["CorpseLimit", 20];
    "Multiplayer" set3DENMissionAttribute ["CorpseRemovalMinTime", 300];
    "Multiplayer" set3DENMissionAttribute ["CorpseRemovalMaxTime", 3600];
} else {
    "Multiplayer" set3DENMissionAttribute ["CorpseManagerMode", 0];
};

if (_gargabeCollectionWrecks) then {
    "Multiplayer" set3DENMissionAttribute ["WreckManagerMode", 1];
    "Multiplayer" set3DENMissionAttribute ["WreckLimit", 10];
    "Multiplayer" set3DENMissionAttribute ["WreckRemovalMinTime", 300];
    "Multiplayer" set3DENMissionAttribute ["WreckRemovalMaxTime", 36000];
} else {
    "Multiplayer" set3DENMissionAttribute ["WreckManagerMode", 0];
};



// create additional logics on first create

private _modulePos = getPos _module;

if !(_gameMasterModuleExists) then {
    // create GameMaster/Zeus module for logged-in admin
    private _gameMasterPos = [(_modulePos select 0) + 2, _modulePos select 1, _modulePos select 2];
    private _gameMasterEntity = create3DENEntity ["Logic", "ModuleCurator_F", _gameMasterPos];
    _gameMasterEntity set3DENAttribute ["Name", QGVAR(3den_gameMaster)];
    set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Owner", "#adminLogged" ]];
    set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Addons", 3 ]];
    set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Name", "Admin" ]];
};

// create modules for headless clients
if !(_hc1Exists) then {
    private _hc1Pos = [(_modulePos select 0) + 3, _modulePos select 1, _modulePos select 2];
    private _hc1Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc1Pos];
    _hc1Entity set3DENAttribute ["Name", "HC1"];
    _hc1Entity set3DENAttribute ["ControlSP", false];
    _hc1Entity set3DENAttribute ["ControlMP", true];
    _hc1Entity set3DENAttribute ["Description", "HC1"];
};

if !(_hc2Exists) then {
    private _hc2Pos = [(_modulePos select 0) + 4, _modulePos select 1, _modulePos select 2];
    private _hc2Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc2Pos];
    _hc2Entity set3DENAttribute ["Name", "HC2"];
    _hc2Entity set3DENAttribute ["ControlSP", false];
    _hc2Entity set3DENAttribute ["ControlMP", true];
    _hc2Entity set3DENAttribute ["Description", "HC2"];
};

if !(_hc3Exists) then {
    private _hc3Pos = [(_modulePos select 0) + 5, _modulePos select 1, _modulePos select 2];
    private _hc3Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc3Pos];
    _hc3Entity set3DENAttribute ["Name", "HC3"];
    _hc3Entity set3DENAttribute ["ControlSP", false];
    _hc3Entity set3DENAttribute ["ControlMP", true];
    _hc3Entity set3DENAttribute ["Description", "HC3"];
};
