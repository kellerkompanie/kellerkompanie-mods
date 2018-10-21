// HMS Proteus - Prep Ready Room & LOC
//




//Main Table
LOCTABLE1 = "Land_WoodenTable_large_F" createVehicle (position HMSProteusLOC); //LOCTABLE1 setDir random 360;
LOCTABLE1 attachTo [HMSProteusLOC,[2.7,-0.5,0.1]];
LOCTABLE1 setDir -90;
//AuX Table
LOCTABLE2 = "Land_WoodenTable_large_F" createVehicle (position HMSProteusLOC);
LOCTABLE2 attachTo [LOCTABLE1,[-0.01,-2,0]];
//Laptop 1
LOCLAPTOP1 = "Land_Laptop_Unfolded_F" createVehicle (position HMSProteusLOC);
LOCLAPTOP1 attachTo [LOCTABLE1,[0.4,0.8,0.57]];
LOCLAPTOP1 setDir 90;
//Laptop 2
LOCLAPTOP2 = "Land_Laptop_Device_F" createVehicle (position HMSProteusLOC);
publicVariable "LOCLAPTOP2"; //SUB Transport for MP W-I-P
LOCLAPTOP2 attachTo [LOCTABLE1,[0.4,0,0.57]];
LOCLAPTOP2 setDir 90;
//Laptop 3
LOCLAPTOP3 = "Land_Laptop_F" createVehicle (position HMSProteusLOC);
LOCLAPTOP3 attachTo [LOCTABLE1,[-0.4,-2.4,0.44]];
LOCLAPTOP3 setDir 100;
//AmmoBox
LOCAMMOBOX = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX attachTo [LOCTABLE1,[0.4,-2.7,0.53]];
LOCAMMOBOX setDir 95;
//Map Sea
LOCMAP1 = "Land_Map_blank_F" createVehicle (position HMSProteusLOC);
LOCMAP1 attachTo [LOCTABLE1,[0.3,-1,0.43]];
LOCMAP1 setDir 10;
//Map Altis
LOCMAP2 = "Land_Map_blank_F" createVehicle (position HMSProteusLOC);
LOCMAP2 attachTo [LOCTABLE1,[0,-2.7,0.43]];
LOCMAP2 setDir 90;
//Map Sea
LOCMAP3 = "Land_Map_altis_F" createVehicle (position HMSProteusLOC);
LOCMAP3 attachTo [LOCTABLE1,[-0.2,0,0.43]];
LOCMAP3 setDir -180;
//Photos Pouch
LOCMAP4 = "Land_FilePhotos_F" createVehicle (position HMSProteusLOC);
LOCMAP4 attachTo [LOCTABLE1,[-0.48,-1.02,0.43]];
LOCMAP4 setDir 90;
//Top Secret
LOCDOC1 = "Land_Document_01_F" createVehicle (position HMSProteusLOC);
LOCDOC1 attachTo [LOCTABLE1,[0.4,0.4,0.43]];
LOCDOC1 setDir -90;
//TSResearch
LOCDOC3 = "Land_File_research_F" createVehicle (position HMSProteusLOC);
LOCDOC3 attachTo [LOCTABLE1,[-0.4,-2,0.43]];
LOCDOC3 setDir 90;
//Documents1
LOCDOC2 = "Land_File2_F" createVehicle (position HMSProteusLOC);
LOCDOC2 attachTo [LOCTABLE1,[0.3,-0.9,0.43]];
LOCDOC2 setDir 120;
//Documents2
LOCDOC5 = "Land_File2_F" createVehicle (position HMSProteusLOC);
LOCDOC5 attachTo [LOCTABLE1,[0.3,-1.1,0.43]];
LOCDOC5 setDir 90;
//Files (sm)
LOCDOC4 = "Land_File1_F" createVehicle (position HMSProteusLOC);
LOCDOC4 attachTo [LOCTABLE1,[0.4,-0.45,0.43]];
LOCDOC4 setDir 93;
//.45 Pistol
LOCGUN1 = "Weapon_hgun_Pistol_heavy_02_F" createVehicle (position HMSProteusLOC);
LOCGUN1 attachTo [LOCTABLE1,[0.35,-0.8,0.42]];
LOCGUN1 setDir 180;
//SMG1
LOCSMG1 = "Weapon_srifle_EBR_F" createVehicle (position HMSProteusLOC);
LOCSMG1 attachTo [LOCTABLE1,[0.35,-2,0.45]];	//1.07
LOCSMG1 setDir 90;
//SMG2
LOCMK20 = "Weapon_SMG_02_F" createVehicle (position HMSProteusLOC);
LOCMK20 attachTo [LOCTABLE1,[-0.2,0,0.45]];	//1.07
LOCMK20 setDir 75;
//Sniper Rifle
LOCM320 = "Weapon_srifle_LRR_F" createVehicle (position HMSProteusLOC);
LOCM320 attachTo [HMSProteusLOC,[4.5,2.9,1.23]];
LOCM320 setVectorDirAndUp [[0,0,1],[0,1,0]];
//MXC
LOCMXC = "Weapon_arifle_MXC_F" createVehicle (position HMSProteusLOC);
LOCMXC attachTo [HMSProteusLOC,[2.1,2.3,0.38]];
LOCMXC setDir 10;
//Magazine
LOCMag1 = "Land_Magazine_rifle_F" createVehicle (position HMSProteusLOC);
LOCMag1 attachTo [HMSProteusLOC,[2.7,2.15,0.48]];
LOCMag1 setDir 10;
//Magazine
LOCMag2 = "Land_Magazine_rifle_F" createVehicle (position HMSProteusLOC);
LOCMag2 attachTo [HMSProteusLOC,[2.55,2.15,0.48]];
LOCMag2 setDir 40;

