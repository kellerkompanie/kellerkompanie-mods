class CfgWeapons {
    class NVGoggles;
    class GVAR(NVGoggles) : NVGoggles {
        author = "Schwaggot";
        descriptionShort = CSTRING(descriptionShort);
        displayName = CSTRING(displayName);
        model = "\A3\Weapons_F\empty.p3d";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
        scope = 1;
        class ItemInfo {
            hmdType = 0;
            mass = 20;
            modelOff = "\A3\Weapons_F\empty.p3d";
            type = 616;
            uniformModel = "\A3\Weapons_F\empty.p3d";
        };
    };
};
