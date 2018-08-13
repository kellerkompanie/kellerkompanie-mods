// Copyright (c) 2016 Seth Duda
// Original version by Duda https://github.com/sethduda/AdvancedTowing

	diag_log text "[KEKO] (advancedtowing) Advanced Towing Loading...";

if(isServer) then {
	// Prevent advanced towing from installing twice
	if(!isNil "keko_advancedtowing_init") exitWith {};
	keko_advancedtowing_TOW_INIT = true;
	publicVariable "keko_advancedtowing_init";
};

if(hasInterface) then {
	[] spawn {
		waitUntil {!isNil "keko_advancedtowing_init"};

		while {true} do {
			if(!isNull player && isPlayer player) then {
				if!( player getVariable ["keko_advancedtowing_towActionsLoaded",false] ) then {
					[] call keko_advancedtowing_fnc_addPlayerTowActions;
					player setVariable ["keko_advancedtowing_towActionsLoaded",true];
				};
			};
			missionNamespace setVariable ["keko_advancedtowing_nearbyTowVehicles", (call keko_advancedtowing_fnc_findNearbyTowVehicles)];
			sleep 2;
		};
	};
};

diag_log text "[KEKO] (advancedtowing) Advanced Towing Loaded";
