// Original Version by [RFT] Bridge.J http://responseforcetempest.com
class CfgPatches {

	class keko_kill {
		name = "Kellerkompanie Kill";
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
	class keko_kill {
		init = "call compile preprocessfilelinenumbers '\keko_kill\XEH_PreInit.sqf'";
	};
};

class CfgVehicles {
	/*extern*/ class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_Head {
				class keko_pn_kill {
					displayName = "Kill";
					condition = "(alive _target) && (_target getVariable ['ACE_isUnconscious', false])";
					statement = "[_player,_target] call keko_kill_fnc_killHead";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\keko_kill\ui\kill.paa";
				};
			};
		};
	};
};

class CfgSounds {
	sounds[] = {"keko_KillSound"};

	class keko_KillSound {
		name = "keko_KillSound";
		sound[] = {"\keko_kill\sounds\neckSound.ogg", 3, 1};
		titles[] = {};
	};
};

class CfgFunctions
{
	class keko_kill
	{
		tag = "keko_kill";
		class kill
		{
			file = "keko_kill\functions";
			class killHead {};
      		class killTarget {};
		};
	};
}
