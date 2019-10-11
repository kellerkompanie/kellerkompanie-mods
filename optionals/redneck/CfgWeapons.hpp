class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class InventoryItem_Base_F;

    class GVAR(mechanicMagazine1) : ACE_ItemCore {
        displayName = "Mechanics 101";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\item_mechanic1.paa);
        descriptionShort = "With this exciting magazine you can learn simple mechanical stuff, like changing a tire.";
    };
    class GVAR(mechanicMagazine2) : ACE_ItemCore {
        displayName = "Mechanics Compendium";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\item_mechanic2.paa);
        descriptionShort = "A full encyclopedia on all mechanical stuff. After reading this you will have an engineering degree.";
    };
    class GVAR(medicMagazine1) : ACE_ItemCore {
        displayName = "Medicine 101";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\item_medic1.paa);
        descriptionShort = "With this exciting magazine you can learn simple medical stuff, like stiching wounds and laying IVs.";
    };
    class GVAR(medicMagazine2) : ACE_ItemCore {
        displayName = "Medicine Compendium";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\item_medic2.paa);
        descriptionShort = "A full encyclopedia on all medical stuff. After reading this you will have a medical degree.";
    };


    /* Base Building Extensions */

    class GVAR(baseExtensionHouse1) : ACE_ItemCore {
        displayName = "Haus Stufe 1";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Erweitert das Haus in der Base auf Stufe 1.";
    };
    class GVAR(baseExtensionHouse2) : ACE_ItemCore {
        displayName = "Haus Stufe 2";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Erweitert das Haus in der Base auf Stufe 2.";
    };
    class GVAR(baseExtensionSafezone1) : ACE_ItemCore {
        displayName = "Safezone Stufe 1";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Erweitert die Größe der Safezone der Base auf Stufe 1.";
    };
    class GVAR(baseExtensionSafezone2) : ACE_ItemCore {
        displayName = "Safezone Stufe 2";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Erweitert die Größe der Safezone der Base auf Stufe 2.";
    };
    class GVAR(baseExtensionSafezone3) : ACE_ItemCore {
        displayName = "Safezone Stufe 3";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Erweitert die Größe der Safezone der Base auf Stufe 3.";
    };
    class GVAR(baseExtensionGarage) : ACE_ItemCore {
        displayName = "Garage";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Eine Garage wird an das Haus angebaut.";
    };
    class GVAR(baseExtensionATM) : ACE_ItemCore {
        displayName = "ATM";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Ein Geldautomat wird in die Base gestellt.";
    };
    class GVAR(baseExtensionHelipad) : ACE_ItemCore {
        displayName = "Helipad";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Ein Helipad wird ans Haus angebaut.";
    };
    class GVAR(baseExtensionBFT) : ACE_ItemCore {
        displayName = "Blue Force Tracking System";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        descriptionShort = "Ein Blue Force Tracking System wird installiert.";
    };





    class GVAR(itemIcecubes) : ACE_ItemCore {
        displayName = "Ice Cubes";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\icecubes.paa);
        descriptionShort = "A stash of high quality ice cubes.";
    };
    class GVAR(itemBeer) : ACE_ItemCore {
        displayName = "Beer (sort of)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\beer.paa);
        descriptionShort = "Well... it's says beer on the label... but I am not quite sure if that's correct, looks cheap.";
    };
    class GVAR(itemBrick) : ACE_ItemCore {
        displayName = "Bricks";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\bricks.paa);
        descriptionShort = "Nobody has the intention to build a wall.";
    };
    class GVAR(itemBoards) : ACE_ItemCore {
        displayName = "Wooden Planks";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\boards.paa);
        descriptionShort = "We could build some quality priate ships out of this planks. ARRR!";
    };
    class GVAR(itemScrap) : ACE_ItemCore {
        displayName = "Scrap Metal";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\metall.paa);
        descriptionShort = "Some rusty old metal scraps.";
    };





    class SMA_AssaultBase;
    class UGL_F;
    class SMA_M4_BASE;
    class SMA_MK16;
    class SMA_MK17;
    class SMA_ACRREM_BASE;
    class SMA_MK18_BASE;
    class SMA_HK416_BASE;
    class SMA_A3_BASE_F;
    class SMA_556_RIFLEBASE: SMA_AssaultBase
    {
        scope = 1;
        magazines[] += {"rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
    };
    class SMA_762_RIFLEBASE: SMA_AssaultBase
    {
        scope = 1;
        magazines[] += {"20Rnd_762x51_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };
    class SMA_M4_GL: SMA_M4_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_M4_GL_SM: SMA_M4_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_Mk16_EGLM: SMA_MK16
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_Mk17_EGLM: SMA_MK17
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRGL: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRGL_B: SMA_ACRGL
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMGL: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMGL_B: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMCQBGL: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMCQBGL_B: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMGL_N: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMGL_B_N: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMCQBGL_N: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_ACRREMCQBGL_B_N: SMA_ACRREM_BASE
    {
        class ACR_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416GL: SMA_HK416_BASE
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416GLOD: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416CQBGLOD: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416_GL_ODPAINTED: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416GLCQB: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416GLCQB_B: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_HK416GLCQB_ODP: SMA_HK416GL
    {
        class HK_GL: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18TANBLK_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18TANBLK_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18TAN_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18TAN_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18BLK_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18BLK_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18ODBLK_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18ODBLK_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18OD_GL: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_MK18OD_GL_SM: SMA_MK18_BASE
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_AUG_EGLM: SMA_A3_BASE_F
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_AUG_EGLM_Olive: SMA_AUG_EGLM
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class SMA_AUG_EGLM_tan: SMA_AUG_EGLM
    {
        class EGLM: UGL_F
        {
            magazines[] += {"rhs_mag_m4009","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m716_yellow","rhs_mag_M781_Practice"};
        };
    };
    class arifle_MX_Base_F;
    class LMG_Mk200_F;
    class rhs_weap_saw_base;
    class rhs_weap_m4_Base: arifle_MX_Base_F
    {
        magazines[] += {"SMA_30Rnd_556x45_M855A1_IR","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_Mk262_IR","SMA_30Rnd_556x45_Mk262","SMA_30Rnd_556x45_Mk262_Tracer","SMA_30Rnd_556x45_Mk318_IR","SMA_30Rnd_556x45_Mk318_Tracer","SMA_30Rnd_556x45_Mk318"};
    };
    class rhs_weap_M249_base;
    class rhs_weap_m240_base: rhs_weap_M249_base
    {
        scope = 1;
        magazines[] += {"SMA_150Rnd_762_M80A1","SMA_150Rnd_762_M80A1_Tracer","SMA_150Rnd_762_M80A1_Mixed"};
    };
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base
    {
        magazines[] += {"SMA_30Rnd_556x45_M855A1_IR","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_Mk262_IR","SMA_30Rnd_556x45_Mk262","SMA_30Rnd_556x45_Mk262_Tracer","SMA_30Rnd_556x45_Mk318_IR","SMA_30Rnd_556x45_Mk318_Tracer","SMA_30Rnd_556x45_Mk318"};
    };
};
