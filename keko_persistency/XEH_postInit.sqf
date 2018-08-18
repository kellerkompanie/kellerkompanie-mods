if !(keko_settings_persistency_enabled) exitWith{diag_log text "[KEKO] (persistency) preInit: persistency disabled, exiting!"; false};
if (keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) preInit: persistency key not set, exiting!"; false};

diag_log text "[KEKO] (persistency) running XEH_postInit";
