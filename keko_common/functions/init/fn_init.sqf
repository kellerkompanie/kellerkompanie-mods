diag_log text "[KEKO] (common) running init";

enableSaving [false, false];

//waitUntil param variables are defined:
waitUntil {!isNil "keko_params_defined"};

//randomweather:
if !( (missionNamespace getVariable ["keko_par_randomWeather",99]) isEqualTo 99 ) then {
	keko_handle_weather = [] spawn MtB_fnc_randomWeather;
};
//fixed weather:
if !( (missionNamespace getVariable ["keko_par_weather",99]) isEqualTo 99 ) then {
	keko_handle_weather = [] spawn keko_common_fnc_weather;
};