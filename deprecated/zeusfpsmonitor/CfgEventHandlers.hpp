class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        serverInit = QUOTE(call COMPILE_FILE(XEH_preInitServer));
        disableModuload = 1;
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
        disableModuload = 1;
    };
};
