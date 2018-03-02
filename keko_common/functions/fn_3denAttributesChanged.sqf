//systemChat str _this;

_module = _this select 0;
_moduleName = str (_module get3DENAttribute "name");


_initModuleExists = false;
_gameMasterModuleExists = false;
_hc1Exists = false;
_hc2Exists = false;
_hc3Exists = false;
{ 
	_logicName = (_x get3DENAttribute "name") select 0;
	switch(_logicName) do {
		case "keko_3den_initModule": {
			_initModuleExists = true;
			break;
		};
		case "keko_3den_gameMaster": {
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


if !(_initModuleExists) then {
	_module set3DENAttribute ["Name", "keko_3den_initModule"];

	set3DENMissionAttributes [

		["Scenario", "Author", "Schwaggot"],
		["Scenario", "Title", "Kellerkompanie Template"],
	    ["Scenario", "LoadScreen", "\keko_common\pictures\intro.paa"],
	    ["Scenario", "OnLoadMission", "www.kellerkompanie.com"],
	    ["Scenario", "SaveBinarized", false],
	    
	    //["Multiplayer", "enabledebugconsole", 1],
	    ["Multiplayer", "Respawn", 3],
	    ["Multiplayer", "RespawnDelay", 10],
	    ["Multiplayer", "MinPlayers", 1],
	    ["Multiplayer", "MaxPlayers", (count playableUnits) + 2],
	    ["Multiplayer", "DisabledAI", true],
	    ["Multiplayer", "AIKills", false],
	    ["Multiplayer", "EnableTeamSwitch", false],
	    ["Multiplayer", "RespawnTemplates", ["Counter"]],

	    ["Multiplayer", "GameType", "COOP"]
	];
};


_modulePos = getPos _module;

if !(_gameMasterModuleExists) then {
	// create GameMaster/Zeus module for logged-in admin
	_gameMasterPos = [(_modulePos select 0) + 2, _modulePos select 1, _modulePos select 2];
	_gameMasterEntity = create3DENEntity ["Logic", "ModuleCurator_F", _gameMasterPos];
	_gameMasterEntity set3DENAttribute ["Name", "keko_3den_gameMaster"];
	set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Owner", "#adminLogged" ]];
	set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Addons", 3 ]];
	set3DENAttributes [[ [_gameMasterEntity], "ModuleCurator_F_Name", "Admin" ]];
};

// create modules for headless clients
if !(_hc1Exists) then {
	_hc1Pos = [(_modulePos select 0) + 3, _modulePos select 1, _modulePos select 2];
	_hc1Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc1Pos];
	_hc1Entity set3DENAttribute ["Name", "HC1"];
	_hc1Entity set3DENAttribute ["ControlSP", false];
	_hc1Entity set3DENAttribute ["ControlMP", true];
	_hc1Entity set3DENAttribute ["Description", "HC1"];
};

if !(_hc2Exists) then {
	_hc2Pos = [(_modulePos select 0) + 4, _modulePos select 1, _modulePos select 2];
	_hc2Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc2Pos];
	_hc2Entity set3DENAttribute ["Name", "HC2"];
	_hc2Entity set3DENAttribute ["ControlSP", false];
	_hc2Entity set3DENAttribute ["ControlMP", true];
	_hc2Entity set3DENAttribute ["Description", "HC2"];
};

if !(_hc3Exists) then {
	_hc3Pos = [(_modulePos select 0) + 5, _modulePos select 1, _modulePos select 2];
	_hc3Entity = create3DENEntity ["Logic", "HeadlessClient_F", _hc3Pos];
	_hc3Entity set3DENAttribute ["Name", "HC3"];
	_hc3Entity set3DENAttribute ["ControlSP", false];
	_hc3Entity set3DENAttribute ["ControlMP", true];
	_hc3Entity set3DENAttribute ["Description", "HC3"];
};


