class CfgWeapons {

    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class keko_RifleMag: CBA_MiscItem {
        author = "Schwaggot";
        scope = 2;
        displayName = "Rifle Mag";
        picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
        descriptionShort = "Rifle magazine";
        descriptionUse = "Holds ammunition for rifles";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class keko_MGMag: keko_RifleMag {
        displayName = "MG Mag";
        picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
        descriptionShort = "MG magazine";
        descriptionUse = "Holds ammunition for machine guns.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };

    class keko_PistolMag: keko_RifleMag {
        displayName = "Pistol Mag";
        picture="\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionShort = "Pistol magazine";
        descriptionUse = "Holds ammunition for pistols.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 6;
        };
    };

    class keko_UGLMag: keko_RifleMag {
        displayName = "UGL Mag";
        picture="\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        descriptionShort = "UGL magazine";
        descriptionUse = "Holds ammunition for underslung grenade launchers.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };

    class keko_AntiTankMag: keko_RifleMag {
        displayName = "Anti-Tank Missile";
        picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
        model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
        descriptionShort = "Anti-Tank Missile";
        descriptionUse = "Fits into anti-tank launchers.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 100;
        };
    };

    class keko_AntiAirMag: keko_RifleMag {
        displayName = "Anti-Air Missile";
        picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
        model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        descriptionShort = "Anti-Air Missile";
        descriptionUse = "Fits into anti-air launchers.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 100;
        };
    };

    class launch_NLAW_F;
    class keko_DisposableRocketLauncher: launch_NLAW_F {
        author = "Schwaggot";
        displayName = "Disposable Rocket Launcher";
        descriptionShort = "Disposable Rocket Launcher";
        descriptionUse = "A Disposable Rocket Launcher for Anti-Tank purposes.";
    };

    class launch_B_Titan_short_F;
    class keko_AntiTankLauncher: launch_B_Titan_short_F {
        author = "Schwaggot";
        displayName = "Anti-Tank Launcher";
        descriptionShort = "Anti-Tank Launcher";
        descriptionUse = "A Anti-Tank Launcher.";
    };

    class launch_B_Titan_F;
    class keko_AntiAirLauncher: launch_B_Titan_F {
        author = "Schwaggot";
        displayName = "Anti-Air Launcher";
        descriptionShort = "Anti-Air Launcher";
        descriptionUse = "A Anti-Air Launcher.";
    };


    // disable hearing protection on helmets
    class H_HelmetB;
    class H_HelmetCrew_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetCrew_I: H_HelmetCrew_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetCrew_O: H_HelmetCrew_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_CrewHelmetHeli_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_CrewHelmetHeli_I: H_CrewHelmetHeli_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetHeli_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetFighter_B: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetFighter_I: H_PilotHelmetFighter_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_PilotHelmetFighter_O: H_PilotHelmetFighter_B {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetB_light: H_HelmetB {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };
    class H_Cap_marshal: H_Cap_headphones {
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;
    };

};
