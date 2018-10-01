class CfgMagazines {
	class CA_Magazine;
	class GVAR(beer): CA_Magazine {
		author = "Schwaggot";
		scope = 2;
		displayName = "Beer";
		descriptionShort = "A bottle of beer.";
		model = QPATHTOF(botella_generica_3D.p3d);		
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