//----------------

//Shelves
LOCRACK1 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK1 attachTo [HMSProteusLOC,[0.5,2.4,-0.5]];
LOCRACK1 setDir 0;
//Shelves
LOCRACK2 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK2 attachTo [HMSProteusLOC,[1.26,2.4,-0.5]];
LOCRACK2 setDir 0;
//Shelves
LOCRACK3 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK3 attachTo [HMSProteusLOC,[2.02,2.4,-0.5]];
LOCRACK3 setDir 0;
//ShelvesW
LOCRACK4 = "Land_ShelvesWooden_F" createVehicle (position HMSProteusLOC);
LOCRACK4 attachTo [HMSProteusLOC,[2.9,2.3,0]];
LOCRACK4 setDir 90;
//Shelves
LOCRACK5 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK5 attachTo [HMSProteusLOC,[3.78,2.4,-0.5]];
LOCRACK5 setDir 0;
//Shelves
LOCRACK6 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK6 attachTo [HMSProteusLOC,[4.54,2.4,-0.5]];
LOCRACK6 setDir 0;
//Shelves
LOCRACK7 = "Land_Metal_rack_Tall_F" createVehicle (position HMSProteusLOC);
LOCRACK7 attachTo [HMSProteusLOC,[5.3,2.4,-0.5]];
LOCRACK7 setDir 0;
//ShelvesW-LOC
LOCRACKL = "Land_ShelvesWooden_blue_F" createVehicle (position HMSProteusLOC);
LOCRACKL attachTo [HMSProteusLOC,[-1,2.3,-1.25]];
LOCRACKL setDir 90;
//Laptop 2LOC
LOCLAPTOPL = "Land_Laptop_Device_F" createVehicle (position HMSProteusLOC);
LOCLAPTOPL attachTo [HMSProteusLOC,[-1,2.3,-0.64]];
LOCLAPTOPL setDir 180;

//----------------

//BDUs Flippers
LOCBDU1 = "Item_U_B_Survival_Uniform" createVehicle (position HMSProteusLOC);
LOCBDU1 attachTo [HMSProteusLOC,[0.4,2.3,0.65]];
LOCBDU1 setDir 0;
//BDUs Flippers
LOCBDU2 = "Item_U_B_Survival_Uniform" createVehicle (position HMSProteusLOC);
LOCBDU2 attachTo [HMSProteusLOC,[0.95,2.3,0.65]];
LOCBDU2 setDir 0;
//BDUs Flippers
LOCBDU3 = "Item_U_B_Survival_Uniform" createVehicle (position HMSProteusLOC);
LOCBDU3 attachTo [HMSProteusLOC,[1.3,2.3,0.65]];
LOCBDU3 setDir 0;

//----------------

