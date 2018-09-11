_logic = _this select 0;

diag_log text "[KEKO] (police) running modulePoliceSettings3den";

if(isServer) then {
	keko_police_var_shoutDistance = _logic getVariable "ShoutDistance";
	keko_police_var_defaultSurrenderChance = _logic getVariable "SurrenderChance";
	keko_police_var_higherSurrenderWounded = _logic getVariable "SurenderWounded";
	keko_police_var_defaultFleeingChance = _logic getVariable "FleeingChance";

	publicVariable "keko_police_var_shoutDistance";
	publicVariable "keko_police_var_defaultSurrenderChance";
	publicVariable "keko_police_var_higherSurrenderWounded";
	publicVariable "keko_police_var_defaultFleeingChance";

	diag_log text format["[KEKO] (police) initialized with %1m %2%3 %4 %5", keko_police_var_shoutDistance, keko_police_var_defaultSurrenderChance, "%", keko_police_var_higherSurrenderWounded, keko_police_var_defaultFleeingChance];
};