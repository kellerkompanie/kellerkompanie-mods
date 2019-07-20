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
    class GVAR(moduleAddIntel3den): Module_F {
        scope              = 2;
        scopeCurator       = 1;
        displayName        = CSTRING(addIntel);
        category           = QGVAR(Intel);
        function           = QFUNC(moduleAddIntel3den);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = QPATHTOF(ui\icon_intel.paa);

        class Attributes: AttributesBase {
            class IntelType: Combo {
                property = QGVAR(IntelType);
                displayName = CSTRING(type);
                tooltip = CSTRING(typeTooltip);
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class typeMisc {
                        name = CSTRING(typeMisc);
                        value = 0;
                    };
                    class typeFile {
                        name = CSTRING(typeFile);
                        value = 1;
                    };
                    class typeFileSecret {
                        name = CSTRING(typeFileSecret);
                        value = 2;
                    };
                    class typeDocuments {
                        name = CSTRING(typeDocuments);
                        value = 3;
                    };
                    class typeMap {
                        name = CSTRING(typeMap);
                        value = 4;
                    };
                    class typeFilesSecret {
                        name = CSTRING(typeFilesSecret);
                        value = 5;
                    };
                    class typeLaptop {
                        name = CSTRING(typeLaptop);
                        value = 6;
                    };
                    class typeMoney {
                        name = CSTRING(typeMoney);
                        value = 7;
                    };
                    class typeNotepad {
                        name = CSTRING(typeNotepad);
                        value = 8;
                    };
                    class typePhone {
                        name = CSTRING(typePhone);
                        value = 9;
                    };
                    class typePhoneOld {
                        name = CSTRING(typePhoneOld);
                        value = 10;
                    };
                    class typeTablet {
                        name = CSTRING(typeTablet);
                        value = 11;
                    };
                    class typeTabletRugged {
                        name = CSTRING(typeTabletRugged);
                        value = 12;
                    };
                    class typeWallet {
                        name = CSTRING(typeWallet);
                        value = 13;
                    };
                    class typeChineseCockpit {
                        name = CSTRING(typeChineseCockpit);
                        value = 14;
                    };
                    class typeChineseFile {
                        name = CSTRING(typeChineseFile);
                        value = 15;
                    };
                    class typeNotes {
                        name = CSTRING(typeNotes);
                        value = 16;
                    };
                };
            };
            class Action: Edit {
                property = QGVAR(Action);
                displayName = CSTRING(action);
                tooltip = CSTRING(actionTooltip);
                typeName = "STRING";
                defaultValue = CSTRING(pickupDocuments);
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
                defaultValue = false;
            };
            class Title: Edit {
                property = QGVAR(Title);
                displayName = CSTRING(title);
                tooltip = CSTRING(titleTooltip);
                typeName = "STRING";
                defaultValue = CSTRING(foundDocuments);
            };
            class Content: Edit {
                property = QGVAR(Content);
                displayName = CSTRING(content);
                tooltip = CSTRING(contentTooltip);
                typeName = "STRING";
                defaultValue = CSTRING(contentStr);
            };
            class RemoveObject: Checkbox {
                property = QGVAR(RemoveObject);
                displayName = CSTRING(removeObjectAfter);
                tooltip = CSTRING(removeObjectAfterTooltip);
                typeName = "BOOL";
                defaultValue = false;
            };
            class CodeOnInteraction: Edit {
                property = QGVAR(CodeOnInteraction);
                displayName = CSTRING(codeOnInteraction);
                tooltip = CSTRING(codeOnInteractionTooltip);
                typeName = "STRING";
                defaultValue = "''";
            };
            class OpenMap: Checkbox {
                property = QGVAR(OpenMap);
                displayName = CSTRING(openMap);
                tooltip = CSTRING(openMapTooltip);
                typeName = "BOOL";
                defaultValue = false;
            };
            class ShareWith: Combo {
                property = QGVAR(ShareWith);
                displayName = CSTRING(shareWith);
                tooltip = CSTRING(shareWithTooltip);
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class onlyPlayer {
                        name = CSTRING(onlyPlayer);
                        value = 0;
                    };
                    class group {
                        name = CSTRING(group);
                        value = 1;
                    };
                    class side {
                        name = CSTRING(side);
                        value = 2;
                    };
                    class all {
                        name = CSTRING(all);
                        value = 3;
                    };
                };
            };
        };
    };
    class keko_ModuleAddIntel3den: GVAR(moduleAddIntel3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Intel";
        category           = QEGVAR(common,Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleAddIntel): Module_F {
        displayName        = CSTRING(addIntel);
        icon               = QPATHTOF(ui\icon_intel.paa);
        category           = QGVAR(Intel);
        function           = QFUNC(moduleAddIntel);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        scope              = 1;
        scopeCurator       = 1; // default: 2
        curatorCanAttach   = 1;
    };

    // Remove Bohemia's default intel objects
    class Land_File1_F;
    class Land_File2_F;
    class Land_Photos_V3_F;
    class Intel_File1_F: Land_File1_F {
        scope = 0;
        scopeCurator = 0;
    };
    class Intel_File2_F: Land_File2_F {
        scope = 0;
        scopeCurator = 0;
    };
    class Intel_Photos_F: Land_Photos_V3_F {
        scope = 0;
        scopeCurator = 0;
    };
};
