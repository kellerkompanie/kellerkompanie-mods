#define standard_items "ItemRadio", "ItemMap", "ItemCompass", "ItemWatch"

#define standard_weapons "Binocular", "Throw", "Put"

//iconMan
//iconManMedic
//iconManEngineer
//iconManExplosive
//iconManRecon
//iconManVirtual
//iconManAT
//iconManLeader
//iconManMG
//iconManOfficer

class CfgVehicles {
	//units
	class SoldierWB;
	class B_Soldier_base_F : SoldierWB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};
	
	class keko_blufor_soldier : B_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 1;
		faction = "keko_faction_generic_blufor";
		vehicleClass = "Men";
		model = "\a3\characters_f\blufor\b_soldier_01.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "Soldier";

		class EventHandlers { 		
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_blufor_soldier') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};
	
	class keko_blufor_command : keko_blufor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
	};
	
	class keko_blufor_lead : keko_blufor_soldier {
		displayName = "Lead";
		icon = "iconManOfficer";
	};

	class keko_blufor_sql : keko_blufor_soldier {
		displayName = "SQL";
		icon = "iconManLeader";
	};

	class keko_blufor_ftl : keko_blufor_soldier {
		displayName = "FTL";
		icon = "iconManLeader";
	};

	class keko_blufor_doctor : keko_blufor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};
	
	class keko_blufor_medic : keko_blufor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};


	
	class keko_blufor_rifleman : keko_blufor_soldier {
		displayName = "Rifleman";		
	};
	
	class keko_blufor_rifleman_at : keko_blufor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
	};
	
	class keko_blufor_grenadier : keko_blufor_soldier {
		displayName = "Grenadier";
	};
	
	class keko_blufor_lmg : keko_blufor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
	};	

	class keko_blufor_lmg_asst : keko_blufor_soldier {
		displayName = "LMG Asst.";
	};



	class keko_blufor_mmg : keko_blufor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
	};

	class keko_blufor_mmg_asst : keko_blufor_soldier {
		displayName = "Machine Gunner Asst.";
	};

	class keko_blufor_at : keko_blufor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
	};

	class keko_blufor_at_asst : keko_blufor_soldier {
		displayName = "AT Specialist Asst.";
	};

	class keko_blufor_aa : keko_blufor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
	};

	class keko_blufor_aa_asst : keko_blufor_soldier {
		displayName = "AA Specialist Asst.";
	};



	class keko_blufor_marksman : keko_blufor_soldier {
		displayName = "Marksman";
	};

	class keko_blufor_sniper : keko_blufor_soldier {
		displayName = "Sniper";
	};

	class keko_blufor_spotter : keko_blufor_soldier {
		displayName = "Spotter";
	};

	class keko_blufor_eod : keko_blufor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
	};

	class keko_blufor_engineer : keko_blufor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
	};

	class keko_blufor_heli_pilot : keko_blufor_soldier {
		displayName = "Helicopter Pilot";
	};

	class keko_blufor_jet_pilot : keko_blufor_soldier {
		displayName = "Jet Pilot";
	};

	class keko_blufor_jtac : keko_blufor_soldier {
		displayName = "JTAC";
	};

	class keko_blufor_uav : keko_blufor_soldier {
		displayName = "UAV Operator";
	};






	class SoldierGB;
	class I_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_indfor_soldier : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_generic_indfor";
		vehicleClass = "Men";
		model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "INDFOR Soldier";

		class EventHandlers { 			
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_indfor_soldier') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_indfor_command : keko_indfor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
	};
	
	class keko_indfor_lead : keko_indfor_soldier {
		displayName = "Lead";
		icon = "iconManOfficer";
	};

	class keko_indfor_sql : keko_indfor_soldier {
		displayName = "SQL";
		icon = "iconManLeader";
	};

	class keko_indfor_ftl : keko_indfor_soldier {
		displayName = "FTL";
		icon = "iconManLeader";
	};

	class keko_indfor_doctor : keko_indfor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};
	
	class keko_indfor_medic : keko_indfor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};


	
	class keko_indfor_rifleman : keko_indfor_soldier {
		displayName = "Rifleman";		
	};
	
	class keko_indfor_rifleman_at : keko_indfor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
	};
	
	class keko_indfor_grenadier : keko_indfor_soldier {
		displayName = "Grenadier";
	};
	
	class keko_indfor_lmg : keko_indfor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
	};	

	class keko_indfor_lmg_asst : keko_indfor_soldier {
		displayName = "LMG Asst.";
	};



	class keko_indfor_mmg : keko_indfor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
	};

	class keko_indfor_mmg_asst : keko_indfor_soldier {
		displayName = "Machine Gunner Asst.";
	};

	class keko_indfor_at : keko_indfor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
	};

	class keko_indfor_at_asst : keko_indfor_soldier {
		displayName = "AT Specialist Asst.";
	};

	class keko_indfor_aa : keko_indfor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
	};

	class keko_indfor_aa_asst : keko_indfor_soldier {
		displayName = "AA Specialist Asst.";
	};



	class keko_indfor_marksman : keko_indfor_soldier {
		displayName = "Marksman";
	};

	class keko_indfor_sniper : keko_indfor_soldier {
		displayName = "Sniper";
	};

	class keko_indfor_spotter : keko_indfor_soldier {
		displayName = "Spotter";
	};

	class keko_indfor_eod : keko_indfor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
	};

	class keko_indfor_engineer : keko_indfor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
	};

	class keko_indfor_heli_pilot : keko_indfor_soldier {
		displayName = "Helicopter Pilot";
	};

	class keko_indfor_jet_pilot : keko_indfor_soldier {
		displayName = "Jet Pilot";
	};

	class keko_indfor_jtac : keko_indfor_soldier {
		displayName = "JTAC";
	};

	class keko_indfor_uav : keko_indfor_soldier {
		displayName = "UAV Operator";
	};












	class SoldierEB;
	class O_Soldier_base_F : SoldierEB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_opfor_soldier : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_generic_opfor";
		vehicleClass = "Men";		
		model = "\a3\characters_f\opfor\o_soldier_01.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "OPFOR Soldier";

		class EventHandlers { 			
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_opfor_soldier') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_opfor_command : keko_opfor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
	};
	
	class keko_opfor_lead : keko_opfor_soldier {
		displayName = "Lead";
		icon = "iconManOfficer";
	};

	class keko_opfor_sql : keko_opfor_soldier {
		displayName = "SQL";
		icon = "iconManLeader";
	};

	class keko_opfor_ftl : keko_opfor_soldier {
		displayName = "FTL";
		icon = "iconManLeader";
	};

	class keko_opfor_doctor : keko_opfor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};
	
	class keko_opfor_medic : keko_opfor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};


	
	class keko_opfor_rifleman : keko_opfor_soldier {
		displayName = "Rifleman";		
	};
	
	class keko_opfor_rifleman_at : keko_opfor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
	};
	
	class keko_opfor_grenadier : keko_opfor_soldier {
		displayName = "Grenadier";
	};
	
	class keko_opfor_lmg : keko_opfor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
	};	

	class keko_opfor_lmg_asst : keko_opfor_soldier {
		displayName = "LMG Asst.";
	};



	class keko_opfor_mmg : keko_opfor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
	};

	class keko_opfor_mmg_asst : keko_opfor_soldier {
		displayName = "Machine Gunner Asst.";
	};

	class keko_opfor_at : keko_opfor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
	};

	class keko_opfor_at_asst : keko_opfor_soldier {
		displayName = "AT Specialist Asst.";
	};

	class keko_opfor_aa : keko_opfor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
	};

	class keko_opfor_aa_asst : keko_opfor_soldier {
		displayName = "AA Specialist Asst.";
	};



	class keko_opfor_marksman : keko_opfor_soldier {
		displayName = "Marksman";
	};

	class keko_opfor_sniper : keko_opfor_soldier {
		displayName = "Sniper";
	};

	class keko_opfor_spotter : keko_opfor_soldier {
		displayName = "Spotter";
	};

	class keko_opfor_eod : keko_opfor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
	};

	class keko_opfor_engineer : keko_opfor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
	};

	class keko_opfor_heli_pilot : keko_opfor_soldier {
		displayName = "Helicopter Pilot";
	};

	class keko_opfor_jet_pilot : keko_opfor_soldier {
		displayName = "Jet Pilot";
	};

	class keko_opfor_jtac : keko_opfor_soldier {
		displayName = "JTAC";
	};

	class keko_opfor_uav : keko_opfor_soldier {
		displayName = "UAV Operator";
	};



};