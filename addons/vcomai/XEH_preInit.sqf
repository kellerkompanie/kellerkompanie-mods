#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;




GVAR(ActiveList) = []; //Leave this alone.
GVAR(ArtilleryArray) = []; //Leave this alone
GVAR(ARTYLST) = []; //List of all AI inside of artillery pieces, leave this alone.

//AI SKILL SETTINGS HERE!!!!!!!!!!!!
//LOW DIFFICULTY
// keko_vcomai_AIDIFA = [['aimingAccuracy',0.15],['aimingShake',0.1],['aimingSpeed',0.25],['commanding',1],['courage',1],['endurance',1],['general',0.5],['reloadSpeed',1],['spotDistance',0.8],['spotTime',0.8]];
	
//MEDIUM DIFFICULTY
GVAR(AIDIFA) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];

//HIGH DIFFICULTY
// keko_vcomai_AIDIFA = [['aimingAccuracy',0.35],['aimingShake',0.4],['aimingSpeed',0.45],['commanding',1],['courage',1],['endurance',1],['general',0.5],['reloadSpeed',1],['spotDistance',0.8],['spotTime',0.8]];

//SIDE SPECIFIC
GVAR(AIDIFWEST) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];
GVAR(AIDIFEAST) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];
GVAR(AIDIFRESISTANCE) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];

//PLAYER SQUAD SPECIFIC
GVAR(PSQUADW) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];	
GVAR(PSQUADE) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];	
GVAR(PSQUADR) = [['aimingAccuracy',0.25],['aimingShake',0.15],['aimingSpeed',0.35],['commanding',0.85],['courage',0.5],['general',1],['reloadSpeed',1],['spotDistance',0.85],['spotTime',0.85]];	


GVAR(AISIDESPEC) =
{
	private _Side = (side (group _this));
	switch (_Side) do {
		case west: 
		{
			{
				_this setSkill _x;
			} forEach GVAR(AIDIFWEST);				
		};
		case east: 
		{
			{
				_this setSkill _x;
			} forEach GVAR(AIDIFEAST);					
		}; 
		case resistance: 
		{
			{
				_this setSkill _x;
			} forEach GVAR(AIDIFRESISTANCE);					
		}; 
	};		
};

GVAR(CLASSNAMESPECIFIC) = false; //Do you want the AI to have classname specific skill settings?
GVAR(SIDESPECIFICSKILL) = false; //Do you want the AI to have side specific skill settings? This overrides classname specific skills.
GVAR(SKILL_CLASSNAMES) = []; //Here you can assign certain unit classnames to specific skill levels. This will override the AI skill level above.

/*
EXAMPLE FOR keko_vcomai_SKILL_CLASSNAMES

keko_vcomai_SKILL_CLASSNAMES = [["Classname1",[aimingaccuracy,aimingshake,spotdistance,spottime,courage,commanding,aimingspeed,general,endurance,reloadspeed]],["Classname2",[aimingaccuracy,aimingshake,spotdistance,spottime,courage,commanding,aimingspeed,general,endurance,reloadspeed]]];
keko_vcomai_SKILL_CLASSNAMES = 	[
													["B_GEN_Soldier_F",[0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]],
													["B_G_Soldier_AR_F",[0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]]
												]; 

*/
	
