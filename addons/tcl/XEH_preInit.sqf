#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(Enabled), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["TCL enabled", "Enable or disable TCL for AI"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    localize LSTRING(cbaSettingsCategory), // category
    false, // default setting
    true // global - synchronized accross all clients and server
] call CBA_fnc_addSetting;

GVAR(AI) = [		
	// 0 - 2 ( Reinforcement )
	1,
	0.15,
	3,
	
	// 3 - 6 ( Additional )
	False,
	3,
	700,
	True,
	
	// 7 - 8 ( Disable )
	False,
	False,
	
	// 9 ( Regroup )
	True,
	
	// 10 ( Timeout )
	170,
	
	// 11 ( Synchronize )
	False
];

GVAR(Debug) = [	
	// 0 ( System Debug )
	False,
	
	// 1 - 3 ( Marker Debug )
	False,
	False,
	False,
	
	// 4 ( Cursor )
	False,
	
	// 5 ( Mission Debug )
	False,
	
	// 6 ( Development Debug )
	False
];

GVAR(Feature) = [	
	// 0 ( Watch )
	True,
	50,
	
	// 2 ( Garrison )
	True,
	
	// 3 - 6 ( Smoke )
	True,
	50,
	True,
	75,
	
	// 7 ( Flare )
	True,
	50,
	
	// 9 ( Artillery )
	True,
	15,
	
	// 11 ( House Search )
	True,
	50,
	
	// 13 ( Static Weapon )
	True,
	50,
	
	// 15 - 18 ( Take Cover )
	True,
	50,
	30,
	50,
	
	// 19 - 21 ( Flanking )
	True,
	50,
	50,
	
	// 22 - 26 ( Advancing )
	True,
	15,
	50,
	300,
	700,
	
	// 27 - 29 ( Suppressed )
	True,
	0.90,
	5,
	
	// 30 - 31 ( Heal )
	True,
	50,
	
	// 32 - 33 ( Rearm )
	True,
	50,
	
	// 34 - 35 ( Surrender )
	True,
	5
];

GVAR(FX) = [
	// 0 ( Bullet )
	True,
	5,
	
	// 2 ( Shell )
	True,
	50,
	
	// 4 ( Church )
	True,
	
	// 5 ( Lighthouse )
	True,
	
	// 6 - 10 ( Radio )
	True,
	3,
	3,
	199,
	210,
	
	// 11 ( Crew )
	True,
	35,
	
	// 13 ( Explosion )
	True
];

GVAR(IQ) = [	
	// 0 ( Knowledge )
	1,
	
	// 1 ( Distance )
	100,
	
	// 2 ( KnowsAbout )
	3
];

GVAR(Radio) = [

	// 0 - 2 ( Radio )
	True,
	30,
	[3000, 5000, 7000, 10000, 13000]
];

