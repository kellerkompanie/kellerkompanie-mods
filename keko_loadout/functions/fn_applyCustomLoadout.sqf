params ["_role","_faction"];

diag_log text format["[KEKO] (loadout) applyCustomLoadout: %1", _role];

player enableSimulation false;

KK_fnc_fileExists = {
    private ["_ctrl", "_fileExists"];
    disableSerialization;
    _ctrl = findDisplay 0 ctrlCreate ["RscHTML", -1];
    _ctrl htmlLoad _this;
    _fileExists = ctrlHTMLLoaded _ctrl;
    ctrlDelete _ctrl;
    _fileExists
};

player setVariable ["ace_medical_medicClass", 0, true];
player setVariable ["ACE_isEngineer", 0, true];

if( _role isEqualTo "kekoDoctor" ) then {
	player setVariable ["ace_medical_medicClass", 2, true];
};	

if( _role isEqualTo "kekoMedic" ) then {
	player setVariable ["ace_medical_medicClass", 1, true];
};

if( _role isEqualTo "kekoEngineer" ) then {
	player setVariable ["ACE_isEngineer", 2, true];
};

if( _role isEqualTo "kekoEOD" ) then {
	player setVariable ["ACE_isEngineer", 2, true];
};

// TODO optimize load once at startup
_sqfFile = format ["custom_loadouts\%1.sqf", _role];

if(_faction isEqualTo "kekoCustom") then {
	//if(_sqfFile call KK_fnc_fileExists) then {
		_sqfString = preprocessFileLineNumbers _sqfFile;
		_sqfString = [_sqfString, "this;", "player;", 100] call keko_loadout_fnc_replaceString;
		_sqfString = [_sqfString, "this ", "player ", 100] call keko_loadout_fnc_replaceString;

		_code = compile _sqfString; 
		call _code;
	//} else {
	//	systemChat format["ERROR: loadout file %1 does not exist!", _sqfFile];
	//};
} else {
	if(_faction isEqualTo "kekoCustomACE") then {
		//if(_sqfFile call KK_fnc_fileExists) then {
			_sqfString = preprocessFileLineNumbers _sqfFile;
			_code = compile _sqfString; 
			_data = call _code;

			player setUnitLoadout _data;
		//} else {
		//	systemChat format["ERROR: loadout file %1 does not exist!", _sqfFile];
		//};
	};
};




call keko_loadout_fnc_addPresetItems;

player enableSimulation true;

if !(weaponLowered player) then {
	player action ["WeaponOnBack", player];
};

[player] spawn keko_loadout_fnc_setChannels;