GVAR(AIDIFSET) = {
	{
		private _unit = _x;
		_unit setSkill 0.9;
		_unit allowFleeing 0;			
		{
			_unit setSkill _x;
		} forEach GVAR(AIDIFA);
		
		
		if (GVAR(CLASSNAMESPECIFIC) && {count GVAR(SKILL_CLASSNAMES) > 0}) then {
			{
				if (typeOf _unit isEqualTo (_x select 0)) exitWith {
					_ClassnameSet = true;
					_unit setSkill ["aimingAccuracy",((_x select 1) select 0)];
					_unit setSkill ["aimingShake",((_x select 1) select 1)];
					_unit setSkill ["spotDistance",((_x select 1) select 2)];
					_unit setSkill ["spotTime",((_x select 1) select 3)];
					_unit setSkill ["courage",((_x select 1) select 4)];
					_unit setSkill ["commanding",((_x select 1) select 5)];	
					_unit setSkill ["aimingSpeed",((_x select 1) select 6)];
					_unit setSkill ["general",((_x select 1) select 7)];
					_unit setSkill ["endurance",((_x select 1) select 8)];
					_unit setSkill ["reloadSpeed",((_x select 1) select 9)];
				};
			} foreach GVAR(SKILL_CLASSNAMES);
		};			
		
		if (GVAR(SIDESPECIFICSKILL)) then {
			_unit call GVAR(AISIDESPEC);
		};
		
	} forEach (units _this);
};
			
			
//Global actions compiles
GVAR(PMN) = compileFinal "(_this select 0) playMoveNow (_this select 1);";
GVAR(SM) = compileFinal "(_this select 0) switchMove (_this select 1);";
GVAR(PAN) = compileFinal "(_this select 0) playActionNow (_this select 1);";
GVAR(MINEARRAY) = [];
GVAR(CoverQueue) = [];





#define VCOM_SETTINGS "Vcom-AI Settings"


//Set this to false to disable VcomAI. It can be set to true at any time to re-enable Vcom AI
[
	QGVAR(ActivateAI),
	"CHECKBOX",
	"Vcom Active", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	false,
	true
] call CBA_Settings_fnc_init;

//Enable debug mode.
[
	QGVAR(Debug),
	"CHECKBOX",
	"Enable Debug Mode. Mostly systemchat messages.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	false,
	true
] call CBA_Settings_fnc_init;

//Sides that will activate Vcom AI
[
	QGVAR(SIDEENABLED),
	"LIST",
	"Sides impacted by Vcom.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		[[west,east,resistance],[west,east],[west],[east],[resistance],[resistance,west],[resistance,east]],
		[["West, East, Resistance"],["West, East"],["West"],["East"],["Resistance"],["Resistance, West"],["Resistance, East"]],
		0
	],
	true
] call CBA_Settings_fnc_init;

//Enable improved artillery handling from Vcom.
[
	QGVAR(ARTYENABLE),
	"CHECKBOX",
	"Enable AI use of Artillery", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//Sides that will use VCOM artillery
[
	QGVAR(ARTYSIDES),
	"LIST",
	"Sides that will use VCOM Artillery", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		[[west,east,Resistance],[west,east],[west],[east],[Resistance],[Resistance,west],[Resistance,east]],
		[["West, East, Resistance"],["West, East"],["West"],["East"],["Resistance"],["Resistance, West"],["Resistance, East"]],
		0
	],
	true
] call CBA_Settings_fnc_init;

