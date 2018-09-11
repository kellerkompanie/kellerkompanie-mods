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

class Extended_InventoryOpened_EventHandlers {
	class CAManBase {
		class ADDON {
			clientInventoryOpened = "if (_this select 0 == ACE_player) then {_this call keko_backpack_fnc_onOpenInventory};";
		};
	};
};