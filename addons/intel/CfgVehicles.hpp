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
            class Action: Edit {
                property = QGVAR(Action);
                displayName = CSTRING(action);
                typeName = "STRING";
                defaultValue = CSTRING(pickupDocuments);
            };
            class Title: Edit {
                property = QGVAR(Title);
                displayName = CSTRING(title);
                typeName = "STRING";
                defaultValue = CSTRING(foundDocuments);
            };
            class Content: Edit {
                property = QGVAR(Content);
                displayName = CSTRING(content);
                typeName = "STRING";
                defaultValue = CSTRING(contentStr);
            };
            class Remove: Checkbox {
                property = QGVAR(Remove);
                displayName = CSTRING(removeAfter);
                typeName = "BOOL";
                defaultValue = false;
            };
        };
    };
    class keko_ModuleAddIntel3den: GVAR(moduleAddIntel3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Intel";
        category           = QEGVAR(common,Deprecated);
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
        scopeCurator       = 2;
        curatorCanAttach   = 1;
    };

    // Remove Bohemia Default Intel Interactions
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
