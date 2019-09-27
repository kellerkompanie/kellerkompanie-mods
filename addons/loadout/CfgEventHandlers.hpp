class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        disableModuload = true;
    };
};

class Extended_InitPost_EventHandlers {
    class keko_faction_generic_blufor_soldier {
        class ADDON {
            init = QUOTE(_this call FUNC(convertCustomLoadout));
        };
    };
    class keko_faction_generic_indfor_soldier {
        class ADDON {
            init = QUOTE(_this call FUNC(convertCustomLoadout));
        };
    };
    class keko_faction_generic_opfor_soldier {
        class ADDON {
            init = QUOTE(_this call FUNC(convertCustomLoadout));
        };
    };
};
