class CfgVehicles {
	/*extern*/ class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_Head {
				class GVAR(Kill) {
					displayName = "Kill";
					condition = "(alive _target) && (_target getVariable ['ACE_isUnconscious', false])";
					statement = QUOTE([ARR_2(_player,_target)] call FUNC(killHead));
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = QPATHTOF(ui\icon_kill.paa);
				};
			};
		};
	};
};
