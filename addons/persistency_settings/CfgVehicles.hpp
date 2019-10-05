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

                expression = "_this setVariable ['%s',_value];";
            };
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
    class GVAR(moduleBase3den): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        scope = 2;
        scopeCurator = 1;
    };

    class GVAR(moduleAddPersistencyMenu3den): GVAR(moduleBase3den) {
        displayName        = "Add Persistency Menu";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleAddPersistencyMenu3den);
    };
    class GVAR(modulePersistencyBlacklist3den): GVAR(moduleBase3den) {
        displayName        = "Blacklist Object";
        category           = QGVAR(Persistency);
        function           = QFUNC(modulePersistencyBlacklist3den);
    };
    class GVAR(moduleSelectivePersistency3den): GVAR(moduleBase3den) {
        displayName        = "Enable Selective Persistency";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleSelectivePersistency3den);
    };

    class GVAR(moduleAddPersistencyMenu): GVAR(moduleBase) {
        displayName        = "Add Persistency Menu";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleAddPersistencyMenu);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleManualSave): GVAR(moduleBase) {
        displayName        = "Manual Save (everything)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualSave);
    };
    class GVAR(moduleManualLoad): GVAR(moduleBase) {
        displayName        = "Manual Load (everything)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualLoad);
    };
    class GVAR(moduleEnablePersistency): GVAR(moduleBase) {
        displayName        = "Enable Persistency - Object";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleEnablePersistency);
        curatorCanAttach   = 1;
    };

    class GVAR(moduleManualSaveCrates): GVAR(moduleBase) {
        displayName        = "Manual Save (crates)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualSaveCrates);
    };
    class GVAR(moduleManualLoadCrates): GVAR(moduleBase) {
        displayName        = "Manual Load (crates)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualLoadCrates);
    };

    class GVAR(moduleManualSaveVehicles): GVAR(moduleBase) {
        displayName        = "Manual Save (vehicles)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualSaveVehicles);
    };
    class GVAR(moduleManualLoadVehicles): GVAR(moduleBase) {
        displayName        = "Manual Load (vehicles)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualLoadVehicles);
    };

    class GVAR(moduleManualSavePlayers): GVAR(moduleBase) {
        displayName        = "Manual Save (players)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualSavePlayers);
    };
    class GVAR(moduleManualLoadPlayers): GVAR(moduleBase) {
        displayName        = "Manual Load (players)";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleManualLoadPlayers);
    };

    class GVAR(moduleEditMoney): GVAR(moduleBase) {
        displayName        = "Edit Money";
        category           = QGVAR(Persistency);
        function           = QFUNC(moduleEditMoney);
        curatorCanAttach   = 1;
    };
};
