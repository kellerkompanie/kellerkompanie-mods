class CfgMagazines {
    class CA_Magazine;
    class GVAR(canteen): CA_Magazine {
        author = "Schwaggot";
        scope = 2;
        displayName = CSTRING(displayName);
        descriptionShort = CSTRING(descriptionShort);
        model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
        picture = QPATHTOF(ui\icon_canteen.paa);
        ammo = "";
        count = 5;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 2;
        weaponPoolAvailable = 1;
    };
};
