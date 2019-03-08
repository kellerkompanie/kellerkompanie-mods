class RscDisplayAttributesMan: RscDisplayAttributes {
    scriptName = "RscDisplayAttributesMan";
    scriptPath = "keko_zeus_Displays";
    onLoad = "['onLoad',_this,'RscDisplayAttributesMan','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RscDisplayAttributesMan','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";

    class Controls: Controls {
        class Content: Content {
            class Controls: controls {
                delete Rank;
                delete UnitPos;
                delete Damage;
                delete Skill;
                delete RespawnPosition;
                delete Exec;

                class Name: RscAttributeName {};
                class Rank2: RscAttributeRank {};
                class UnitPos2: RscAttributeUnitPos {};
                class Damage2: RscAttributeDamage {};
                class Ammo: RscAttributeAmmo {};
                class Skill2: RscAttributeSkill {};
                class RespawnPosition2: RscAttributeRespawnPosition {};
                class Exec2: RscAttributeExec {};
            };
        };

        class ButtonBehaviour : ButtonCustom {
            text = "$STR_keko_zeus_SKILL";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeSkills";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonCargo : ButtonCustomLeft {
            text = "$STR_keko_zeus_ARSENAL";
            onMouseButtonClick = "(findDisplay -1) closeDisplay 1; \
                                [BIS_fnc_initCuratorAttributes_target, BIS_fnc_initCuratorAttributes_target, true] call ace_arsenal_fnc_openBox;\
                                ['ace_arsenal_displayClosed', {\
                                    _thisArgs params ['_template_unit'];\
                                    _loadout = getUnitLoadout _template_unit; \
                                    _curatorSelected = ['man'] call keko_zeus_fnc_getCuratorSelected; \
                                    {_x setUnitLoadout _loadout} forEach _curatorSelected; \
                                    ['ace_arsenal_displayClosed', _thisId] call CBA_fnc_removeEventHandler;\
                                }, BIS_fnc_initCuratorAttributes_target] call CBA_fnc_addEventHandlerArgs;";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonFlag : ButtonCustomLeft2 {
            text = "$STR_keko_zeus_ACCESSORY";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeAccessoires";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
    };
};
