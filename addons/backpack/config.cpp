#include "script_component.hpp"

class CfgPatches {
	class ADDON	{
		name = COMPONENT_NAME;
		units[] = {};		
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"cba_main",
			"cba_settings",
			"cba_xeh",
			"ace_main"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG; 		
	};
};

#include "CfgEventHandlers.hpp"
