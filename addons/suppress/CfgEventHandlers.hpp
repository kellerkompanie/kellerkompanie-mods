class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        disableModuload = true;
    };
};

class Extended_FiredBIS_EventHandlers {
    class AllVehicles {
        class ADDON {
            clientFiredBIS = QUOTE(_this call FUNC(fired));
        };
    };
};
