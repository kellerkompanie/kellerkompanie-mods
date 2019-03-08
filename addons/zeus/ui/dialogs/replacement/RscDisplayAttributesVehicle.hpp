class RscDisplayAttributesVehicle : RscDisplayAttributes {
    scriptName = "RscDisplayAttributesVehicle";
    scriptPath = "keko_zeus_Displays";
    onLoad = "['onLoad',_this,'RscDisplayAttributesVehicle','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RscDisplayAttributesVehicle','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";

    class Controls : Controls {
        class Content: Content {
            class Controls: controls {
                // Trick to get attributes in the right order
                delete Skill;
                delete Lock;
                delete RespawnVehicle;
                delete RespawnPosition;
                delete Exec;

                class Ammo: RscAttributeAmmo {};
                class Skill2: RscAttributeSkill {};
                class Lock2: RscAttributeLock {};
                class Headlight: RscAttributeHeadlight {};
                class Engine: RscAttributeEngine {};
                class RespawnVehicle2: RscAttributeRespawnVehicle {};
                class RespawnPosition2: RscAttributeRespawnPosition {};
                class Exec2: RscAttributeExec {};
            };
        };
        class ButtonBehaviour : ButtonCustom {
            text = "$STR_keko_zeus_GARAGE";
            onMouseButtonClick = "(findDisplay -1) closeDisplay 1; \
                                 ['Open', [false, BIS_fnc_initCuratorAttributes_target]] call BIS_fnc_garage";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonCargo : ButtonCustomLeft {
            text = "$STR_keko_zeus_CARGO";
            onMouseButtonClick = "createdialog 'RscDisplayAttributesInventory'";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonAmmo : ButtonCustomLeftBelow {
            text = "$STR_keko_zeus_LOADOUT";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changePylonAmmo;";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonDamage : ButtonCustomBelow {
            text = "$STR_keko_zeus_DAMAGE";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_damageComponents";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonSensors : ButtonCustomLeft2 {
            text = "$STR_keko_zeus_SENSORS";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_setSensors";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonFlag : ButtonCustomLeftBelow2 {
            text = "$STR_keko_zeus_ACCESSORY";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeAccessoires";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
    };
};

// assign custom buttons in empty vehicle edit interface
class RscDisplayAttributesVehicleEmpty : RscDisplayAttributes {
    scriptName = "RscDisplayAttributesVehicle";
    scriptPath = "keko_zeus_Displays";
    onLoad = "['onLoad',_this,'RscDisplayAttributesVehicle','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RscDisplayAttributesVehicle','keko_zeus_Displays'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";

    class Controls : Controls {
        class Content: Content {
            class Controls: controls {
                // Trick to get attributes in the right order
                delete Lock;
                delete RespawnVehicle;
                delete RespawnPosition;
                delete Exec;

                class Ammo: RscAttributeAmmo {};
                class Lock2: RscAttributeLock {};
                class Headlight: RscAttributeHeadlight {};
                class Engine: RscAttributeEngine {};
                class RespawnVehicle2: RscAttributeRespawnVehicle {};
                class RespawnPosition2: RscAttributeRespawnPosition {};
                class Exec2: RscAttributeExec {};
            };
        };
        class ButtonBehaviour : ButtonCustom {
            text = "$STR_keko_zeus_GARAGE";
            onMouseButtonClick = "(findDisplay -1) closeDisplay 1; \
                                 ['Open', [false, BIS_fnc_initCuratorAttributes_target]] call BIS_fnc_garage";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonCargo : ButtonCustomLeft {
            text = "$STR_keko_zeus_CARGO";
            onMouseButtonClick = "createDialog 'RscDisplayAttributesInventory'";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonAmmo : ButtonCustomLeftBelow {
            text = "$STR_keko_zeus_LOADOUT";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changePylonAmmo;";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonDamage : ButtonCustomBelow {
            text = "$STR_keko_zeus_DAMAGE";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_damageComponents";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonSensors : ButtonCustomLeft2 {
            text = "$STR_keko_zeus_SENSORS";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_setSensors";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class ButtonFlag : ButtonCustomLeftBelow2 {
            text = "$STR_keko_zeus_ACCESSORY";
            onMouseButtonClick = "[BIS_fnc_initCuratorAttributes_target] spawn keko_zeus_fnc_changeAccessoires";
            colorBackground[] = {0.518,0.016,0,0.8};
        };
    };
};
