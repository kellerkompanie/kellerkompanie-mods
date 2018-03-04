_logic = _this select 0;

diag_log text "[KEKO] (common) running moduleInitMission3den";

if(isServer) then {
	keko_var_loadoutOnSpawn = _logic getVariable "loadoutOnSpawn";
	keko_var_faction = _logic getVariable "faction";
	keko_var_giveMap = _logic getVariable "giveMap";
	keko_var_giveCompass = _logic getVariable "giveCompass";
	keko_var_giveGps = _logic getVariable "giveGps";
	keko_var_giveNvg = _logic getVariable "giveNvg";
	keko_var_giveRadio = _logic getVariable "giveRadio";
	keko_var_sideRelations = _logic getVariable "sideRelations";

	publicVariable "keko_var_loadoutOnSpawn";
	publicVariable "keko_var_faction";
	publicVariable "keko_var_giveMap";
	publicVariable "keko_var_giveCompass";
	publicVariable "keko_var_giveGps";
	publicVariable "keko_var_giveNvg";
	publicVariable "keko_var_giveRadio";
	publicVariable "keko_var_sideRelations";
};

[] call keko_common_fnc_initMission;