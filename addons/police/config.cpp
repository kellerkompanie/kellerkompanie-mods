#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
        weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
        	"3den",
        	"cba_main",
        	"cba_keybinding",
        	"cba_settings",
            "ace_main"};
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgSounds.hpp"

#include "defines.hpp"
#include "ui\dialog_policeSettings.hpp"
