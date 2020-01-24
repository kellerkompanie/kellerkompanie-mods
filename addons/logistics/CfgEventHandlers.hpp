class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
        disableModuload = true;
    };
};

class Extended_InitPost_EventHandlers {
    class ReammoBox_F {
        class ADDON {
            init = QUOTE(_this call FUNC(convertCustomCrate));
        };
    };
};
