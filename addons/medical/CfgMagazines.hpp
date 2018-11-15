class cfgMagazines {
	class CA_Magazine;
	class GVAR(Painkillers): CA_Magazine {
		author = "Katalam";
		scope = 2;
		displayName = "Painkillers";
		escriptionShort = "A box full of painkillers.";
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