// AI will heal themselves, and medics will heal others in their squad.
[
	QGVAR(MEDICALACTIVE),
	"CHECKBOX",
	"AI attempt to heal themselves. Medics heal others.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;		

//If true, Vcom will handle disembarking/re-embarking orders instead of vanilla. This is with the intention to prevent the endless embark/disembark loops AI are given.	
[
	QGVAR(CARGOCHNG),
	"CHECKBOX",
	"Vcom handling of disembark/embarking for AI?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//If true = Prevents AI vehicle turret positions from leaving a vehicle just beecause it is slightly damaged. Example: leaving a tank when just the tracks are damaged.	
[
	QGVAR(TURRETUNLOAD),
	"CHECKBOX",
	"Disembark from turret positions?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//How far AI will disembark from their enemies. If the vehicle is damaged, they will disembark.
[
	QGVAR(DISEMBARKRANGE),
	"SLIDER",
	"Distance AI disembark from the enemy?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[50,1000,200,0],
	true
] call CBA_Settings_fnc_init;

//Will the AI steal vehicles.
[
	QGVAR(StealVeh),
	"CHECKBOX",
	"AI steal empty/unlocked vehicles?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//If true, crewmen are required to steal tracked vehicles. Pilots are required to steal aircraft. false = anyone can steal any vehicle.
[
	QGVAR(ClassSteal),
	"CHECKBOX",
	"Class restriction for stealing vehicles", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//Enforce full speedmode during combat (Does not reset after combat end)
[
	QGVAR(FullSpeed),
	"CHECKBOX",
	"Enforce AI Speed 'FULL'?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//True means AI will actively generate waypoints if no other waypoints are generated for the AI group (2 or more). False disables this advanced movements.
[
	QGVAR(ADVANCEDMOVEMENT),
	"CHECKBOX",
	"AI generate new waypoints to flank.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//AI GROUPS WILL CHANGE FORMATIONS TO THEIR BEST GUESS.
[
	QGVAR(FRMCHANGE),
	"CHECKBOX",
	"AI change formations based on location.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//AI Groups will have their skills changed by Vcom.
[
	QGVAR(SKILLCHANGE),
	"CHECKBOX",
	"AI impacted by Vcom skill settings.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//Distance AI check from the squad leader to steal vehicles
[
	QGVAR(AIDISTANCEVEHPATH),
	"SLIDER",
	"Distance AI will steal vehicles from.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1000,100,0],
	true
] call CBA_Settings_fnc_init;

//Should AI have a chance to ragdoll when hit
[
	QGVAR(RAGDOLL),
	"CHECKBOX",
	"AI Ragdoll when hit?", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	false,
	true
] call CBA_Settings_fnc_init;

//CHANCE AI RAGDOLL	
[
	QGVAR(RAGDOLLCHC),
	"SLIDER",
	"Chance for AI to ragdoll when hit.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,100,100,0],
	true
] call CBA_Settings_fnc_init;

//Distance AI hear unsuppressed gunshots.
[
	QGVAR(HEARINGDISTANCE),
	"SLIDER",
	"Distance AI can hear gunfire.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,10000,1200,0],
	true
] call CBA_Settings_fnc_init;

//Distance AI will hear suppressed gunshots.
[
	QGVAR(SUPDIST),
	"SLIDER",
	"Distance AI can hear suppressed gunfire.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,10000,200,0],
	true
] call CBA_Settings_fnc_init;		

//How far AI can request help from other groups.
[
	QGVAR(WARNDIST),
	"SLIDER",
	"Distance AI will call for reinforcements from.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,10000,1000,0],
	true
] call CBA_Settings_fnc_init;

//How long the AI have to survive before they can call in for support. This activates once the AI enter combat.
[
	QGVAR(WARNDELAY),
	"SLIDER",
	"Time (seconds) AI wait before support called.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,10000,30,0],
	true
] call CBA_Settings_fnc_init;

//How long AI stay on static weapons when initially arming them. This is just for AI WITHOUT static bags. They will stay for this duration when NO ENEMIES ARE SEEN, or their group gets FAR away.	
[
	QGVAR(STATICARMT),
	"SLIDER",
	"Time (seconds) AI stay on unarmed Static Weapons", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,10000,300,0],
	true
] call CBA_Settings_fnc_init;

//Enable AI placing mines
[
	QGVAR(MINEENABLED),
	"CHECKBOX",
	"Enable AI placing mines", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//Chance to lay a mine every 30 seconds or so
[
	QGVAR(MINECHANCE),
	"SLIDER",
	"Chance for AI to place a mine, once in combat.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,100,75,0],
	true
] call CBA_Settings_fnc_init;

//Delay between squads requesting artillery
[
	QGVAR(ARTYDELAY),
	"SLIDER",
	"Delay before artillery requests. SIDE BASED.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,5000,30,0],
	true,
	{
		params ["_value"];
		GVAR(ARTYWT) = -_value;
		GVAR(ARTYET) = -_value;
		GVAR(ARTYRT) = -_value;
	}
] call CBA_Settings_fnc_init;

//Number of mags remaining before AI looks for ammo.
[
	QGVAR(AIMagLimit),
	"SLIDER",
	"Mag count AI begin to look for additional mags.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[2,10,5,0],
	true
] call CBA_Settings_fnc_init;

//Special sniper AI
[
	QGVAR(AISNIPERS),
	"CHECKBOX",
	"Special marksman/sniper AI", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//AI will attack from further away with primary weapons to suppress enemies
[
	QGVAR(AISUPPRESS),
	"CHECKBOX",
	"AI attempt to suppress enemies more, and at a further range.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//AI will use experimental driving improvements.
[
	QGVAR(DrivingActivated),
	"CHECKBOX",
	"Experimental Improvements to AI driving.", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	false,
	true
] call CBA_Settings_fnc_init;

//AI in a group, that a players leads, can have their skills changed separately.
[
	QGVAR(PlayerAISkills),
	"CHECKBOX",
	"Player AI recieve unique skill settings", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	true,
	true
] call CBA_Settings_fnc_init;

//Chance the AI will throw a smoke grenade.
[
	QGVAR(SmokeChance),
	"SLIDER",
	"Chance AI throw smoke", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,100,10,2],
	true
] call CBA_Settings_fnc_init;		

//Chance the AI will throw a grenade.
[
	QGVAR(GrenadeChance),
	"SLIDER",
	"Chance AI throw grenades", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,100,10,2],
	true
] call CBA_Settings_fnc_init;			



//SKILL SETTINGS
[
	QGVAR(AISkills_SideSpecific),
	"CHECKBOX",
	"AI skill settings are side specific", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	VCOM_SETTINGS, // Pretty name of the category where the setting can be found. Can be stringtable entry.
	false,
	true,
	{  
		params ["_value"];
		GVAR(SIDESPECIFICSKILL) = _value;
	}
] call CBA_Settings_fnc_init;

//WEST SIDE SKILLS
[
	QGVAR(AISkills_West_AimingAccuracy),
	"SLIDER",
	"West aiming accuracy", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.25,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [0,['aimingAccuracy',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;			
[
	QGVAR(AISkills_West_aimingShake),
	"SLIDER",
	"West aiming shake", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [1,['aimingShake',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_aimingSpeed),
	"SLIDER",
	"West aiming speed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [2,['aimingSpeed',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_commanding),
	"SLIDER",
	"West commanding", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [3,['commanding',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_courage),
	"SLIDER",
	"West courage", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [4,['courage',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_general),
	"SLIDER",
	"West general", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [5,['general',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_reloadSpeed),
	"SLIDER",
	"West reloadSpeed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,1,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [6,['reloadSpeed',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_spotDistance),
	"SLIDER",
	"West spotDistance", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [7,['spotDistance',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_West_spotTime),
	"SLIDER",
	"West spotTime", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI West Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFWEST) set [8,['spotTime',_value]];
		publicVariable QGVAR(AIDIFWEST);
	}
] call CBA_Settings_fnc_init;	



//EAST SIDE SKILLS
[
	QGVAR(AISkills_East_AimingAccuracy),
	"SLIDER",
	"East aiming accuracy", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.25,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [0,['aimingAccuracy',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;			
[
	QGVAR(AISkills_East_aimingShake),
	"SLIDER",
	"East aiming shake", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [1,['aimingShake',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_aimingSpeed),
	"SLIDER",
	"East aiming speed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [2,['aimingSpeed',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_commanding),
	"SLIDER",
	"East commanding", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [3,['commanding',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_courage),
	"SLIDER",
	"East courage", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [4,['courage',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_general),
	"SLIDER",
	"East general", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [5,['general',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_reloadSpeed),
	"SLIDER",
	"East reloadSpeed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,1,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [6,['reloadSpeed',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_spotDistance),
	"SLIDER",
	"East spotDistance", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [7,['spotDistance',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_East_spotTime),
	"SLIDER",
	"East spotTime", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI East Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFEast) set [8,['spotTime',_value]];
		publicVariable QGVAR(AIDIFEast);
	}
] call CBA_Settings_fnc_init;	
	


//Resistance SIDE SKILLS
[
	QGVAR(AISkills_Resistance_AimingAccuracy),
	"SLIDER",
	"Resistance aiming accuracy", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.25,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [0,['aimingAccuracy',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;			
[
	QGVAR(AISkills_Resistance_aimingShake),
	"SLIDER",
	"Resistance aiming shake", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [1,['aimingShake',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_aimingSpeed),
	"SLIDER",
	"Resistance aiming speed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [2,['aimingSpeed',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_commanding),
	"SLIDER",
	"Resistance commanding", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [3,['commanding',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_courage),
	"SLIDER",
	"Resistance courage", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [4,['courage',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_general),
	"SLIDER",
	"Resistance general", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [5,['general',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_reloadSpeed),
	"SLIDER",
	"Resistance reloadSpeed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,1,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [6,['reloadSpeed',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_spotDistance),
	"SLIDER",
	"Resistance spotDistance", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [7,['spotDistance',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_Resistance_spotTime),
	"SLIDER",
	"Resistance spotTime", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI Resistance Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFResistance) set [8,['spotTime',_value]];
		publicVariable QGVAR(AIDIFResistance);
	}
] call CBA_Settings_fnc_init;	


//General skills
[
	QGVAR(AISkills_General_AimingAccuracy),
	"SLIDER",
	"General aiming accuracy", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.25,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [0,['aimingAccuracy',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;			
[
	QGVAR(AISkills_General_aimingShake),
	"SLIDER",
	"General aiming shake", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.15,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [1,['aimingShake',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_aimingSpeed),
	"SLIDER",
	"General aiming speed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.35,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [2,['aimingSpeed',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_commanding),
	"SLIDER",
	"General commanding", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [3,['commanding',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_courage),
	"SLIDER",
	"General courage", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [4,['courage',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_general),
	"SLIDER",
	"General general", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.5,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [5,['general',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_reloadSpeed),
	"SLIDER",
	"General reloadSpeed", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,1,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [6,['reloadSpeed',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_spotDistance),
	"SLIDER",
	"General spotDistance", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [7,['spotDistance',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;	
[
	QGVAR(AISkills_General_spotTime),
	"SLIDER",
	"General spotTime", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"VCOM AI General Skill", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[0,1,0.85,2],
	false,
	{
		params ["_value"];
		GVAR(AIDIFA) set [8,['spotTime',_value]];
		publicVariable QGVAR(AIDIFA);
	}
] call CBA_Settings_fnc_init;

//Will the AI use enhanced movement to navigate around.
[
	QGVAR(AI_EM),
	"CHECKBOX",
	"AI uses enhanced movement to navigate around",
	[VCOM_SETTINGS, "Enhanced Movement"],
	true,
	true
] call CBA_Settings_fnc_init;

//Chance a group will attempt to jump over an obstacle  - every 0.5 secs
[
	QGVAR(AI_EM_CHN),
	"SLIDER",
	"Chance a group will attempt to jump over an obstacle",
	[VCOM_SETTINGS, "Enhanced Movement"],
	[0, 100, 10, 0],
	true
] call CBA_Settings_fnc_init;

//Time in seconds before a group will consider jumping over obstacles;
[
	QGVAR(AI_EM_CLDWN),
	"SLIDER",
	"Cooldown for using Enhanced Movement - in secs",
	[VCOM_SETTINGS, "Enhanced Movement"],
	[5, 120, 10, 0],
	true
] call CBA_Settings_fnc_init;


ADDON = true;