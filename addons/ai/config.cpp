class CfgPatches
{
    class keko_ai
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_main",
            "cba_settings",
            "cba_xeh"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgDifficulty.hpp"
#include "CfgAISkill.hpp"
#include "CfgSurfaces.hpp"