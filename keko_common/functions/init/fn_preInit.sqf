// TODO initalize default variables
diag_log text "[KEKO] (common) running preInit";

if(isServer) then {
	diag_log text "[KEKO] (common) initializing default values for mission parameters";

	keko_var_loadoutOnSpawn = true;
	keko_var_faction = "kekoFactionNATO";
	keko_var_customLogistics = 1;
	keko_var_giveMap = true;
	keko_var_giveCompass = true;
	keko_var_giveGps = 4;
	keko_var_giveNvg = 0;
	keko_var_giveRadio = 1;
	keko_var_sideRelations = 0;

	publicVariable "keko_var_loadoutOnSpawn";
	publicVariable "keko_var_faction";
	publicVariable "keko_var_customLogistics";
	publicVariable "keko_var_giveMap";
	publicVariable "keko_var_giveCompass";
	publicVariable "keko_var_giveGps";
	publicVariable "keko_var_giveNvg";
	publicVariable "keko_var_giveRadio";
	publicVariable "keko_var_sideRelations";
};