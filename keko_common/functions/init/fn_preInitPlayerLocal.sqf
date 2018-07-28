if(isServer && hasInterface) then {
	// workaround for testing locally hosted missions where player is server
	_quickMaths = 2 + 2;
} else {
	if (!hasInterface || isServer) exitWith {};
};

diag_log text "[KEKO] (common) running preInitPlayerLocal";
