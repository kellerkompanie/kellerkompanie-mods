diag_log text "[KEKO] (common) running initMission";

if (isServer) then {
	[] spawn keko_common_fnc_initServer;
	
	if(isServer && hasInterface) then {
		//workaround for local testing of missions
		[] spawn keko_common_fnc_initPlayerLocal;
	} else {
		[] remoteExec ["keko_common_fnc_initPlayerLocal", -2, true];
	};
};