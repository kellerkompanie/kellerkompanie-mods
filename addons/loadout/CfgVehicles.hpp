class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits;
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

            expression = "_this setVariable ['%s',_value];";
        };
    };
    class GVAR(moduleBase): Module_F {
        author = ECSTRING(common,Schwaggot);
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 1;
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
    class GVAR(moduleBase3den): Module_F {
        author = ECSTRING(common,Schwaggot);
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 2;
        scopeCurator       = 1;
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class GVAR(moduleAddLoadoutMenu3den): GVAR(moduleBase3den) {
        displayName        = "Add Loadout Menu";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadoutMenu3den);
        icon = QPATHTOF(ui\icon_loadout_menu.paa);
    };
    class keko_ModuleAddLoadoutMenu3den: GVAR(moduleAddLoadoutMenu3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Loadout Menu";
        category           = QEGVAR(common,Deprecated);
    };
    class GVAR(moduleAddLoadoutMenu): GVAR(moduleBase) {
        displayName        = "Add Loadout Menu";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadoutMenu);
        icon                = QPATHTOF(ui\icon_loadout_menu.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleCustomLoadouts3den): GVAR(moduleBase3den) {
        displayName        = "Custom Loadouts";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleCustomLoadouts3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);
    };
    class keko_ModuleCustomLoadouts3den: GVAR(moduleCustomLoadouts3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Custom Loadouts";
        category           = QEGVAR(common,Deprecated);
    };
    class GVAR(moduleAddLoadouts3den): GVAR(moduleBase3den) {
        displayName        = "Add Loadouts";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleAddLoadouts3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);
        scopeCurator = 1;
    };
    class GVAR(moduleModifyLoadout3den): GVAR(moduleBase3den) {
        displayName        = "Modify Loadout";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleModifyLoadout3den);
        icon = QPATHTOF(ui\icon_loadouts.paa);

        class Attributes: AttributesBase {
            class ReplaceUniform: Edit {
                property = "ReplaceUniform";
                displayName = "Replace uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceVest: Edit {
                property = "ReplaceVest";
                displayName = "Replace vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceBackpack: Edit {
                property = "ReplaceBackpack";
                displayName = "Replace backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceHelmet: Edit {
                property = "ReplaceHelmet";
                displayName = "Replace helmet";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class ReplaceGoggles: Edit {
                property = "ReplaceGoggles";
                displayName = "Replace goggles";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class AddToUniform: Edit {
                property = "AddToUniform";
                displayName = "Add items to uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class AddToVest: Edit {
                property = "AddToVest";
                displayName = "Add items to vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class AddToBackpack: Edit {
                property = "AddToBackpack";
                displayName = "Add items to backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class RemoveFromUniform: Edit {
                property = "RemoveFromUniform";
                displayName = "Remove items from uniform";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class RemoveFromVest: Edit {
                property = "RemoveFromVest";
                displayName = "Remove items from vest";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };
            class RemoveFromBackpack: Edit {
                property = "RemoveFromBackpack";
                displayName = "Remove items from backpack";
                tooltip = "List of classnames without quotes: classname1,classname2,...";
                typeName = "STRING";
                defaultValue = "''";
            };

            class ModuleDescription: ModuleDescription{};
        };
    };

    class GVAR(moduleApplyLoadout): GVAR(moduleBase) {
        displayName        = "Apply Loadout";
        category           = QGVAR(Loadout);
        function           = QFUNC(moduleApplyLoadout);
        icon = QPATHTOF(ui\icon_change_loadout.paa);
        curatorCanAttach   = 1;
    };
};
