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
            "ace_main"};
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgSounds.hpp"
