class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
        };
    };
    class GVAR(moduleBase): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 1;
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
    class GVAR(moduleBase3den): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 2;
        scopeCurator       = 1;
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class GVAR(moduleAddTeleportDestination3den): GVAR(moduleBase3den) {
        displayName        = "Add Fast-Travel Destination";
        category           = QGVAR(Teleport);
        function           = QFUNC(moduleAddTeleportDestination3den);
        icon = QPATHTOF(ui\icon_teleport_dest.paa);

        class Arguments: ArgumentsBaseUnits {
            class teleportDestination {
                displayName = "Destination name";
                description = "The name of the Fast-Travel destination";
                typeName = "STRING";
            };
            class allowBLUFOR {
                displayName = "BLUFOR";
                description = "Allow BLUFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowINDFOR {
                displayName = "INDFOR";
                description = "Allow INDFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowOPFOR {
                displayName = "OPFOR";
                description = "Allow OPFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowCIV {
                displayName = "Civilian";
                description = "Allow Civilian to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
        };
    };
    class keko_ModuleAddTeleportDestination3den: GVAR(moduleAddTeleportDestination3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Fast-Travel Destination";
        category           = QEGVAR(common,Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleAddTeleportMenu3den): GVAR(moduleBase3den) {
        displayName        = "Add Fast-Travel Menu";
        category           = QGVAR(Teleport);
        function           = QFUNC(moduleAddTeleportMenu3den);
        icon = QPATHTOF(ui\icon_teleport_menu.paa);

        class Arguments: ArgumentsBaseUnits {
            class allowBLUFOR {
                displayName = "BLUFOR";
                description = "Allow BLUFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowINDFOR {
                displayName = "INDFOR";
                description = "Allow INDFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowOPFOR {
                displayName = "OPFOR";
                description = "Allow OPFOR to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class allowCIV {
                displayName = "Civilian";
                description = "Allow Civilian to travel here.";
                typeName = "BOOL";
                defaultValue = 1;
            };
        };
    };
    class keko_ModuleAddTeleportMenu3den: GVAR(moduleAddTeleportMenu3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Add Fast-Travel Menu";
        category           = QEGVAR(common,Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleAddTeleportDestination): GVAR(moduleBase) {
        displayName        = "Add Fast-Travel Destination";
        category           = QGVAR(Teleport);
        function           = QFUNC(moduleAddTeleportDestination);
        icon               = QPATHTOF(ui\icon_teleport_dest.paa);
    };
    class GVAR(moduleAddTeleportMenu): GVAR(moduleBase) {
        displayName        = "Add Fast-Travel Menu";
        category           = QGVAR(Teleport);
        function           = QFUNC(moduleAddTeleportMenu);
        icon               = QPATHTOF(ui\icon_teleport_menu.paa);
        curatorCanAttach   = 1;
    };
};
