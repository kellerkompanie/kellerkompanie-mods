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
					condition = "alive _target && !(_target getVariable ['ACE_isUnconscious', false])";
					statement = "[_player,_target] call keko_punch_fnc_punchHead";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\keko_punch\ui\knock.paa";
				};

				class keko_pn_inhale {
					displayName = "Use smelling salt";
					condition = "alive _target && (_target getVariable ['ACE_isUnconscious', false]) && !([_target] call ace_medical_fnc_getUnconsciousCondition)";
					statement = "[_player,_target] call keko_punch_fnc_wakeHead";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\keko_punch\ui\nose.paa";
				};
			};
			class ACE_MainActions {
				class keko_ma_hide {
					displayName = "Hide corpse";
					condition = "!(alive _target) && ('ACE_EntrenchingTool' in items _player)";
					statement = "[_player,_target] call keko_punch_fnc_hideCorpse";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\keko_punch\ui\shovel.paa";
				};
			};
		};
	};
};

class CfgSounds {
	sounds[] = {"keko_PunchSound", "keko_InhaleSound", "keko_ShovelSound"};

	class keko_PunchSound {
		name = "keko_PunchSound";
		sound[] = {"\keko_punch\sounds\punchSound.ogg", 3, 1};
		titles[] = {};
	};

	class keko_InhaleSound {
		name = "keko_InhaleSound";
		sound[] = {"\keko_punch\sounds\inhaleSound.ogg", 3, 1};
		titles[] = {};
	};

	class keko_ShovelSound {
		name = "keko_ShovelSound";
		sound[] = {"\keko_punch\sounds\shovelSound.ogg", 3, 1};
		titles[] = {};
	};
};

class CfgFunctions
{
	class keko_punch
	{
		tag = "keko_punch";
		class punch
		{
			file = "keko_punch\functions";
			class punchHead {};
      		class punchTarget {};
      		class wakeHead {};
      		class hideCorpse {};
		};
	};
}
