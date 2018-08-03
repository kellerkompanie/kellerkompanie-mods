params ["_logic"];
if (!local _logic) exitWith {};

[] spawn keko_weather_fnc_snow_terminateSnow;
[] spawn keko_weather_fnc_dust_abortStorm;
