class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
<<<<<<< HEAD
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
    };
};

class Extended_Init_EventHandlers {
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
=======
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        disableModuload = true;
    };
};
>>>>>>> ff19bf143d7f7f134cc0d9a6e268a197dbd9fa3f
