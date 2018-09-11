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