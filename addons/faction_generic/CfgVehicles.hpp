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
		curatorScope = 1;
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
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "kekoSoldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_blufor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_blufor_command : keko_blufor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class keko_blufor_lead : keko_blufor_soldier {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class keko_blufor_sergeant : keko_blufor_soldier {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class keko_blufor_sql : keko_blufor_soldier {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class keko_blufor_ftl : keko_blufor_soldier {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class keko_blufor_doctor : keko_blufor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class keko_blufor_medic : keko_blufor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class keko_blufor_rifleman : keko_blufor_soldier {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class keko_blufor_rifleman_at : keko_blufor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class keko_blufor_rifleman_at_tanks : keko_blufor_soldier {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class keko_blufor_grenadier : keko_blufor_soldier {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class keko_blufor_lmg : keko_blufor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class keko_blufor_lmg_asst : keko_blufor_soldier {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class keko_blufor_mmg : keko_blufor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class keko_blufor_mmg_asst : keko_blufor_soldier {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class keko_blufor_at : keko_blufor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class keko_blufor_at_asst : keko_blufor_soldier {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class keko_blufor_aa : keko_blufor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class keko_blufor_aa_asst : keko_blufor_soldier {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class keko_blufor_marksman : keko_blufor_soldier {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class keko_blufor_sniper : keko_blufor_soldier {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class keko_blufor_spotter : keko_blufor_soldier {
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class keko_blufor_eod : keko_blufor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class keko_blufor_engineer : keko_blufor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class keko_blufor_driver : keko_blufor_soldier {
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class keko_blufor_heli_pilot : keko_blufor_soldier {
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class keko_blufor_heli_crew : keko_blufor_soldier {
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class keko_blufor_jet_pilot : keko_blufor_soldier {
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class keko_blufor_jtac : keko_blufor_soldier {
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class keko_blufor_uav : keko_blufor_soldier {
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class keko_blufor_survivor : keko_blufor_soldier {
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class keko_blufor_custom1 : keko_blufor_soldier {
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class keko_blufor_custom2 : keko_blufor_soldier {
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class keko_blufor_custom3 : keko_blufor_soldier {
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class keko_blufor_custom4 : keko_blufor_soldier {
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class keko_blufor_custom5 : keko_blufor_soldier {
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class keko_blufor_custom6 : keko_blufor_soldier {
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class keko_blufor_custom7 : keko_blufor_soldier {
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class keko_blufor_custom8 : keko_blufor_soldier {
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class keko_blufor_custom9 : keko_blufor_soldier {
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};






	class SoldierGB;
	class I_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_indfor_soldier : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
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
		displayName = "Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "kekoSoldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_indfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_indfor_command : keko_indfor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class keko_indfor_lead : keko_indfor_soldier {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class keko_indfor_sergeant : keko_indfor_soldier {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class keko_indfor_sql : keko_indfor_soldier {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class keko_indfor_ftl : keko_indfor_soldier {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class keko_indfor_doctor : keko_indfor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class keko_indfor_medic : keko_indfor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class keko_indfor_rifleman : keko_indfor_soldier {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class keko_indfor_rifleman_at : keko_indfor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class keko_indfor_rifleman_at_tanks : keko_indfor_soldier {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class keko_indfor_grenadier : keko_indfor_soldier {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class keko_indfor_lmg : keko_indfor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class keko_indfor_lmg_asst : keko_indfor_soldier {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class keko_indfor_mmg : keko_indfor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class keko_indfor_mmg_asst : keko_indfor_soldier {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class keko_indfor_at : keko_indfor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class keko_indfor_at_asst : keko_indfor_soldier {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class keko_indfor_aa : keko_indfor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class keko_indfor_aa_asst : keko_indfor_soldier {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class keko_indfor_marksman : keko_indfor_soldier {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class keko_indfor_sniper : keko_indfor_soldier {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class keko_indfor_spotter : keko_indfor_soldier {
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class keko_indfor_eod : keko_indfor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class keko_indfor_engineer : keko_indfor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class keko_indfor_driver : keko_indfor_soldier {
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class keko_indfor_heli_pilot : keko_indfor_soldier {
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class keko_indfor_heli_crew : keko_indfor_soldier {
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class keko_indfor_jet_pilot : keko_indfor_soldier {
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class keko_indfor_jtac : keko_indfor_soldier {
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class keko_indfor_uav : keko_indfor_soldier {
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class keko_indfor_survivor : keko_indfor_soldier {
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class keko_indfor_custom1 : keko_indfor_soldier {
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class keko_indfor_custom2 : keko_indfor_soldier {
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class keko_indfor_custom3 : keko_indfor_soldier {
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class keko_indfor_custom4 : keko_indfor_soldier {
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class keko_indfor_custom5 : keko_indfor_soldier {
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class keko_indfor_custom6 : keko_indfor_soldier {
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class keko_indfor_custom7 : keko_indfor_soldier {
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class keko_indfor_custom8 : keko_indfor_soldier {
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class keko_indfor_custom9 : keko_indfor_soldier {
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};








	class SoldierEB;
	class O_Soldier_base_F : SoldierEB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_opfor_soldier : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
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
		displayName = "Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "kekoSoldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_opfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_opfor_command : keko_opfor_soldier {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class keko_opfor_lead : keko_opfor_soldier {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class keko_opfor_sergeant : keko_opfor_soldier {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class keko_opfor_sql : keko_opfor_soldier {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class keko_opfor_ftl : keko_opfor_soldier {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class keko_opfor_doctor : keko_opfor_soldier {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class keko_opfor_medic : keko_opfor_soldier {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class keko_opfor_rifleman : keko_opfor_soldier {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class keko_opfor_rifleman_at : keko_opfor_soldier {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class keko_opfor_rifleman_at_tanks : keko_opfor_soldier {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class keko_opfor_grenadier : keko_opfor_soldier {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class keko_opfor_lmg : keko_opfor_soldier {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class keko_opfor_lmg_asst : keko_opfor_soldier {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class keko_opfor_mmg : keko_opfor_soldier {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class keko_opfor_mmg_asst : keko_opfor_soldier {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class keko_opfor_at : keko_opfor_soldier {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class keko_opfor_at_asst : keko_opfor_soldier {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class keko_opfor_aa : keko_opfor_soldier {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class keko_opfor_aa_asst : keko_opfor_soldier {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class keko_opfor_marksman : keko_opfor_soldier {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class keko_opfor_sniper : keko_opfor_soldier {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class keko_opfor_spotter : keko_opfor_soldier {
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class keko_opfor_eod : keko_opfor_soldier {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class keko_opfor_engineer : keko_opfor_soldier {
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class keko_opfor_driver : keko_opfor_soldier {
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class keko_opfor_heli_pilot : keko_opfor_soldier {
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class keko_opfor_heli_crew : keko_opfor_soldier {
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class keko_opfor_jet_pilot : keko_opfor_soldier {
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class keko_opfor_jtac : keko_opfor_soldier {
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class keko_opfor_uav : keko_opfor_soldier {
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class keko_opfor_survivor : keko_opfor_soldier {
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class keko_opfor_custom1 : keko_opfor_soldier {
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class keko_opfor_custom2 : keko_opfor_soldier {
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class keko_opfor_custom3 : keko_opfor_soldier {
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class keko_opfor_custom4 : keko_opfor_soldier {
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class keko_opfor_custom5 : keko_opfor_soldier {
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class keko_opfor_custom6 : keko_opfor_soldier {
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class keko_opfor_custom7 : keko_opfor_soldier {
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class keko_opfor_custom8 : keko_opfor_soldier {
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class keko_opfor_custom9 : keko_opfor_soldier {
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};

};
