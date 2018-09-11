// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"cba_main",
      		"cba_settings",
      		"cba_xeh",
			"A3_Modules_F",
			"ace_interaction",
			"ace_common",
			"ace_refuel"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG; 
	};
};