class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class EventHandlers;
        class ModuleDescription;

        class AttributesBase {
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

    class ModuleEndMission_F : Module_F {
        scopeCurator = 1;
        scope = 1;
    };

    class GVAR(moduleBase): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class GVAR(moduleRunGarbageCollection): GVAR(moduleBase)    {
        displayName        = "Run Garbage Collection";
        category           = QGVAR(default);
        function           = QFUNC(moduleRunGarbageCollection);
    };
    class GVAR(moduleBlacklist): GVAR(moduleBase)    {
        displayName        = "Blacklist object";
        category           = QGVAR(default);
        function           = QFUNC(moduleBlacklist);
        curatorCanAttach   = 1;
    };
};
