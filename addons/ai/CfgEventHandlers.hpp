class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        serverInit = QUOTE(call COMPILE_FILE(XEH_preInitServer));
        disableModuload = true;
    };
};

class Extended_InitPost_EventHandlers {
    class Wheeled_APC_F {
        init = "(_this select 0) allowCrewInImmobile true";
    };
    class Tank {
        init = "(_this select 0) allowCrewInImmobile true";
    };
};
