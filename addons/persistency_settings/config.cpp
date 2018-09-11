#include "script_component.hpp"

class CfgPatches {
	class ADDON
	{
		name = COMPONENT_NAME;
		units[] = {
			QGVAR(modulePersistencyBlacklist3den)
		};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"cba_main",
			"cba_settings",
			"cba_xeh",
			"3den",
			"A3_Modules_F",
			"A3_Modules_F_Curator"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG; 
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"