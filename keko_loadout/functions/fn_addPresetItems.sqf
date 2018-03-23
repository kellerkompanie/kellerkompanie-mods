
// give map and compass
if (keko_var_giveMap) then {
	player linkItem "ItemMap";
	
};
if (keko_var_giveCompass) then {
	player linkItem "ItemCompass";	
};

// add night gear
switch(keko_var_giveNvg) do {
	case 1: {
		// Headlamp white
		player linkItem "SAN_Headlamp_v1";
	};
	case 2: {
		// Headlamp color
		player linkItem "SAN_Headlamp_v2";
	}; 
	case 3: {
		// NVG 1.Gen
		player linkItem "ACE_NVG_Gen1";
	}; 
	case 4: {
		// NVG 2.Gen
		player linkItem "ACE_NVG_Gen2";
	}; 
	case 5: {
		// NVG 3.Gen
		player linkItem "NVGoggles_OPFOR";
	}; 
	case 6: {
		// NVG 4.Gen
		player linkItem "ACE_NVG_Gen4";
	}; 
	case 7: {
		// NVG Wide
		player linkItem "ACE_NVG_Wide";
	}; 
	case 8: {
		// Wärmesicht
		player linkItem "NVGogglesB_blk_F";
	}; 
	case 9: {
		// (main) Ami Mono
		player linkItem "meu_ANPVS_14";
	}; 
	case 10: {
		// (main) Ami Dual
		player linkItem "meu_ANPVS_15";
	}; 
	case 11: {
		// (main) BAF Mono
		player linkItem "UK3CB_BAF_HMNVS";
	}; 
	case 12: {
		// (main) Sovjet Mono
		player linkItem "rhs_1PN138";
	}; 
	case 13: {
		// GPNVG-18 tan
		player linkItem "A3_GPNVG18_F";
	};
	case 14: {
		// GPNVG-18 black
		player linkItem "A3_GPNVG18_BLK_F";
	};
	case 15: {
		// GPNVG-18 recon tan
		player linkItem "A3_GPNVG18_REC_F";
	};
	case 16: {
		// GPNVG-18 recon black
		player linkItem "A3_GPNVG18_REC_BLK_F";
	};
};

if(keko_var_giveGps > 0) then {
	switch (keko_var_giveGps) do {
		case 1: {
			//GPS
			player linkItem "ItemGPS";
		};
		case 2: {
			//GPS und MicroDAGR
			//MicroDAGR was already added to Vest, only add GPS
			player linkItem "ItemGPS";
		};
		case 3: {
			//MicroDAGR
			//MicroDAGR was already added to Vest, do nothing
		};
		case 4: {
			//cTab
			player linkItem "itemAndroid";
		};
		default {};
	};
};

// add watch
player linkItem "ItemWatch";

[] spawn {
	sleep 2;

	[player] call keko_loadout_fnc_tfarSettings;

	// let TFAR initialize
	sleep 5;

	// give radio
	if (keko_var_giveRadio > 0) then {
		switch (keko_var_giveRadio) do {
			case 1: {
				//Verstellbare für alle
				switch (side player) do {
					case west: {
						player linkItem "TFAR_anprc152";
					};
					case east: {
						player linkItem "TFAR_fadak";
					};
					case independent: {
						player linkItem "TFAR_anprc148jem";
					};
					default {};
				};
			};
			case 2: {
				//Verstellbare für Führungspos, sonst Personal
				if ( (rank player) in ["SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"] ) then {
					switch (side player) do {
						case west: {
							player linkItem "TFAR_anprc152";
						};
						case east: {
							player linkItem "TFAR_fadak";
						};
						case independent: {
							player linkItem "TFAR_anprc148jem";
						};
						default {};
					};
				} else {
					switch (side player) do {
						case west: {
							player linkItem "TFAR_rf7800str";
						};
						case east: {
							player linkItem "TFAR_pnr1000a";
						};
						case independent: {
							player linkItem "TFAR_anprc154";
						};
						default {};
					};
				};			
			};
			case 3: {
				//Nur für Führungspos
				if ( (rank player) in ["SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"] ) then {
					switch (side player) do {
						case west: {
							player linkItem "TFAR_anprc152";
						};
						case east: {
							player linkItem "TFAR_fadak";
						};
						case independent: {
							player linkItem "TFAR_anprc148jem";
						};
						default {};
					};
				};
			};
			default {};
		};
	};

	[player] spawn keko_loadout_fnc_setChannels;
};
