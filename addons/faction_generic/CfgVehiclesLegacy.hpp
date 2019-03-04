

	class keko_blufor_soldier : B_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 1;
		faction = "keko_faction_generic_blufor_legacy";
		vehicleClass = "Men";
		model = "\a3\characters_f\blufor\b_soldier_01.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "(DEPRECATED - DO NOT USE) Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "Soldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_blufor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_blufor_command : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "Command";
	};

	class keko_blufor_lead : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "Lead";
	};

	class keko_blufor_sergeant : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "Sergeant";
	};

	class keko_blufor_sql : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "SQL";
	};

	class keko_blufor_ftl : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "FTL";
	};

	class keko_blufor_doctor : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Doctor";
		icon = "iconManMedic";
		loadoutDummy = "Doctor";
	};

	class keko_blufor_medic : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Medic";
		icon = "iconManMedic";
		loadoutDummy = "Medic";
	};



	class keko_blufor_rifleman : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman";
		loadoutDummy = "Rifleman";
	};

	class keko_blufor_rifleman_at : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "RiflemanAT";
	};

	class keko_blufor_rifleman_at_tanks : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "RiflemanATTanks";
	};

	class keko_blufor_grenadier : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Grenadier";
		loadoutDummy = "Grenadier";
	};

	class keko_blufor_lmg : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG";
		icon = "iconManMG";
		loadoutDummy = "LMG";
	};

	class keko_blufor_lmg_asst : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG Asst.";
		loadoutDummy = "LMGAsst";
	};



	class keko_blufor_mmg : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "MMG";
	};

	class keko_blufor_mmg_asst : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner Asst.";
		loadoutDummy = "MMGAsst";
	};

	class keko_blufor_at : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "ATSpecialist";
	};

	class keko_blufor_at_asst : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist Asst.";
		loadoutDummy = "ATSpecialistAsst";
	};

	class keko_blufor_aa : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "AASpecialist";
	};

	class keko_blufor_aa_asst : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist Asst.";
		loadoutDummy = "AASpecialistAsst";
	};



	class keko_blufor_marksman : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Marksman";
		loadoutDummy = "Marksman";
	};

	class keko_blufor_sniper : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Sniper";
		loadoutDummy = "Sniper";
	};

	class keko_blufor_spotter : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Spotter";
		loadoutDummy = "Spotter";
	};

	class keko_blufor_eod : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "EOD";
	};

	class keko_blufor_engineer : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "Engineer";
	};

	class keko_blufor_driver : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Driver/Crewman";
		loadoutDummy = "Driver";
	};

	class keko_blufor_heli_pilot : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Pilot";
		loadoutDummy = "HeliPilot";
	};

	class keko_blufor_heli_crew : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Crew";
		loadoutDummy = "HeliCrew";
	};

	class keko_blufor_jet_pilot : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Jet Pilot";
		loadoutDummy = "JetPilot";
	};

	class keko_blufor_jtac : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) JTAC";
		loadoutDummy = "JTAC";
	};

	class keko_blufor_uav : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) UAV Operator";
		loadoutDummy = "UAVOperator";
	};

	class keko_blufor_survivor : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Survivor";
		loadoutDummy = "Survivor";
	};

	class keko_blufor_custom1 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 1";
		loadoutDummy = "Custom1";
	};

	class keko_blufor_custom2 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 2";
		loadoutDummy = "Custom2";
	};

	class keko_blufor_custom3 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 3";
		loadoutDummy = "Custom3";
	};

	class keko_blufor_custom4 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 4";
		loadoutDummy = "Custom4";
	};

	class keko_blufor_custom5 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 5";
		loadoutDummy = "Custom5";
	};

	class keko_blufor_custom6 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 6";
		loadoutDummy = "Custom6";
	};

	class keko_blufor_custom7 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 7";
		loadoutDummy = "Custom7";
	};

	class keko_blufor_custom8 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 8";
		loadoutDummy = "Custom8";
	};

	class keko_blufor_custom9 : keko_blufor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 9";
		loadoutDummy = "Custom9";
	};






	class keko_indfor_soldier : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 2;
		faction = "keko_faction_generic_indfor_legacy";
		vehicleClass = "Men";
		model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "(DEPRECATED - DO NOT USE) Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "Soldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_indfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_indfor_command : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "Command";
	};

	class keko_indfor_lead : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "Lead";
	};

	class keko_indfor_sergeant : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "Sergeant";
	};

	class keko_indfor_sql : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "SQL";
	};

	class keko_indfor_ftl : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "FTL";
	};

	class keko_indfor_doctor : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Doctor";
		icon = "iconManMedic";
		loadoutDummy = "Doctor";
	};

	class keko_indfor_medic : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Medic";
		icon = "iconManMedic";
		loadoutDummy = "Medic";
	};



	class keko_indfor_rifleman : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman";
		loadoutDummy = "Rifleman";
	};

	class keko_indfor_rifleman_at : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "RiflemanAT";
	};

	class keko_indfor_rifleman_at_tanks : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "RiflemanATTanks";
	};

	class keko_indfor_grenadier : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Grenadier";
		loadoutDummy = "Grenadier";
	};

	class keko_indfor_lmg : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG";
		icon = "iconManMG";
		loadoutDummy = "LMG";
	};

	class keko_indfor_lmg_asst : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG Asst.";
		loadoutDummy = "LMGAsst";
	};



	class keko_indfor_mmg : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "MMG";
	};

	class keko_indfor_mmg_asst : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner Asst.";
		loadoutDummy = "MMGAsst";
	};

	class keko_indfor_at : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "ATSpecialist";
	};

	class keko_indfor_at_asst : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist Asst.";
		loadoutDummy = "ATSpecialistAsst";
	};

	class keko_indfor_aa : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "AASpecialist";
	};

	class keko_indfor_aa_asst : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist Asst.";
		loadoutDummy = "AASpecialistAsst";
	};



	class keko_indfor_marksman : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Marksman";
		loadoutDummy = "Marksman";
	};

	class keko_indfor_sniper : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Sniper";
		loadoutDummy = "Sniper";
	};

	class keko_indfor_spotter : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Spotter";
		loadoutDummy = "Spotter";
	};

	class keko_indfor_eod : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "EOD";
	};

	class keko_indfor_engineer : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "Engineer";
	};

	class keko_indfor_driver : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Driver/Crewman";
		loadoutDummy = "Driver";
	};

	class keko_indfor_heli_pilot : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Pilot";
		loadoutDummy = "HeliPilot";
	};

	class keko_indfor_heli_crew : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Crew";
		loadoutDummy = "HeliCrew";
	};

	class keko_indfor_jet_pilot : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Jet Pilot";
		loadoutDummy = "JetPilot";
	};

	class keko_indfor_jtac : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) JTAC";
		loadoutDummy = "JTAC";
	};

	class keko_indfor_uav : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) UAV Operator";
		loadoutDummy = "UAVOperator";
	};

	class keko_indfor_survivor : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Survivor";
		loadoutDummy = "Survivor";
	};

	class keko_indfor_custom1 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 1";
		loadoutDummy = "Custom1";
	};

	class keko_indfor_custom2 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 2";
		loadoutDummy = "Custom2";
	};

	class keko_indfor_custom3 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 3";
		loadoutDummy = "Custom3";
	};

	class keko_indfor_custom4 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 4";
		loadoutDummy = "Custom4";
	};

	class keko_indfor_custom5 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 5";
		loadoutDummy = "Custom5";
	};

	class keko_indfor_custom6 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 6";
		loadoutDummy = "Custom6";
	};

	class keko_indfor_custom7 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 7";
		loadoutDummy = "Custom7";
	};

	class keko_indfor_custom8 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 8";
		loadoutDummy = "Custom8";
	};

	class keko_indfor_custom9 : keko_indfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 9";
		loadoutDummy = "Custom9";
	};







	class keko_opfor_soldier : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 0;
		faction = "keko_faction_generic_opfor_legacy";
		vehicleClass = "Men";
		model = "\a3\characters_f\opfor\o_soldier_01.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "(DEPRECATED - DO NOT USE) Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		loadoutDummy = "Soldier";

		class EventHandlers: EventHandlers {
			AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_opfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
		};
	};

	class keko_opfor_command : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "Command";
	};

	class keko_opfor_lead : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "Lead";
	};

	class keko_opfor_sergeant : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "Sergeant";
	};

	class keko_opfor_sql : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "SQL";
	};

	class keko_opfor_ftl : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "FTL";
	};

	class keko_opfor_doctor : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Doctor";
		icon = "iconManMedic";
		loadoutDummy = "Doctor";
	};

	class keko_opfor_medic : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Medic";
		icon = "iconManMedic";
		loadoutDummy = "Medic";
	};



	class keko_opfor_rifleman : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman";
		loadoutDummy = "Rifleman";
	};

	class keko_opfor_rifleman_at : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "RiflemanAT";
	};

	class keko_opfor_rifleman_at_tanks : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "RiflemanATTanks";
	};

	class keko_opfor_grenadier : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Grenadier";
		loadoutDummy = "Grenadier";
	};

	class keko_opfor_lmg : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG";
		icon = "iconManMG";
		loadoutDummy = "LMG";
	};

	class keko_opfor_lmg_asst : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) LMG Asst.";
		loadoutDummy = "LMGAsst";
	};



	class keko_opfor_mmg : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "MMG";
	};

	class keko_opfor_mmg_asst : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Machine Gunner Asst.";
		loadoutDummy = "MMGAsst";
	};

	class keko_opfor_at : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "ATSpecialist";
	};

	class keko_opfor_at_asst : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AT Specialist Asst.";
		loadoutDummy = "ATSpecialistAsst";
	};

	class keko_opfor_aa : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "AASpecialist";
	};

	class keko_opfor_aa_asst : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) AA Specialist Asst.";
		loadoutDummy = "AASpecialistAsst";
	};



	class keko_opfor_marksman : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Marksman";
		loadoutDummy = "Marksman";
	};

	class keko_opfor_sniper : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Sniper";
		loadoutDummy = "Sniper";
	};

	class keko_opfor_spotter : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Spotter";
		loadoutDummy = "Spotter";
	};

	class keko_opfor_eod : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "EOD";
	};

	class keko_opfor_engineer : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "Engineer";
	};

	class keko_opfor_driver : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Driver/Crewman";
		loadoutDummy = "Driver";
	};

	class keko_opfor_heli_pilot : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Pilot";
		loadoutDummy = "HeliPilot";
	};

	class keko_opfor_heli_crew : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Helicopter Crew";
		loadoutDummy = "HeliCrew";
	};

	class keko_opfor_jet_pilot : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Jet Pilot";
		loadoutDummy = "JetPilot";
	};

	class keko_opfor_jtac : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) JTAC";
		loadoutDummy = "JTAC";
	};

	class keko_opfor_uav : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) UAV Operator";
		loadoutDummy = "UAVOperator";
	};

	class keko_opfor_survivor : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Survivor";
		loadoutDummy = "Survivor";
	};

	class keko_opfor_custom1 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 1";
		loadoutDummy = "Custom1";
	};

	class keko_opfor_custom2 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 2";
		loadoutDummy = "Custom2";
	};

	class keko_opfor_custom3 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 3";
		loadoutDummy = "Custom3";
	};

	class keko_opfor_custom4 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 4";
		loadoutDummy = "Custom4";
	};

	class keko_opfor_custom5 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 5";
		loadoutDummy = "Custom5";
	};

	class keko_opfor_custom6 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 6";
		loadoutDummy = "Custom6";
	};

	class keko_opfor_custom7 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 7";
		loadoutDummy = "Custom7";
	};

	class keko_opfor_custom8 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 8";
		loadoutDummy = "Custom8";
	};

	class keko_opfor_custom9 : keko_opfor_soldier {
		displayName = "(DEPRECATED - DO NOT USE) Custom 9";
		loadoutDummy = "Custom9";
	};
