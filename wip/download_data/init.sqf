client_fnc_downloadData = compileFinal preprocessFileLineNumbers "fn_downloadData.sqf";

waitUntil {!isNull player && player == player};
waitUntil {!isNull (findDisplay 46)};

("layer_rsc_downloadingData" call BIS_fnc_rscLayer) cutRsc ["rsc_downloadingData", "PLAIN", 0.01, false];