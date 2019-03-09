class weapons: weapons {
    class M8_Avenger_Blue_Sight: PrimaryWeapon {
        cfgName = MEOP_m8RifleSH_blue;
        scopes[] = {meop_t8as_scope_1};
        magazines[] = {MEOP_30Rnd_M8_mag};
        uglMagazines[] = {MEOP_2Rnd_M8_mag};
    };

    class M8_Avenger_Blue_Holo: PrimaryWeapon {
        cfgName = MEOP_m8Rifle_blue;
        scopes[] = {meop_humholo_scope_1};
        magazines[] = {MEOP_30Rnd_M8_mag};
    };

    class M8_Avenger_GL_Blue: PrimaryWeapon {
        cfgName = MEOP_m8RifleGL_blue;
        scopes[] = {meop_t8as_scope_1};
        magazines[] = {MEOP_30Rnd_M8_mag};
        uglMagazines[] = {MEOP_5Rnd_HE_TurGrenade_shell};
    };

    class M8_Avenger: PrimaryWeapon{
        cfgName = MEOP_m8Rifle;
        scopes[] = {meop_humholo_scope_1};
        magazines[] = {MEOP_30Rnd_M8_mag};
    };

    class M3_Pistol: SecondaryWeapon {
        cfgName = MEOP_m3pistol;
        scopes[] = {meop_turholo_scope_1};
        magazines[] = {MEOP_15Rnd_M3_mag};
    };

    class ML78_Launcher_AT: LauncherWeapon {
        cfgName = MEOP_launch_ml78_F;
        magazines[] = {MEOP_ML78Missle_AT_F};
    };

    class ML78_Launcher_AA: LauncherWeapon {
        cfgName = MEOP_launch_ml78_F;
        magazines[] = {MEOP_ML78Missle_AA_F};
    };
};