//Crate SCUBA
LOCCRATE1 = "Box_NATO_WpsSpecial_F" createVehicle (position HMSProteusLOC);
LOCCRATE1 attachTo [HMSProteusLOC,[0.2,1,-0.1]];
LOCCRATE1 setDir 90;
clearWeaponCargoGlobal LOCCRATE1;
clearMagazineCargoGlobal LOCCRATE1;
clearItemCargoGlobal LOCCRATE1;
LOCCRATE1 additemCargoGlobal ["VQI_VEST_Stingray",4];
LOCCRATE1 additemCargoGlobal ["U_B_Wetsuit",4];
LOCCRATE1 additemCargoGlobal ["VQI_DiveMate_1",4];
LOCCRATE1 additemCargoGlobal ["VQI_Goggles_SPECTRA",4];
LOCCRATE1 additemCargoGlobal ["U_B_Survival_Uniform",4];
LOCCRATE1 additemCargoGlobal ["VQI_SR2GAS",4];
LOCCRATE1 additemCargoGlobal ["VQI_SR2DIL",4];
//Crate1
LOCCRATE2 = "Box_NATO_WpsSpecial_F" createVehicle (position HMSProteusLOC);
LOCCRATE2 attachTo [HMSProteusLOC,[5.4,1,-0.1]];
LOCCRATE2 setDir -90;

//------------------

//AmmoBox1
LOCAMMOBOX1 = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX1 attachTo [HMSProteusLOC,[5.5,2.4,1.23]];
LOCAMMOBOX1 setDir -90;
//AmmoBox2
LOCAMMOBOX2 = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX2 attachTo [HMSProteusLOC,[4,2.4,0.85]];
LOCAMMOBOX2 setDir -90;
//AmmoBox3
LOCAMMOBOX3 = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX3 attachTo [HMSProteusLOC,[3.7,2.4,0.85]];
LOCAMMOBOX3 setDir -90;
//AmmoBox4
LOCAMMOBOX4 = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX4 attachTo [HMSProteusLOC,[0.6,2.4,0.47]];
LOCAMMOBOX4 setDir -90;
//AmmoBox5
LOCAMMOBOX5 = "Land_Ammobox_Rounds_F" createVehicle (position HMSProteusLOC);
LOCAMMOBOX5 attachTo [HMSProteusLOC,[0.3,2.4,0.85]];
LOCAMMOBOX5 setDir -90;

//------------------

//Fire Extinguisher
LOCFIREX = "Land_FireExtinguisher_F" createVehicle (position HMSProteusLOC);
LOCFIREX attachTo [HMSProteusLOC,[0,2.5,0]];
LOCFIREX setDir -90;

//TV
LOCTV1 = "Land_FlatTV_01_F" createVehicle (position HMSProteusLOC);
LOCTV1 attachTo [HMSProteusLOC,[2.9,2.5,0.71]];
LOCTV1 setDir 0;

sleep 1;

//[[LOCLAPTOP2, ["HMS Proteus: Request Submarine - Surface", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_surface.sqf'; [LOCLAPTOP2, 1]"]], "addAction", true, true] call BIS_fnc_MP;
//[[LOCLAPTOP2, ["HMS Proteus: Request Submarine - Shallow", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_shallow.sqf'; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;
//[[LOCLAPTOP2, ["HMS Proteus: Request Submarine - Deepest", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_deepest.sqf'; [LOCLAPTOP2, 3]"]], "addAction", true, true] call BIS_fnc_MP;

[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 0]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["PLOT COURSE -- HMS PROTEUS", "execVM 'vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_start.sqf'; [LOCLAPTOP2, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;
//[[LOCLAPTOP2, ["Sub/Ops Desk: Disembark", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_opsdesk_return.sqf'; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;


[[LOCLAPTOP2, ["INTEL - AO: SUBMARINES", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Sub\vqi_frogs_ao_sub_mkrs_intel.sqf'; [LOCLAPTOP2, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: NAVAL OPs", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Nav\vqi_frogs_ao_nav_mkrs_intel.sqf'; [LOCLAPTOP2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: WATER MINES", "execVM 'vqi_fuse\VQI-EOD\AO\watermines\vqi_fuse_ao_watermine_mkrs_intel.sqf'; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: SURF MINES", "execVM 'vqi_fuse\VQI-EOD\AO\surfzones\vqi_fuse_ao_surfzone_mkrs_intel.sqf'; [LOCLAPTOP2, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 7]"]], "addAction", true, true] call BIS_fnc_MP;








//////////////////////
/* NOTES:


*/