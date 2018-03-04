if (!isServer) exitWith {};

diag_log text "[KEKO] (common) running initServer";

_param_loadoutOnSpawn = ["param_loadoutOnSpawn", -1] call BIS_fnc_getParamValue;
_param_faction = ["param_faction", -1] call BIS_fnc_getParamValue;
_param_giveMap = ["param_giveMap", -1] call BIS_fnc_getParamValue;
_param_giveCompass = ["param_giveCompass", -1] call BIS_fnc_getParamValue;
_param_giveGps = ["param_giveGps", -1] call BIS_fnc_getParamValue;
_param_giveNvg = ["param_giveNvg", -1] call BIS_fnc_getParamValue;
_param_giveRadio = ["param_giveRadio", -1] call BIS_fnc_getParamValue;
_param_sideRelations = ["param_sideRelations", -1] call BIS_fnc_getParamValue;


if(_param_loadoutOnSpawn != -1) then {
	keko_var_loadoutOnSpawn = _param_loadoutOnSpawn;
	publicVariable "keko_var_loadoutOnSpawn";
};
if(_param_faction != -1) then {
	keko_var_faction = _param_faction;
	publicVariable "keko_var_faction";
};
if(_param_giveMap != -1) then {
	keko_var_giveMap = _param_giveMap;
	publicVariable "keko_var_giveMap";
};
if(_param_giveCompass != -1) then {
	keko_var_giveCompass = _param_giveCompass;
	publicVariable "keko_var_giveCompass";
};
if(_param_giveGps != -1) then {
	keko_var_giveGps = _param_giveGps;
	publicVariable "keko_var_giveGps";
};
if(_param_giveNvg != -1) then {
	keko_var_giveNvg = _param_giveNvg;
	publicVariable "keko_var_giveNvg";
};
if(_param_giveRadio != -1) then {
	keko_var_giveRadio = _param_giveRadio;
	publicVariable "keko_var_giveRadio";
};
if(_param_sideRelations != -1) then {
	keko_var_sideRelations = _param_sideRelations;
	publicVariable "keko_var_sideRelations";
};





keko_var_initFinished = true;
publicVariable "keko_var_initFinished";

//date:
/*if(missionNamespace getVariable ["keko_par_custom_time",0] == 0) then {
	setDate [2016, 8, missionNamespace getVariable ["keko_par_day",23], missionNamespace getVariable ["keko_par_hour",6] , missionNamespace getVariable ["keko_par_minute",0]];
};*/

//stops the blabbering of AI units and players
if ( isMultiplayer ) then {
	{_x setVariable ["BIS_noCoreConversations", true, true]} count allUnits;
};

//removes notification and bird of all curators:
{ _x setVariable ["birdType",""]; _x setVariable ["showNotification",false]; [_x, [-1, -2, 2]] call bis_fnc_setCuratorVisionModes; nil;} count allCurators;

//waituntil postinit is executed:
waitUntil {!isNil "BIS_fnc_init"};
waitUntil {missionNamespace getVariable "bis_fnc_init"};

//deletes empty groups:
keko_evh_emptyGroupsDeleter = addMissionEventHandler ["EntityKilled",{_grp = group (_this select 0);if ( count (units _grp) == 0 ) then { deleteGroup _grp };}];