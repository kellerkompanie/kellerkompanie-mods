//
//
if (VQI_FROGS_HINTS == 1) then { hint "pinged_deploy.sqf"; };
sleep 1;





// cancel
subNav = false;

// position
posSUBD = getPos HMSProteus;

// deploy
[] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_wpD.sqf";













///////////////////
/* NOTES:


*/