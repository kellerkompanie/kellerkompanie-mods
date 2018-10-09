class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
		serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
	};
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE(_this call COMPILE_FILE(XEH_initPlayerServer));
        };
    };
};
