if(isServer) then {
	diag_log text "[KEKO] (unconscious) adding CBA EventHandler";
	["ace_unconscious", keko_unconcious_fnc_switchUnconscious] call CBA_fnc_addEventHandler;
};