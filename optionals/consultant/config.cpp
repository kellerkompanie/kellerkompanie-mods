#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            QGVAR(cousinHenningsHatchback)
        };
        weapons[] = {
            "U_Marshal",
            QGVAR(pizza)            
        };
        magazines[] = {};
        requiredAddons[] = {
            "keko_common",
            "A3_Characters_F"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Uniform_Base;
	class U_Marshal: Uniform_Base
	{
		displayName="KMPG Consultant";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(c_poloshirtpants_2_co.paa)
		};
	};

    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class GVAR(pizza) : ACE_ItemCore {
        displayName = "Cousin Henning's Pizza";
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(pizza_item.paa);
        descriptionShort = "Typische Pizza mit Analogkäse und Mandarinen";
    };
};

class CfgUnitInsignia
{
	class GVAR(cousinHenningsPizza)
	{
		displayName = "Cousin Henning's Pizza";
		author = "dth";	
		texture = QPATHTOF(pizza_co.paa);
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};

class CfgVehicles 
{
    class C_Hatchback_01_F;
    class GVAR(cousinHenningsHatchback): C_Hatchback_01_F {
        hiddenSelectionsTextures[]=
		{
			QPATHTOF(hatchback_01_ext_co.paa)
		};
    };
};

class CfgSounds
{
    sounds[] += {QGVAR(guertelIntro), QGVAR(guertelLoop), QGVAR(widerstandMenu), QGVAR(widerstandOption1), QGVAR(widerstandOption2)};

    class GVAR(guertelIntro) {
        name = QGVAR(guertelIntro);
        sound[] = {QPATHTOF(sounds\guertel_intro.ogg), 2, 1};
        titles[] = {};
    };

    class GVAR(guertelLoop) {
        name = QGVAR(guertelLoop);
        sound[] = {QPATHTOF(sounds\guertel_loop.ogg), 2, 1};
        titles[] = {};
    };

    class GVAR(widerstandMenu) {
        name = QGVAR(widerstandMenu);
        sound[] = {QPATHTOF(sounds\widerstand_menu.ogg), 2, 1};
        titles[] = {};
    };

    class GVAR(widerstandOption1) {
        name = QGVAR(widerstandOption1);
        sound[] = {QPATHTOF(sounds\widerstand_option1.ogg), 2, 1};
        titles[] = {};
    };

    class GVAR(widerstandOption2) {
        name = QGVAR(widerstandOption2);
        sound[] = {QPATHTOF(sounds\widerstand_option2.ogg), 2, 1};
        titles[] = {};
    };
};