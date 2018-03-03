if (!hasInterface) exitWith {};

//parameter variables are initialized, if player is not hosting:
if (!isServer) then {
	//call keko_fnc_parVariables;
	//call keko_fnc_loadoutVariables;
	//call keko_fnc_tfarSettings;
};

diag_log "running keko_common_fnc_initPlayerLocal";

//waitUntil-player is initialized:
//waitUntil {player == player && !isNil "keko_params_defined"};
waitUntil {player == player};

//prevents the player units from blabbering on their radios
if (isMultiplayer) then {
	player setVariable ["BIS_noCoreConversations", true];
	enableRadio false;
};

//waituntil postinit is executed:
waitUntil {!isNil "BIS_fnc_init"};
waitUntil {missionNamespace getVariable "bis_fnc_init"};

waitUntil {time > 0};

sleep 1;
//loadouts are placed on the units on spawn
/*if(missionNamespace getVariable ["keko_par_pre_loadout",1] == 1) then {
	[player, (str player) select [0,3], false] call keko_fnc_giveLoadout;
};*/

//failsafe for missing curator interface:
_prefix = (str player) select [0,3];
if ( toUpper (_prefix) == "CMD" ) then {
	if ( isNull (getAssignedCuratorLogic player) ) then { [str player, 3] remoteExecCall ["keko_common_fnc_createZeus",2]; };
	if ( isNil "keko_evh_createZeusRespawn" ) then {
		keko_evh_createZeusRespawn = player addEventhandler ["RESPAWN",{
			if ( isNull (getAssignedCuratorLogic player) ) then { [str player, 3] remoteExecCall ["keko_common_fnc_createZeus",2]; };
		}];
	};
};

/*_param_undercover_faction = "param_undercover_faction" call BIS_fnc_getParamValue;

if(_param_undercover_faction > 0) then {
	_player_side = 0;

	switch ( side (group player) ) do {
		case west: { _player_side = 1; };
		case independent: { _player_side = 2; };
		case east: { _player_side = 3; };		
		default {};
	};

	if(_player_side == _param_undercover_faction) then {
		player setVariable ["isSneaky", true, true];
		[player] execVM "INC_undercover\Scripts\initUCR.sqf";
	};
};*/

if (keko_var_loadoutOnSpawn) then {
	if( (player isKindOf "keko_blufor_soldier") || (player isKindOf "keko_opfor_soldier") || (player isKindOf "keko_indfor_soldier") ) then {
		_playerObjectClass = typeOf player;
		_loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _playerObjectClass >> "loadoutDummy");
		[player, keko_var_faction, _loadoutDummyClass] call keko_loadout_fnc_giveLoadout;
	};	
};