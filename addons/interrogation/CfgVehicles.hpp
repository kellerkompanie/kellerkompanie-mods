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

    class GVAR(moduleSurrenderAndInterrogate3den): GVAR(moduleBase3den) {
        displayName        = "Surrender and Interrogate";
        category           = QGVAR(Interrogation);
        function           = QFUNC(moduleSurrenderAndInterrogate3den);
        icon = QPATHTOF(ui\icon_waterboarding.paa);

        class Attributes: AttributesBase {
            class DeadThreshold: Edit {
                property = "DeadThreshold";
                displayName = "Remaining strength threshold";
                tooltip = "If the strength of the group (remaining survivors) falls below this threshold, the remaining survivors start thinking about surrender (value in percent).";
                typeName = "SCALAR";
                defaultValue = 0.25;
            };
            class SurrenderChance: Edit {
                property = "SurrenderChance";
                displayName = "Surrender chance";
                tooltip = "If the strength threshold is met, how high is the chance that one of the survivors surrenders (value in percent).";
                typeName = "SCALAR";
                defaultValue = 0.6;
            };
            class OnSurrenderCode: Edit {
                property = "OnSurrenderCode";
                displayName = "Server execute onSurrender";
                tooltip = "Code to be executed once a unit surrenders, the surrendered unit can be referenced as _unit.";
                typeName = "STRING";
                defaultValue = "''";
            };
            class OnInterrogateCode: Edit {
                property = "OnInterrogateCode";
                displayName = "Server execute onInterrogation";
                tooltip = "Code to be executed once a unit is being interrogated. The unit can be referenced as _unit and the interrogating player as _interrogator.";
                typeName = "STRING";
                defaultValue = "''";
            };
            class OnDeathCode: Edit {
                property = "OnDeathCode";
                displayName = "Server execute onDeath";
                tooltip = "Code to be executed on death of the unit, which can be referenced as _unit. The state of surrender can be referenced using _hasSurrendered.";
                typeName = "STRING";
                defaultValue = "''";
            };

            class ModuleDescription: ModuleDescription{};
        };
    };
};