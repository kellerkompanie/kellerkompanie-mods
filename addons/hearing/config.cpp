#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = COMPONENT_NAME;
		units[]= {};
        weapons[] = {};
		requiredVersion= REQUIRED_VERSION;
		requiredAddons[]= {"ace_hearing"};
		author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"