class FactionWehrmachtAfrica: FactionBase {
	name = "[Ironfront] Wehrmacht (Africa)";
	class role: role {
		GruppenFuehrerMP40 = "Gruppenführer (MP40)";
		GruppenFuehrerSTG44 = "Gruppenführer (StG44)";
		GruppenFuehrerAsst = "Stellv. Gruppenführer";
		TruppFuehrer = "Truppführer";
		Funker = "Funker";
		Sani = "Sanitüter";
		SchuetzeK98 = "Schütze (K98)";
		SchuetzeG43 = "Schütze (G43)";
		SchuetzeMP40 = "Schütze (MP40)";
		SchuetzeMP40PzF = "Panzerfaust Schütze (MP40)";
		Munitionstraeger = "Munitionstrüger";
		Grenadier = "Grenadier";
		MG34 = "MG Schütze (MG34)";
		MG42 = "MG Schütze (MG42)";
		MGAsst = "MG Asst.";
	};

	class rank: rank {
		GruppenFuehrerMP40 = "LIEUTENANT";
		GruppenFuehrerSTG44 = "LIEUTENANT";
		GruppenFuehrerAsst = "SERGEANT";
		TruppFuehrer = "CORPORAL";
		Funker = "CORPORAL";
		Sani = "CORPORAL";
	};

	class uniform: uniform {
		Default[] = { "fow_u_ger_m43_01_private" };
		GruppenFuehrerMP40[] = { "fow_u_ger_m43_02_corporal" };
		GruppenFuehrerSTG44[] = { "fow_u_ger_m43_01_corporal" };
		GruppenFuehrerAsst[] = { "fow_u_ger_m43_01_private" };
		TruppFuehrer[] = { "fow_u_ger_m43_01_corporal" };
		Funker[] = { "fow_u_ger_m43_01_private" };
		Sani[] = { "fow_u_ger_m43_01_private" };
		SchuetzeMP40[] = { "fow_u_ger_m43_01_frag_private" };
		SchuetzeMP40PzF[] = { "fow_u_ger_m43_01_frag_private" };
		Munitionstraeger[] = { "fow_u_ger_m43_01_frag_private" };
		MG34[] = { "fow_u_ger_m43_02_lance_corporal" };
		MG42[] = { "fow_u_ger_m43_02_lance_corporal" };
		MGAsst[] = { "fow_u_ger_m43_01_frag_private" };
	};

	class uniformInventory: uniformInventory {
		Default[] = {
				{ 16, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
		GruppenFuehrerMP40[] = {
				{ 9, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" },
				{ 1, "ACE_MapTools" }
			};
		GruppenFuehrerSTG44[] = {
				{ 9, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" },
				{ 1, "ACE_MapTools" }
			};
		GruppenFuehrerAsst[] = {
				{ 14, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" },
				{ 1, "ACE_MapTools" }
			};
		TruppFuehrer[] = {
				{ 15, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" },
				{ 1, "ACE_MapTools" }
			};
		MG34[] = {
				{ 14, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
		MG42[] = {
				{ 14, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
	};

	class vest: vest {
		Default[] = { "fow_v_heer_k98" };
		GruppenFuehrerMP40[] = { "fow_v_heer_mp40" };
		GruppenFuehrerSTG44[] = { "fow_v_heer_mp44" };
		GruppenFuehrerAsst[] = { "fow_v_heer_mp40" };
		TruppFuehrer[] = { "fow_v_heer_mp40_nco" };
		Funker[] = { "fow_v_heer_k98_light" };
		SchuetzeG43[] = { "fow_v_heer_g43" };
		SchuetzeMP40[] = { "fow_v_heer_mp40" };
		SchuetzeMP40PzF[] = { "fow_v_heer_mp40" };
		MG34[] = { "fow_v_heer_mg" };
		MG42[] = { "fow_v_heer_mg" };
		MGAsst[] = { "fow_v_heer_k98_ass" };
	};

	class backpack: backpack {
		Funker[] = { "fow_b_torn_radio" };
		Sani[] = { "fow_b_tornister_medic" };
		SchuetzeMP40PzF[] = { "fow_b_heer_aframe" };
		Munitionstraeger[] = { "fow_b_ammoboxes" };
		Grenadier[] = { "fow_b_grenadebag" };
		MG34[] = { "fow_b_heer_ammo_belt" };
		MG42[] = { "fow_b_heer_ammo_belt" };
		MGAsst[] = { "fow_b_ammoboxes_mg34_42" };
	};

	class backpackInventory: backpackInventory {
		Funker[] = {  };
		Sani[] = { { 40, "ACE_elasticBandage" }, { 6, "adv_aceSplint_splint" } };
		Grenadier[] = {
				{ 2, "fow_e_m24_at" },
				{ 4, "fow_e_m24" },
				{ 1, "fow_e_nb39b" }
			};
	};

	class helmet: helmet {
		Default[] = { "fow_h_ger_m40_heer_01", "fow_h_ger_m40_heer_02" };
	};

	class primary: primary {
		Default[] = { keko_W_K98 };
		GruppenFuehrerMP40[] = { keko_W_MP40 };
		GruppenFuehrerSTG44[] = { keko_W_STG44 };
		GruppenFuehrerAsst[] = { keko_W_MP40 };
		TruppFuehrer[] = { keko_W_MP40 };
		SchuetzeG43[] = { keko_W_G43 };
		SchuetzeMP40[] = { keko_W_MP40 };
		SchuetzeMP40PzF[] = { keko_W_MP40 };
		MG34[] = { keko_W_MG34 };
		MG42[] = { keko_W_MG42 };
	};

	class secondary: secondary {
		Default[] = {  };
		GruppenFuehrerMP40[] = { keko_W_P08 };
		GruppenFuehrerSTG44[] = { keko_W_P08 };
		MG34[] = { keko_W_P38 };
		MG42[] = { keko_W_P38 };
	};

};
