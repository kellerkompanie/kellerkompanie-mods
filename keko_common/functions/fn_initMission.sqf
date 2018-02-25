//call compilefinal preprocessFileLineNumbers "scripts\oo_hashmap.sqf";

if (isServer) then {
	[] spawn keko_common_fnc_initServer;
};
if (hasInterface) then {
	[] spawn keko_common_fnc_initPlayerLocal;
};
[] spawn keko_common_fnc_init;