class CfgWeapons {

    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

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
    class keko_RifleMag_Tracer: keko_RifleMag {
        displayName = "Rifle Mag (Tracer)";
        picture="\A3\weapons_F\data\UI\m_30stanag_red_CA.paa";
        descriptionShort = "Rifle magazine (tracer)";
        descriptionUse = "Holds tracer ammunition for rifles";
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
    class keko_MGMag_Tracer: keko_MGMag {
        displayName = "MG Mag (Tracer)";
        picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
        descriptionShort = "MG magazine (tracer)";
        descriptionUse = "Holds tracer ammunition for machine guns.";
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

    class GVAR(canteen_generic) : ACE_ItemCore {
        displayName = "Canteen (KeKo)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\x\keko\addons\canteen\ui\icon_canteen.paa";
    };
    class GVAR(painkiller_generic) : ACE_ItemCore {
        displayName = CSTRING(Painkiller_Display);
        count = 1;
        scopeCurator = 1;
        scope = 1;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
        picture = QPATHTOF(ui\icon_painkillers.paa);
    };
    class GVAR(cigpack_generic) : ACE_ItemCore {
        displayName = "Cig Pack";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\murshun_cigs\UI\gear_cigpack_x_ca";
    };
    class GVAR(lighter_generic) : ACE_ItemCore {
        displayName = "Lighter";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\murshun_cigs\UI\gear_lighter_x_ca";
    };
    class GVAR(matches_generic) : ACE_ItemCore {
        displayName = "Matches";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = "\murshun_cigs\UI\gear_matches_x_ca";
    };
    class GVAR(lollipop_generic) : ACE_ItemCore {
        displayName = "Lollipop (Packed)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\immersion_pops\UI\gear_cigpack_x_ca";
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
