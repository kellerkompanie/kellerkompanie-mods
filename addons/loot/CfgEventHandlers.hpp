class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
    };
};

class Extended_Init_EventHandlers {
    class WeaponHolder {
        class ADDON {
            init = QUOTE(_this call FUNC(initObject));
        };
    };
    class WeaponHolderSimulated {
        class ADDON {
            init = QUOTE(_this call FUNC(initObject));
        };
    };
    class GroundWeaponHolder {
        class ADDON {
            init = QUOTE(_this call FUNC(initObject));
        };
    };
};
