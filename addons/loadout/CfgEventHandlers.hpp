class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = 1;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        disableModuload = 1;
    };
};

class Extended_Init_EventHandlers {
    class keko_faction_generic_blufor_soldier {
        class ADDON {
            init = QUOTE(GVAR(customLoadoutUnitsQueue) pushBack _this);
        };
    };
    class keko_faction_generic_indfor_soldier {
        class ADDON {
            init = QUOTE(GVAR(customLoadoutUnitsQueue) pushBack _this);
        };
    };
    class keko_faction_generic_opfor_soldier {
        class ADDON {
            init = QUOTE(GVAR(customLoadoutUnitsQueue) pushBack _this);
        };
    };
};
