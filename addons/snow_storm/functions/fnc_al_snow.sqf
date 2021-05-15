#include "script_component.hpp"

if (!isServer) exitWith {};

params ["_snowfall", "_duration_storm", "_ambient_sounds_al", "_breath_vapors", "_snow_burst", "_effect_on_objects", "_vanilla_fog", "_local_fog", "_intensifywind", "_unitsneeze"];

/*
	snowfall			- boolean, if true snowflakes made out of particles will be created
	duration_storm		- number, life time of the SNOW STORM expressed in seconds
	ambient_sounds_al	- seconds/number, a random number will be generated based on your input value and used to set the frequency for played ambient sounds
						- if is negative NO custom ambient sounds will be played
	breath_vapors		- boolean, if true you will see breath vapors for all units, however if you have many units in your mission you should set this false to diminish the impact on frames
	snow_burst			- seconds/number, if higher than 0 burst of snow will be generated at intervals based on your value
	effect_on_objects	- boolean, if is true occasionally a random object will be pushed by the wind during the snow burst if the later is enabled
	vanilla_fog			- boolean, vanilla fog will be managed by the script if true, otherwise the values you set in editor will be used 
	local_fog			- boolean, if true particles will be used to create sort of waves of fog and snow
	intensifywind		- boolean, if is true the wind will blow with force otherwise default value from Eden or other script will be used
	unitsneeze			- boolean, if is true the at random units will sneeze/caugh and will shiver when snow burst occurs
*/

[] spawn FUNC(alias_hunt);

waitUntil {!isNil QGVAR(hunt_alias)};

if (_vanilla_fog) then {
	GVAR(al_foglevel) = fog; 
	publicVariable QGVAR(al_foglevel); 
	60 setFog [1, 0.01, 0.5];
};

[_duration_storm] spawn {
	params ["_duration_storm"];
	
	GVAR(stormActive) = true; 
	publicVariable QGVAR(stormActive); 
	sleep _duration_storm; 
	GVAR(stormActive) = false; 
	publicVariable QGVAR(stormActive); 
	
	if (!isNil QGVAR(al_foglevel)) then {
		60 setFog GVAR(al_foglevel);
	};
};

sleep 5;

[QFUNC(checkPos)] remoteExec ["spawn", 0, true];

if (_local_fog) then {
	[QFUNC(adjustFog)] remoteExec ["spawn", 0, true];
};

if (_ambient_sounds_al > 0) then {
	[_ambient_sounds_al] spawn FUNC(umblator);
};

if (_breath_vapors) then {
	[QFUNC(playerSnowBreath)] remoteExec ["spawn", 0, true];
};

if (_unitsneeze) then {
	[QFUNC(unitSneeze)] remoteExec ["spawn", 0, true];
};

if (_snowfall) then {
	[QFUNC(snowfallSFX)] remoteExec ["spawn", 0, true];
};

if (_snow_burst > 0) then {
	[_effect_on_objects] spawn FUNC(snowGustsServer); 
	GVAR(interval_burst) = _snow_burst; 
	publicVariable QGVAR(interval_burst); 
	sleep 10; 
	[[_unitsneeze], QFUNC(snowGustsClient)] remoteExec ["spawn", 0, true];
};

if (_intensifywind) then {
	[QFUNC(playWindSound)] remoteExec ["spawn", 0, true];
	
	GVAR(al_windlevel) = wind;
	for "_i" from 1 to 5 step 0.2 do {
		setWind [(GVAR(al_windlevel)#0) * _i, (GVAR(al_windlevel)#1) * _i, true]; 
		sleep 4;
	};

	waitUntil {
		sleep 60; 
		!GVAR(stormActive)
	};

	GVAR(al_windlevel) = wind;
	for "_i" from 1 to 5 step 0.1 do {
		setWind [(GVAR(al_windlevel)#0) / _i, (GVAR(al_windlevel)#1) / _i, true]; 
		sleep 4;
	};
};