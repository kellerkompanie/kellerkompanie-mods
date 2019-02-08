#include "script_component.hpp"

INFO("running XEH_postInitClient");

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

//failsafe for missing curator interface:
if ( player isKindOf QEGVAR(faction_generic,blufor_command) || player isKindOf QEGVAR(faction_generic,opfor_command) || player isKindOf QEGVAR(faction_generic,indfor_command) ) then {
	if (isNull (getAssignedCuratorLogic player)) then {
		["ace_zeus_createZeus", player] call CBA_fnc_serverEvent;
	};
};

if (face player == "Custom") then {
	private _text = "Custom Faces are not allowed on this server!";
	[{alive player}, { // To be able to show list if using checkAll
		params ["_text"];
		_text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
		["[KEKO] ERROR", _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
	}, [_text]] call CBA_fnc_waitUntilAndExecute;
};

if(hasInterface) then {
	call FUNC(addBriefingEntries);
};

// event handlers for the statistics at mission end
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(fragsOut) = 0;
GVAR(shotsFired) = 0;

["ace_treatmentSucceded", {
	params ["_medic", "_patient", "_bodyPart", "_className"];

	if (_className in ["FieldDressing", "PackingBandage", "ElasticBandage", "QuikClot"]) exitWith {
		GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
	};

	if (_className isEqualTo "CheckPulse") exitWith {
		GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
	};

	if (_className isEqualTo "CPR") exitWith {
		GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
	};
}] call CBA_fnc_addEventHandler;

["ace_throwableThrown", {
	params ["_unit", "_frag"];

	//["SmokeShellYellow","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellPurple","SmokeShellOrange","SmokeShellBlue",
	//"B_IRStrobe","rhs_ammo_an_m14_th3","rhs_ammo_an_m8hc","rhs_ammo_fakel","rhs_ammo_fakels","rhs_ammo_f1","rhssaf_ammo_br_m75",
	//"rhssaf_ammo_br_m84","rhssaf_ammo_brk_m79","rhssaf_ammo_brz_m88","rhssaf_ammo_brd_m83_white","rhssaf_ammo_brd_m83_yellow",
	//"rhssaf_ammo_brd_m83_green","rhssaf_ammo_brd_m83_red","rhssaf_ammo_brd_m83_blue","rhssaf_ammo_brd_m83_orange","ACE_G_M84",
	//"ACE_G_M14","BWA3_G_DM51A1","BWA3_G_DM25","BWA3_G_DM32_Orange","BWA3_G_DM32_Yellow","BWA3_G_DM32_Green","BWA3_G_DM32_Red",
	//"BWA3_G_DM32_Purple","BWA3_G_DM32_Blue","GrenadeHand","mini_Grenade","SmokeShell","SmokeShellYellow","I_IRStrobe",
	//"O_IRStrobe","rhs_ammo_m84","rhs_ammo_m67","rhs_ammo_mk3a2","rhs_ammo_m69","rhs_ammo_m7a3_cs","rhs_ammo_m18_green",
	//"rhs_ammo_m18_red","rhs_ammo_m18_yellow","rhs_ammo_m18_purple","rhs_ammo_rdg2_black","rhs_ammo_nspd","rhs_ammo_nspn_yellow",
	//"rhs_ammo_nspn_green","rhs_ammo_nspn_red","rhs_ammo_plamyam","rhs_ammo_rdg2_white","rhs_ammo_zarya2","rhsgref_ammo_rkg3em",
	//"rhssaf_ammo_rshb_p98","rhs_ammo_rgd5","rhs_ammo_rgn_base","rhs_ammo_rgn_base"]

	if (isPlayer _unit) then {
		//if ((typeOf _frag) isEqualTo "GrenadeHand" || (typeOf _frag) isEqualTo "mini_Grenade") then {
			GVAR(fragsOut) = GVAR(fragsOut) + 1;
		//};
	};
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle"];

	if (_weapon == "Throw") then {
		GVAR(fragsOut) = GVAR(fragsOut) + 1;
	};

	/*if (_muzzle isEqualTo "HandGrenadeMuzzle" || _muzzle isEqualTo "MiniGrenadeMuzzle") then {
		GVAR(fragsOut) = GVAR(fragsOut) + 1;
	};*/

	if (_weapon isEqualTo primaryWeapon _unit) then {
		GVAR(shotsFired) = GVAR(shotsFired) + 1;
	};
}];
