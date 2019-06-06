#include "script_component.hpp"

// by ALIAS
// Dust STORM SCRIPT
// Tutorial: https://www.youtube.com/user/aliascartoons
/*
================================================================================================================================
>>>>> DUST STORM Parameters ====================
================================================================================================================================
leaves_p_drop            = 0.1+random 0.1;//    <-- droprate bushes
alias_drop_fog_factor    = 0.01+random 0.1;//<-- droprate sand
null = [direction_duststorm, duration_duststorm, effect_on_objects, wall_of_dust, lethal_wall, desertVegetation] execvm "AL_dust_storm\al_duststorm.sqf";

direction_duststorm    - integer, from 0 to 360, direction towards the wind blows expressed in compass degrees
duration_duststorm    - integer, life time of the duststorm expressed in seconds
effect_on_objects    - boolean, if is true occasionally a random object near playable units will be thrown in the air
wall_of_dust        - boolean, if true a wall of dust is created, make it false if mission is too laggy with this option
lethal_wall            - boolean, if true the wall of dust becomes destructive, it may generate severe frame drops so use it with care !!!
//ADDED
desertVegetation    - boolean, if true dry shrubs will fly around (hopefully); if false shrubs are green;

================================================================================================================================
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> EXAMPLES <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
================================================================================================================================
*/
// DUST STORM example

// wind effect on objects surounding players OFF, wall of dust OFF
null = [340,600,false,false,false] execvm "AL_dust_storm\al_duststorm.sqf";

// wind effect on objects surounding players ON, wall of dust OFF
null = [340,600,true,false,false] execvm "AL_dust_storm\al_duststorm.sqf";

// wind effect on objects surounding players ON, wall of dust ON, wall of dust non-destructive
null = [340,600,true,true,false] execvm "AL_dust_storm\al_duststorm.sqf";

// wind effect on objects surounding players ON, wall of dust ON, wall of dust destructive
null = [340,600,true,true,true] execvm "AL_dust_storm\al_duststorm.sqf";


// Example for storm coming and going randomly
// place lines below at the end of init.sqf
// edit the value of my_dust_storm_duration as desired

while {true} do {
if (isServer) then {
    my_dust_storm_duration = 240 + random 600;
    publicVariable "my_dust_storm_duration";
    pause_between_dust_storm = 240 + random 600;
    publicVariable "my_dust_storm_duration";
};
waitUntil {(!isNil "my_dust_storm_duration") and (!isNil "pause_between_dust_storm")};
null = [340,my_dust_storm_duration,false,false,false] execvm "AL_dust_storm\al_duststorm.sqf";
sleep (my_dust_storm_duration + pause_between_dust_storm);
};
