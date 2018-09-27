class CfgVehicles {

	//units
	class SoldierWB;
	class B_Soldier_base_F : SoldierWB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class GVAR(blufor_soldier) : B_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 1;
		faction = QGVAR(blufor);
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
			AttributesChanged3DEN = QUOTE(if ((_this select 0) isKindOf QQGVAR(blufor_soldier) && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call QQFUNC(fnc_addRoleDescription);};);
		};
	};

	class GVAR(blufor_command) : GVAR(blufor_soldier) {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class GVAR(blufor_lead) : GVAR(blufor_soldier) {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class GVAR(blufor_sergeant) : GVAR(blufor_soldier) {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class GVAR(blufor_sql) : GVAR(blufor_soldier) {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class GVAR(blufor_ftl) : GVAR(blufor_soldier) {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class GVAR(blufor_doctor) : GVAR(blufor_soldier) {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class GVAR(blufor_medic) : GVAR(blufor_soldier) {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class GVAR(blufor_rifleman) : GVAR(blufor_soldier) {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class GVAR(blufor_rifleman_at) : GVAR(blufor_soldier) {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class GVAR(blufor_rifleman_at_tanks) : GVAR(blufor_soldier) {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class GVAR(blufor_grenadier) : GVAR(blufor_soldier) {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class GVAR(blufor_lmg) : GVAR(blufor_soldier) {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class GVAR(blufor_lmg_asst) : GVAR(blufor_soldier) {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class GVAR(blufor_mmg) : GVAR(blufor_soldier) {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class GVAR(blufor_mmg_asst) : GVAR(blufor_soldier) {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class GVAR(blufor_at) : GVAR(blufor_soldier) {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class GVAR(blufor_at_asst) : GVAR(blufor_soldier) {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class GVAR(blufor_aa) : GVAR(blufor_soldier) {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class GVAR(blufor_aa_asst) : GVAR(blufor_soldier) {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class GVAR(blufor_marksman) : GVAR(blufor_soldier) {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class GVAR(blufor_sniper) : GVAR(blufor_soldier) {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class GVAR(blufor_spotter) : GVAR(blufor_soldier){
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class GVAR(blufor_eod) : GVAR(blufor_soldier){
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class GVAR(blufor_engineer) : GVAR(blufor_soldier){
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class GVAR(blufor_driver) : GVAR(blufor_soldier){
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class GVAR(blufor_heli_pilot) : GVAR(blufor_soldier){
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class GVAR(blufor_heli_crew) : GVAR(blufor_soldier){
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class GVAR(blufor_jet_pilot) : GVAR(blufor_soldier){
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class GVAR(blufor_jtac) : GVAR(blufor_soldier){
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class GVAR(blufor_uav) : GVAR(blufor_soldier){
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class GVAR(blufor_survivor) : GVAR(blufor_soldier){
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class GVAR(blufor_custom1) : GVAR(blufor_soldier){
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class GVAR(blufor_custom2) : GVAR(blufor_soldier){
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class GVAR(blufor_custom3) : GVAR(blufor_soldier){
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class GVAR(blufor_custom4) : GVAR(blufor_soldier){
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class GVAR(blufor_custom5) : GVAR(blufor_soldier){
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class GVAR(blufor_custom6) : GVAR(blufor_soldier){
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class GVAR(blufor_custom7) : GVAR(blufor_soldier){
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class GVAR(blufor_custom8) : GVAR(blufor_soldier){
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class GVAR(blufor_custom9) : GVAR(blufor_soldier){
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};






	class SoldierGB;
	class I_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class GVAR(indfor_soldier) : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 2;
		faction = QGVAR(indfor);
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
			AttributesChanged3DEN = QUOTE(if ((_this select 0) isKindOf QQGVAR(indfor_soldier) && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call QQFUNC(fnc_addRoleDescription);};);
		};
	};

	class GVAR(indfor_command) : GVAR(indfor_soldier) {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class GVAR(indfor_lead) : GVAR(indfor_soldier) {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class GVAR(indfor_sergeant) : GVAR(indfor_soldier) {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class GVAR(indfor_sql) : GVAR(indfor_soldier) {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class GVAR(indfor_ftl) : GVAR(indfor_soldier) {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class GVAR(indfor_doctor) : GVAR(indfor_soldier) {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class GVAR(indfor_medic) : GVAR(indfor_soldier) {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class GVAR(indfor_rifleman) : GVAR(indfor_soldier) {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class GVAR(indfor_rifleman_at) : GVAR(indfor_soldier) {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class GVAR(indfor_rifleman_at_tanks) : GVAR(indfor_soldier) {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class GVAR(indfor_grenadier) : GVAR(indfor_soldier) {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class GVAR(indfor_lmg) : GVAR(indfor_soldier) {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class GVAR(indfor_lmg_asst) : GVAR(indfor_soldier) {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class GVAR(indfor_mmg) : GVAR(indfor_soldier) {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class GVAR(indfor_mmg_asst) : GVAR(indfor_soldier) {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class GVAR(indfor_at) : GVAR(indfor_soldier) {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class GVAR(indfor_at_asst) : GVAR(indfor_soldier) {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class GVAR(indfor_aa) : GVAR(indfor_soldier) {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class GVAR(indfor_aa_asst) : GVAR(indfor_soldier) {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class GVAR(indfor_marksman) : GVAR(indfor_soldier) {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class GVAR(indfor_sniper) : GVAR(indfor_soldier) {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class GVAR(indfor_spotter) : GVAR(indfor_soldier) {
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class GVAR(indfor_eod) : GVAR(indfor_soldier) {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class GVAR(indfor_engineer) : GVAR(indfor_soldier) {
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class GVAR(indfor_driver) : GVAR(indfor_soldier) {
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class GVAR(indfor_heli_pilot) : GVAR(indfor_soldier) {
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class GVAR(indfor_heli_crew) : GVAR(indfor_soldier) {
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class GVAR(indfor_jet_pilot) : GVAR(indfor_soldier) {
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class GVAR(indfor_jtac) : GVAR(indfor_soldier) {
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class GVAR(indfor_uav) : GVAR(indfor_soldier) {
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class GVAR(indfor_survivor) : GVAR(indfor_soldier) {
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class GVAR(indfor_custom1) : GVAR(indfor_soldier) {
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class GVAR(indfor_custom2) : GVAR(indfor_soldier) {
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class GVAR(indfor_custom3) : GVAR(indfor_soldier) {
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class GVAR(indfor_custom4) : GVAR(indfor_soldier) {
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class GVAR(indfor_custom5) : GVAR(indfor_soldier) {
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class GVAR(indfor_custom6) : GVAR(indfor_soldier) {
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class GVAR(indfor_custom7) : GVAR(indfor_soldier) {
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class GVAR(indfor_custom8) : GVAR(indfor_soldier) {
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class GVAR(indfor_custom9) : GVAR(indfor_soldier) {
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};








	class SoldierEB;
	class O_Soldier_base_F : SoldierEB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class GVAR(opfor_soldier) : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 1;
		side = 0;
		faction = QGVAR(opfor);
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
			AttributesChanged3DEN = QUOTE(if ((_this select 0) isKindOf QQGVAR(opfor_soldier) && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call QQFUNC(fnc_addRoleDescription);};);
		};
	};

	class GVAR(opfor_command) : GVAR(opfor_soldier) {
		displayName = "Zeus";
		icon = "iconManOfficer";
		loadoutDummy = "kekoCommand";
	};

	class GVAR(opfor_lead) : GVAR(opfor_soldier) {
		displayName = "Platoon Lead";
		icon = "iconManOfficer";
		loadoutDummy = "kekoLead";
	};

	class GVAR(opfor_sergeant) : GVAR(opfor_soldier) {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
		loadoutDummy = "kekoSergeant";
	};

	class GVAR(opfor_sql) : GVAR(opfor_soldier) {
		displayName = "Squad Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoSQL";
	};

	class GVAR(opfor_ftl) : GVAR(opfor_soldier) {
		displayName = "Fire-Team Leader";
		icon = "iconManLeader";
		loadoutDummy = "kekoFTL";
	};

	class GVAR(opfor_doctor) : GVAR(opfor_soldier) {
		displayName = "Doctor";
		icon = "iconManMedic";
		loadoutDummy = "kekoDoctor";
	};

	class GVAR(opfor_medic) : GVAR(opfor_soldier) {
		displayName = "Medic";
		icon = "iconManMedic";
		loadoutDummy = "kekoMedic";
	};



	class GVAR(opfor_rifleman) : GVAR(opfor_soldier) {
		displayName = "Rifleman";
		loadoutDummy = "kekoRifleman";
	};

	class GVAR(opfor_rifleman_at) : GVAR(opfor_soldier) {
		displayName = "Rifleman AT";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanAT";
	};

	class GVAR(opfor_rifleman_at_tanks) : GVAR(opfor_soldier) {
		displayName = "Rifleman AT (Tanks DLC)";
		icon = "iconManAT";
		loadoutDummy = "kekoRiflemanATTanks";
	};

	class GVAR(opfor_grenadier) : GVAR(opfor_soldier) {
		displayName = "Grenadier";
		loadoutDummy = "kekoGrenadier";
	};

	class GVAR(opfor_lmg) : GVAR(opfor_soldier) {
		displayName = "LMG";
		icon = "iconManMG";
		loadoutDummy = "kekoLMG";
	};

	class GVAR(opfor_lmg_asst) : GVAR(opfor_soldier) {
		displayName = "LMG Asst.";
		loadoutDummy = "kekoLMGAsst";
	};



	class GVAR(opfor_mmg) : GVAR(opfor_soldier) {
		displayName = "Machine Gunner";
		icon = "iconManMG";
		loadoutDummy = "kekoMMG";
	};

	class GVAR(opfor_mmg_asst) : GVAR(opfor_soldier) {
		displayName = "Machine Gunner Asst.";
		loadoutDummy = "kekoMMGAsst";
	};

	class GVAR(opfor_at) : GVAR(opfor_soldier) {
		displayName = "AT Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoATSpecialist";
	};

	class GVAR(opfor_at_asst) : GVAR(opfor_soldier) {
		displayName = "AT Specialist Asst.";
		loadoutDummy = "kekoATSpecialistAsst";
	};

	class GVAR(opfor_aa) : GVAR(opfor_soldier) {
		displayName = "AA Specialist";
		icon = "iconManAT";
		loadoutDummy = "kekoAASpecialist";
	};

	class GVAR(opfor_aa_asst) : GVAR(opfor_soldier) {
		displayName = "AA Specialist Asst.";
		loadoutDummy = "kekoAASpecialistAsst";
	};



	class GVAR(opfor_marksman) : GVAR(opfor_soldier) {
		displayName = "Marksman";
		loadoutDummy = "kekoMarksman";
	};

	class GVAR(opfor_sniper) : GVAR(opfor_soldier) {
		displayName = "Sniper";
		loadoutDummy = "kekoSniper";
	};

	class GVAR(opfor_spotter) : GVAR(opfor_soldier) {
		displayName = "Spotter";
		loadoutDummy = "kekoSpotter";
	};

	class GVAR(opfor_eod) : GVAR(opfor_soldier) {
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		loadoutDummy = "kekoEOD";
	};

	class GVAR(opfor_engineer) : GVAR(opfor_soldier) {
		displayName = "Engineer";
		icon = "iconManEngineer";
		loadoutDummy = "kekoEngineer";
	};

	class GVAR(opfor_driver) : GVAR(opfor_soldier) {
		displayName = "Driver/Crewman";
		loadoutDummy = "kekoDriver";
	};

	class GVAR(opfor_heli_pilot) : GVAR(opfor_soldier) {
		displayName = "Helicopter Pilot";
		loadoutDummy = "kekoHeliPilot";
	};

	class GVAR(opfor_heli_crew) : GVAR(opfor_soldier) {
		displayName = "Helicopter Crew";
		loadoutDummy = "kekoHeliCrew";
	};

	class GVAR(opfor_jet_pilot) : GVAR(opfor_soldier) {
		displayName = "Jet Pilot";
		loadoutDummy = "kekoJetPilot";
	};

	class GVAR(opfor_jtac) : GVAR(opfor_soldier) {
		displayName = "JTAC";
		loadoutDummy = "kekoJTAC";
	};

	class GVAR(opfor_uav) : GVAR(opfor_soldier) {
		displayName = "UAV Operator";
		loadoutDummy = "kekoUAVOperator";
	};

	class GVAR(opfor_survivor) : GVAR(opfor_soldier) {
		displayName = "Survivor";
		loadoutDummy = "kekoSurvivor";
	};

	class GVAR(opfor_custom1) : GVAR(opfor_soldier) {
		displayName = "Custom 1";
		loadoutDummy = "kekoCustom1";
	};

	class GVAR(opfor_custom2) : GVAR(opfor_soldier) {
		displayName = "Custom 2";
		loadoutDummy = "kekoCustom2";
	};

	class GVAR(opfor_custom3) : GVAR(opfor_soldier) {
		displayName = "Custom 3";
		loadoutDummy = "kekoCustom3";
	};

	class GVAR(opfor_custom4) : GVAR(opfor_soldier) {
		displayName = "Custom 4";
		loadoutDummy = "kekoCustom4";
	};

	class GVAR(opfor_custom5) : GVAR(opfor_soldier) {
		displayName = "Custom 5";
		loadoutDummy = "kekoCustom5";
	};

	class GVAR(opfor_custom6) : GVAR(opfor_soldier) {
		displayName = "Custom 6";
		loadoutDummy = "kekoCustom6";
	};

	class GVAR(opfor_custom7) : GVAR(opfor_soldier) {
		displayName = "Custom 7";
		loadoutDummy = "kekoCustom7";
	};

	class GVAR(opfor_custom8) : GVAR(opfor_soldier) {
		displayName = "Custom 8";
		loadoutDummy = "kekoCustom8";
	};

	class GVAR(opfor_custom9) : GVAR(opfor_soldier) {
		displayName = "Custom 9";
		loadoutDummy = "kekoCustom9";
	};



	// Legacy units
	#include "CfgVehiclesLegacy.hpp"

};
