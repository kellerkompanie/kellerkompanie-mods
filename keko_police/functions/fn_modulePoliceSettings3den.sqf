_logic = _this select 0;

diag_log text "[KEKO] (police) running modulePoliceSettings3den";

if(isServer) then {
	keko_police_var_shoutDistance = _logic getVariable "ShoutDistance";
	keko_police_var_defaultSurrenderChance = _logic getVariable "SurrenderChance";
	keko_police_var_higherSurrenderWounded = _logic getVariable "SurenderWounded";

	publicVariable "keko_police_var_shoutDistance";
	publicVariable "keko_police_var_defaultSurrenderChance";
	publicVariable "keko_police_var_higherSurrenderWounded";

	diag_log text format["[KEKO] (police) initialized with %1m %2%3 %4", keko_police_var_shoutDistance, keko_police_var_defaultSurrenderChance, "%", keko_police_var_higherSurrenderWounded];
};