class CfgVehicles {
    /*extern*/ class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Head {
                class GVAR(punch) {
                    displayName = "Punch";
                    condition = QUOTE([ARR_2(_player,_target)] call FUNC(canPunch));
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(punchHead));
                    showDisabled = 0;
                    priority = 1;
                    distance = 4.5;
                    icon = QPATHTOF(ui\icon_knock.paa);
                };
                class GVAR(inhale) {
                    displayName = "Use smelling salt";
                    condition = "alive _target && (_target getVariable ['ACE_isUnconscious', false]) && !(_target call ace_common_fnc_isAwake)";
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(wakeHead));
                    showDisabled = 0;
                    priority = 1;
                    distance = 4.5;
                    icon = QPATHTOF(ui\icon_nose.paa);
                };
                class GVAR(Kill) {
                    displayName = "Kill";
                    condition = "(alive _target) && !(_target call ace_common_fnc_isAwake)";
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(killHead));
                    showDisabled = 0;
                    priority = 1;
                    distance = 4.5;
                    icon = QPATHTOF(ui\icon_kill.paa);
                };
            };
            class ACE_MainActions {
                class GVAR(hide) {
                    displayName = "Hide corpse";
                    condition = "!(alive _target) && ('ACE_EntrenchingTool' in items _player)";
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(hideCorpse));
                    showDisabled = 0;
                    priority = 1;
                    distance = 4.5;
                    icon = QPATHTOF(ui\icon_shovel.paa);
                };
            };
        };
    };
};
