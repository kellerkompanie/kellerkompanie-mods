class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class EventHandlers;
        class ModuleDescription;

        class AttributesBase
        {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };
    };
    class GVAR(moduleAddInteraction3den): Module_F {
        scope              = 2;
        scopeCurator       = 1;
        displayName        = CSTRING(addInteraction);
        category           = QGVAR(Interaction);
        function           = QFUNC(moduleAddInteraction3den);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = QPATHTOF(ui\icon_interaction.paa);

        class Attributes: AttributesBase {
            class InteractionType: Combo {
                property = QGVAR(InteractionType);
                displayName = CSTRING(type);
                tooltip = CSTRING(typeTooltip);
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class holdaction_connect {
                        name = CSTRING(holdaction_connect);
                        value = 0;
                    };
                    class holdaction_forcerespawn {
                        name = CSTRING(holdaction_forcerespawn);
                        value = 1;
                    };
                    class holdaction_hack {
                        name = CSTRING(holdaction_hack);
                        value = 2;
                    };
                    class holdaction_loaddevice {
                        name = CSTRING(holdaction_loaddevice);
                        value = 3;
                    };
                    class holdaction_passleadership {
                        name = CSTRING(holdaction_passleadership);
                        value = 4;
                    };
                    class holdaction_requestleadership {
                        name = CSTRING(holdaction_requestleadership);
                        value = 5;
                    };
                    class holdaction_revive {
                        name = CSTRING(holdaction_revive);
                        value = 6;
                    };
                    class holdaction_revivemedic {
                        name = CSTRING(holdaction_revivemedic);
                        value = 7;
                    };
                    class holdaction_search {
                        name = CSTRING(holdaction_search);
                        value = 8;
                    };
                    class holdaction_secure {
                        name = CSTRING(holdaction_secure);
                        value = 9;
                    };
                    class holdaction_takeoff1 {
                        name = CSTRING(holdaction_takeoff1);
                        value = 10;
                    };
                    class holdaction_takeoff2 {
                        name = CSTRING(holdaction_takeoff2);
                        value = 11;
                    };
                    class holdaction_thumbsdown {
                        name = CSTRING(holdaction_thumbsdown);
                        value = 12;
                    };
                    class holdaction_thumbsup {
                        name = CSTRING(holdaction_thumbsup);
                        value = 13;
                    };
                    class holdaction_unbind {
                        name = CSTRING(holdaction_unbind);
                        value = 14;
                    };
                    class holdaction_unloaddevice {
                        name = CSTRING(holdaction_unloaddevice);
                        value = 15;
                    };
                };
            };
            class Action: Edit {
                property = QGVAR(Action);
                displayName = CSTRING(action);
                tooltip = CSTRING(actionTooltip);
                typeName = "STRING";
                defaultValue = CSTRING(interact);
            };
            class Duration: Edit {
                property = QGVAR(Duration);
                displayName = CSTRING(actionDuration);
                tooltip = CSTRING(actionDurationTooltip);
                typeName = "SCALAR";
                defaultValue = 0.5;
            };
            class RemoveAction: Checkbox {
                property = QGVAR(RemoveAction);
                displayName = CSTRING(removeActionAfter);
                tooltip = CSTRING(removeActionAfterTooltip);
                typeName = "BOOL";
                defaultValue = 0;
            };
            class RemoveObject: Checkbox {
                property = QGVAR(RemoveObject);
                displayName = CSTRING(removeObjectAfter);
                tooltip = CSTRING(removeObjectAfterTooltip);
                typeName = "BOOL";
                defaultValue = 0;
            };
            class Condition: Edit {
                property = QGVAR(Condition);
                displayName = CSTRING(condition);
                tooltip = CSTRING(conditionTooltip);
                typeName = "STRING";
                defaultValue = "'true'";
            };
            class CodeOnInteraction: Edit {
                property = QGVAR(CodeOnInteraction);
                displayName = CSTRING(codeOnInteraction);
                tooltip = CSTRING(codeOnInteractionTooltip);
                typeName = "STRING";
                defaultValue = "''";
            };
        };
    };
};
