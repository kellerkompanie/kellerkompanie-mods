if(isServer && hasInterface) then {
	// workaround for testing locally hosted missions where player is server
	_quickMaths = 2 + 2;
} else {
	if (!hasInterface || isServer) exitWith {};	
}; 

diag_log text "[KEKO] (common) running initPlayerLocal";

waitUntil {player == player};
waitUntil {keko_var_initFinished};

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

//failsafe for missing curator interface:
_prefix = (str player) select [0,3];
if ( player isKindOf "keko_blufor_command" || player isKindOf "keko_opfor_command" || player isKindOf "keko_indfor_command" ) then {
	if ( isNull (getAssignedCuratorLogic player) ) then { [str player, 3] remoteExecCall ["keko_common_fnc_createZeus",2]; };
	if ( isNil "keko_evh_createZeusRespawn" ) then {
		keko_evh_createZeusRespawn = player addEventhandler ["RESPAWN",{
			if ( isNull (getAssignedCuratorLogic player) ) then { [str player, 3] remoteExecCall ["keko_common_fnc_createZeus",2]; };
		}];
	};
};

if (keko_var_loadoutOnSpawn) then {
	if( (player isKindOf "keko_blufor_soldier") || (player isKindOf "keko_opfor_soldier") || (player isKindOf "keko_indfor_soldier") ) then {
		_playerObjectClass = typeOf player;
		_loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _playerObjectClass >> "loadoutDummy");
		[player, keko_var_faction, _loadoutDummyClass] call keko_loadout_fnc_giveLoadout;
	};	
};