GVAR(Resource) = [
	// ( 0 - 1 )
	["Bullet_v01","Bullet_v02","Bullet_v03","Bullet_v04","Bullet_v05","Bullet_v06","Bullet_v07","Bullet_v08","Bullet_v09","Bullet_v10","Bullet_v11","Bullet_v12","Bullet_v13","Bullet_v14","Bullet_v15","Bullet_v16","Bullet_v17","Bullet_v18","Bullet_v19","Bullet_v20","Bullet_v21","Bullet_v22","Bullet_v23","Bullet_v24","Bullet_v25","Bullet_v26","Bullet_v27","Bullet_v28","Bullet_v29","Bullet_v30","Bullet_v31","Bullet_v32","Bullet_v33","Bullet_v34","Bullet_v35","Bullet_v36","Bullet_v37","Bullet_v38","Bullet_v39","Bullet_v40","Bullet_v41","Bullet_v42","Bullet_v43"],
	["Shell_In_v01","Shell_In_v02","Shell_In_v03","Shell_In_v04","Shell_In_v05","Shell_In_v06","Shell_In_v07"],
	
	// ( 2 - 7 )
	["West_Air_v01a","West_Air_v02a","West_Air_v03a","West_Air_v04a","West_Air_v05a","West_Air_v06a","West_Air_v07a","West_Air_v08a","West_Air_v09a","West_Air_v10a","West_Air_v11a","West_Air_v12a","West_Air_v13a","West_Air_v14a","West_Air_v15a","West_Air_v16a","West_Air_v17a","West_Air_v18a","West_Air_v19a","West_Air_v20a","West_Air_v21a","West_Air_v22a","West_Air_v23a","West_Air_v24a","West_Air_v25a","West_Air_v26a","West_Air_v27a","West_Air_v28a","West_Air_v29a","West_Air_v30a","West_Air_v31a","West_Air_v32a","West_Air_v33a","West_Air_v34a","West_Air_v35a","West_Air_v36a","West_Air_v37a","West_Air_v38a","West_Air_v39a","West_Air_v40a","West_Air_v41a","West_Air_v42a","West_Air_v43a","West_Air_v44a","West_Air_v45a","West_Air_v46a","West_Air_v47a","West_Air_v48a","West_Air_v49a","West_Air_v50a"],
	["West_Land_v01a","West_Land_v02a","West_Land_v03a","West_Land_v04a","West_Land_v05a","West_Land_v06a","West_Land_v07a","West_Land_v08a","West_Land_v09a","West_Land_v10a","West_Land_v11a","West_Land_v12a","West_Land_v13a","West_Land_v14a"],
	["East_Land_v01a","East_Land_v02a","East_Land_v03a","East_Land_v04a","East_Land_v05a","East_Land_v06a","East_Land_v07a","East_Land_v08a","East_Land_v09a","East_Land_v10a","East_Land_v11a","East_Land_v12a","East_Land_v13a","East_Land_v14a","East_Land_v15a","East_Land_v16a","East_Land_v17a","East_Land_v18a","East_Land_v19a","East_Land_v20a","East_Land_v21a","East_Land_v22a","East_Land_v23a","East_Land_v24a","East_Land_v25a","East_Land_v26a","East_Land_v27a","East_Land_v28a","East_Land_v29a","East_Land_v30a"],
	["West_Air_Land_v01a","West_Air_Land_v02a","West_Air_Land_v03a","West_Air_Land_v04a","West_Air_Land_v05a","West_Air_Land_v06a","West_Air_Land_v07a","West_Air_Land_v08a","West_Air_Land_v09a","West_Air_Land_v10a","West_Air_Land_v11a","West_Air_Land_v12a","West_Air_Land_v13a","West_Air_Land_v14a","West_Air_Land_v15a","West_Air_Land_v16a","West_Air_Land_v17a","West_Air_Land_v18a","West_Air_Land_v19a","West_Air_Land_v20a","West_Air_Land_v21a","West_Air_Land_v22a","West_Air_Land_v23a","West_Air_Land_v24a","West_Air_Land_v25a","West_Air_Land_v26a","West_Air_Land_v27a","West_Air_Land_v28a","West_Air_Land_v29a","West_Air_Land_v30a","West_Air_Land_v31a","West_Air_Land_v32a","West_Air_Land_v33a","West_Air_Land_v34a","West_Air_Land_v35a","West_Air_Land_v36a","West_Air_Land_v37a","West_Air_Land_v38a","West_Air_Land_v39a","West_Air_Land_v40a","West_Air_Land_v41a","West_Air_Land_v42a","West_Air_Land_v43a","West_Air_Land_v44a"],
	
	["West_Land_v01b","West_Land_v02b","West_Land_v03b","West_Land_v04b","West_Land_v05b","West_Land_v06b","West_Land_v07b","West_Land_v08b","West_Land_v09b","West_Land_v10b","West_Land_v11b","West_Land_v12b","West_Land_v13b","West_Land_v14b"],
	["East_Land_v01b","East_Land_v02b","East_Land_v03b","East_Land_v04b","East_Land_v05b","East_Land_v06b","East_Land_v07b","East_Land_v08b","East_Land_v09b","East_Land_v10b","East_Land_v11b","East_Land_v12b","East_Land_v13b","East_Land_v14b","East_Land_v15b","East_Land_v16b","East_Land_v17b","East_Land_v18b","East_Land_v19b","East_Land_v20b","East_Land_v21b","East_Land_v22b","East_Land_v23b","East_Land_v24b","East_Land_v25b","East_Land_v26b","East_Land_v27b","East_Land_v28b","East_Land_v29b","East_Land_v30b"],
	
	// ( 8 - 10 )
	["Church_v02","Church_v06","Church_v07"],
	["Church_v03","Church_v05"],
	["Church_v01","Church_v04"],
	
	// ( 11 )
	["Lighthouse_v01","Lighthouse_v02","Lighthouse_v03","Lighthouse_v04"],
	
	// ( 12 - 13 )
	["Bullet_Hit_v01","Bullet_Hit_v02","Bullet_Hit_v03","Bullet_Hit_v04","Bullet_Hit_v05","Bullet_Hit_v06"],
	
	["Hit_v01","Hit_v02","Hit_v03","Hit_v04","Hit_v05","Hit_v06","Hit_v07","Hit_v08","Hit_v09","Hit_v10","Hit_v11","Hit_v12","Hit_v13","Hit_v14","Hit_v15"],
	
	// ( 14 )
	["Explosion_v01","Explosion_v02","Explosion_v03","Explosion_v04","Explosion_v05","Explosion_v06","Explosion_v07","Explosion_v08","Explosion_v09","Explosion_v10","Explosion_v11","Explosion_v12","Explosion_v13","Explosion_v14","Explosion_v15","Explosion_v16","Explosion_v17","Explosion_v18","Explosion_v19","Explosion_v20","Explosion_v21","Explosion_v22","Explosion_v23","Explosion_v24","Explosion_v25","Explosion_v26","Explosion_v27","Explosion_v28"],
	
	// ( 15 )
	["Scream_v01","Scream_v02","Scream_v03","Scream_v04","Scream_v05"]
];

GVAR(System) = [
	// 0 ( Delay )
	0,
	
	// 1 ( A.I. )
	True,
	
	// 2 ( Sides )
	[EAST, WEST, RESISTANCE],
	
	// 3 ( Combat System )
	True,
	
	// 4 ( Get In )
	True,
	
	// 5 ( Skill )
	True,
	
	// 6 ( Skill Divider )
	5,
	
	// 7 ( Spawn )
	True,
	
	// 8 ( Delay )
	0,
	
	// 9 ( F.X. )
	True,
	
	// 10 ( Respawn )
	False
];

GVAR(Tweak) = [	
	// 0 ( Behaviour )
	0,
	
	// 1 ( Push and Stop Distance )
	300,
	
	// 2 ( Push Chance )
	50,
	
	// 3 ( Push Factor )
	1
];


ADDON = true;
