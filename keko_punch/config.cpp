// Original Version by [RFT] Bridge.J http://responseforcetempest.com
class CfgPatches {

	class keko_punch {
		name = "Kellerkompanie Punch";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"ace_interaction", 
			"ace_common"};
		author = "Schwaggot";
		authorUrl = "http://www.kellerkompanie.com";
		version = 1.0;
	};
};

class Extended_PreInit_EventHandlers {
	class keko_punch {
		init = "call compile preprocessfilelinenumbers '\keko_punch\XEH_PreInit.sqf'";
	};
};

class CfgVehicles {
	/*extern*/ class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_Head {
				class keko_pn_punch {
					displayName = "Punch";
					condition = "alive _target";
					statement = "[_player,_target] call keko_punch_fnc_punchHead";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\keko_punch\ui\knock.paa";
				};
			};
		};
	};
};

class CfgSounds {
	sounds[] = {"keko_PunchSound"};

	class keko_PunchSound {
		name = "keko_PunchSound";
		sound[] = {"\keko_punch\sounds\punchSound.ogg", 3, 1};
		titles[] = {};
	};
};

class CfgFunctions 
{
	class keko 
	{
		tag = "keko_police";
		class punch 
		{
			file = "keko_punch\functions";
			class punchHead {};
            class punchTarget {};
		};
	};
}