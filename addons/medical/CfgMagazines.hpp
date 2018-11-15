class cfgMagazines {
  class CA_Magazine;
  class GVAR(PainkillersBoxPill): CA_Magazine {
    scope = 2;
    author = "Katalam";
    displayName = "Painkillers";
		escriptionShort = "Painkillers";
		descriptionUse = "A box full of painkillers";
    model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    picture = QPATHTOF(ui\icon_painkillers.paa);

    ammo = "";
    count = 10;
    initSpeed = 0;
    tracersEvery = 0;
    lastRoundsTracer = 0;
    mass = 1;
  };
};
