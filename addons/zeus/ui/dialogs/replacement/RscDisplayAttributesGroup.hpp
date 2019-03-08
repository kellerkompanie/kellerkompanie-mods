class RscDisplayAttributesGroup: RscDisplayAttributes
{
    scriptName = "RscDisplayAttributesGroup";
    scriptPath = "keko_zeus_Displays";
    onLoad = "['onLoad',_this,'RscDisplayAttributesGroup','keko_zeus_Displays'] call     (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RscDisplayAttributesGroup','keko_zeus_Displays'] call     (uinamespace getvariable 'BIS_fnc_initDisplay')";

    class Controls : Controls
    {
        class Content: Content
        {
            class Controls: controls
            {
                delete GroupID;
                delete Skill;
                delete Formation;
                delete Behaviour;
                delete SpeedMode;
                delete UnitPos;
                delete RespawnPosition;

                class GroupID2: RscAttributeGroupID2 {};
                class Skill2: RscAttributeSkill {};
                class Formation2: RscAttributeFormation {};
                class Behaviour2: RscAttributeBehaviour {};
                class CombatMode2: RscAttributeCombatMode {};
                class SpeedMode2: RscAttributeSpeedMode {};
                class UnitPos2: RscAttributeUnitPos {};
                class RespawnPosition2: RscAttributeRespawnPosition
                {
                    class Controls: controls
                    {
                        class Title: Title
                        {
                            text = "$STR_A3_RscAttributeRespawnPosition_TitleGroup";
                        };

                        class Background: Background {};
                        class West: West {};
                        class East: East {};
                        class Guer: Guer {};
                        class Civ: Civ {};
                        class Disabled: Disabled {};
                    };
                };
            };
        };

        class ButtonBehaviour : ButtonCustom
        {
            text = "$STR_keko_zeus_SKILL";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeSkills";
            colorBackground[] = {0.518,0.016,0,0.8};
        };

        class ButtonSide : ButtonCustomLeft
        {
            text = "$STR_keko_zeus_SIDE";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeSideAttribute";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
    };
};
