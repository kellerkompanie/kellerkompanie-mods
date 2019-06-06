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
        loadoutDummy = "Soldier";

        class EventHandlers: EventHandlers {
            AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_faction_generic_blufor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
        };
    };

    class GVAR(blufor_command) : GVAR(blufor_soldier) {
        displayName = "Zeus";
        icon = "iconManOfficer";
        loadoutDummy = "Command";
    };

    class GVAR(blufor_lead) : GVAR(blufor_soldier) {
        displayName = "Platoon Lead";
        icon = "iconManOfficer";
        loadoutDummy = "Lead";
    };

    class GVAR(blufor_sergeant) : GVAR(blufor_soldier) {
        displayName = "Platoon Sergeant";
        icon = "iconManLeader";
        loadoutDummy = "Sergeant";
    };

    class GVAR(blufor_sql) : GVAR(blufor_soldier) {
        displayName = "Squad Leader";
        icon = "iconManLeader";
        loadoutDummy = "SQL";
    };

    class GVAR(blufor_ftl) : GVAR(blufor_soldier) {
        displayName = "Fire-Team Leader";
        icon = "iconManLeader";
        loadoutDummy = "FTL";
    };

    class GVAR(blufor_doctor) : GVAR(blufor_soldier) {
        displayName = "Platoon Medic";
        icon = "iconManMedic";
        loadoutDummy = "Doctor";
    };

    class GVAR(blufor_medic) : GVAR(blufor_soldier) {
        displayName = "Medic";
        icon = "iconManMedic";
        loadoutDummy = "Medic";
    };



    class GVAR(blufor_rifleman) : GVAR(blufor_soldier) {
        displayName = "Rifleman";
        loadoutDummy = "Rifleman";
    };

    class GVAR(blufor_rifleman_at) : GVAR(blufor_soldier) {
        displayName = "Rifleman AT";
        icon = "iconManAT";
        loadoutDummy = "RiflemanAT";
    };

    class GVAR(blufor_rifleman_at_tanks) : GVAR(blufor_soldier) {
        displayName = "Rifleman AT (Tanks DLC)";
        icon = "iconManAT";
        loadoutDummy = "RiflemanATTanks";
    };

    class GVAR(blufor_grenadier) : GVAR(blufor_soldier) {
        displayName = "Grenadier";
        loadoutDummy = "Grenadier";
    };

    class GVAR(blufor_lmg) : GVAR(blufor_soldier) {
        displayName = "LMG";
        icon = "iconManMG";
        loadoutDummy = "LMG";
    };

    class GVAR(blufor_lmg_asst) : GVAR(blufor_soldier) {
        displayName = "LMG Asst.";
        loadoutDummy = "LMGAsst";
    };



    class GVAR(blufor_mmg) : GVAR(blufor_soldier) {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        loadoutDummy = "MMG";
    };

    class GVAR(blufor_mmg_asst) : GVAR(blufor_soldier) {
        displayName = "Machine Gunner Asst.";
        loadoutDummy = "MMGAsst";
    };

    class GVAR(blufor_at) : GVAR(blufor_soldier) {
        displayName = "AT Specialist";
        icon = "iconManAT";
        loadoutDummy = "ATSpecialist";
    };

    class GVAR(blufor_at_asst) : GVAR(blufor_soldier) {
        displayName = "AT Specialist Asst.";
        loadoutDummy = "ATSpecialistAsst";
    };

    class GVAR(blufor_aa) : GVAR(blufor_soldier) {
        displayName = "AA Specialist";
        icon = "iconManAT";
        loadoutDummy = "AASpecialist";
    };

    class GVAR(blufor_aa_asst) : GVAR(blufor_soldier) {
        displayName = "AA Specialist Asst.";
        loadoutDummy = "AASpecialistAsst";
    };



    class GVAR(blufor_marksman) : GVAR(blufor_soldier) {
        displayName = "Marksman";
        loadoutDummy = "Marksman";
    };

    class GVAR(blufor_sniper) : GVAR(blufor_soldier) {
        displayName = "Sniper";
        loadoutDummy = "Sniper";
    };

    class GVAR(blufor_spotter) : GVAR(blufor_soldier){
        displayName = "Spotter";
        loadoutDummy = "Spotter";
    };

    class GVAR(blufor_eod) : GVAR(blufor_soldier){
        displayName = "Explosive Specialist";
        icon = "iconManExplosive";
        loadoutDummy = "EOD";
    };

    class GVAR(blufor_engineer) : GVAR(blufor_soldier){
        displayName = "Engineer";
        icon = "iconManEngineer";
        loadoutDummy = "Engineer";
    };

    class GVAR(blufor_driver) : GVAR(blufor_soldier){
        displayName = "Driver/Crewman";
        loadoutDummy = "Driver";
    };

    class GVAR(blufor_heli_pilot) : GVAR(blufor_soldier){
        displayName = "Helicopter Pilot";
        loadoutDummy = "HeliPilot";
    };

    class GVAR(blufor_heli_crew) : GVAR(blufor_soldier){
        displayName = "Helicopter Crew";
        loadoutDummy = "HeliCrew";
    };

    class GVAR(blufor_jet_pilot) : GVAR(blufor_soldier){
        displayName = "Jet Pilot";
        loadoutDummy = "JetPilot";
    };

    class GVAR(blufor_jtac) : GVAR(blufor_soldier){
        displayName = "JTAC";
        loadoutDummy = "JTAC";
    };

    class GVAR(blufor_uav) : GVAR(blufor_soldier){
        displayName = "UAV Operator";
        loadoutDummy = "UAVOperator";
    };

    class GVAR(blufor_survivor) : GVAR(blufor_soldier){
        displayName = "Survivor";
        loadoutDummy = "Survivor";
    };

    class GVAR(blufor_custom1) : GVAR(blufor_soldier){
        displayName = "Custom 1";
        loadoutDummy = "Custom1";
    };

    class GVAR(blufor_custom2) : GVAR(blufor_soldier){
        displayName = "Custom 2";
        loadoutDummy = "Custom2";
    };

    class GVAR(blufor_custom3) : GVAR(blufor_soldier){
        displayName = "Custom 3";
        loadoutDummy = "Custom3";
    };

    class GVAR(blufor_custom4) : GVAR(blufor_soldier){
        displayName = "Custom 4";
        loadoutDummy = "Custom4";
    };

    class GVAR(blufor_custom5) : GVAR(blufor_soldier){
        displayName = "Custom 5";
        loadoutDummy = "Custom5";
    };

    class GVAR(blufor_custom6) : GVAR(blufor_soldier){
        displayName = "Custom 6";
        loadoutDummy = "Custom6";
    };

    class GVAR(blufor_custom7) : GVAR(blufor_soldier){
        displayName = "Custom 7";
        loadoutDummy = "Custom7";
    };

    class GVAR(blufor_custom8) : GVAR(blufor_soldier){
        displayName = "Custom 8";
        loadoutDummy = "Custom8";
    };

    class GVAR(blufor_custom9) : GVAR(blufor_soldier){
        displayName = "Custom 9";
        loadoutDummy = "Custom9";
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
        loadoutDummy = "Soldier";

        class EventHandlers: EventHandlers {
            AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_faction_generic_indfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
        };
    };

    class GVAR(indfor_command) : GVAR(indfor_soldier) {
        displayName = "Zeus";
        icon = "iconManOfficer";
        loadoutDummy = "Command";
    };

    class GVAR(indfor_lead) : GVAR(indfor_soldier) {
        displayName = "Platoon Lead";
        icon = "iconManOfficer";
        loadoutDummy = "Lead";
    };

    class GVAR(indfor_sergeant) : GVAR(indfor_soldier) {
        displayName = "Platoon Sergeant";
        icon = "iconManLeader";
        loadoutDummy = "Sergeant";
    };

    class GVAR(indfor_sql) : GVAR(indfor_soldier) {
        displayName = "Squad Leader";
        icon = "iconManLeader";
        loadoutDummy = "SQL";
    };

    class GVAR(indfor_ftl) : GVAR(indfor_soldier) {
        displayName = "Fire-Team Leader";
        icon = "iconManLeader";
        loadoutDummy = "FTL";
    };

    class GVAR(indfor_doctor) : GVAR(indfor_soldier) {
        displayName = "Platoon Medic";
        icon = "iconManMedic";
        loadoutDummy = "Doctor";
    };

    class GVAR(indfor_medic) : GVAR(indfor_soldier) {
        displayName = "Medic";
        icon = "iconManMedic";
        loadoutDummy = "Medic";
    };



    class GVAR(indfor_rifleman) : GVAR(indfor_soldier) {
        displayName = "Rifleman";
        loadoutDummy = "Rifleman";
    };

    class GVAR(indfor_rifleman_at) : GVAR(indfor_soldier) {
        displayName = "Rifleman AT";
        icon = "iconManAT";
        loadoutDummy = "RiflemanAT";
    };

    class GVAR(indfor_rifleman_at_tanks) : GVAR(indfor_soldier) {
        displayName = "Rifleman AT (Tanks DLC)";
        icon = "iconManAT";
        loadoutDummy = "RiflemanATTanks";
    };

    class GVAR(indfor_grenadier) : GVAR(indfor_soldier) {
        displayName = "Grenadier";
        loadoutDummy = "Grenadier";
    };

    class GVAR(indfor_lmg) : GVAR(indfor_soldier) {
        displayName = "LMG";
        icon = "iconManMG";
        loadoutDummy = "LMG";
    };

    class GVAR(indfor_lmg_asst) : GVAR(indfor_soldier) {
        displayName = "LMG Asst.";
        loadoutDummy = "LMGAsst";
    };



    class GVAR(indfor_mmg) : GVAR(indfor_soldier) {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        loadoutDummy = "MMG";
    };

    class GVAR(indfor_mmg_asst) : GVAR(indfor_soldier) {
        displayName = "Machine Gunner Asst.";
        loadoutDummy = "MMGAsst";
    };

    class GVAR(indfor_at) : GVAR(indfor_soldier) {
        displayName = "AT Specialist";
        icon = "iconManAT";
        loadoutDummy = "ATSpecialist";
    };

    class GVAR(indfor_at_asst) : GVAR(indfor_soldier) {
        displayName = "AT Specialist Asst.";
        loadoutDummy = "ATSpecialistAsst";
    };

    class GVAR(indfor_aa) : GVAR(indfor_soldier) {
        displayName = "AA Specialist";
        icon = "iconManAT";
        loadoutDummy = "AASpecialist";
    };

    class GVAR(indfor_aa_asst) : GVAR(indfor_soldier) {
        displayName = "AA Specialist Asst.";
        loadoutDummy = "AASpecialistAsst";
    };



    class GVAR(indfor_marksman) : GVAR(indfor_soldier) {
        displayName = "Marksman";
        loadoutDummy = "Marksman";
    };

    class GVAR(indfor_sniper) : GVAR(indfor_soldier) {
        displayName = "Sniper";
        loadoutDummy = "Sniper";
    };

    class GVAR(indfor_spotter) : GVAR(indfor_soldier) {
        displayName = "Spotter";
        loadoutDummy = "Spotter";
    };

    class GVAR(indfor_eod) : GVAR(indfor_soldier) {
        displayName = "Explosive Specialist";
        icon = "iconManExplosive";
        loadoutDummy = "EOD";
    };

    class GVAR(indfor_engineer) : GVAR(indfor_soldier) {
        displayName = "Engineer";
        icon = "iconManEngineer";
        loadoutDummy = "Engineer";
    };

    class GVAR(indfor_driver) : GVAR(indfor_soldier) {
        displayName = "Driver/Crewman";
        loadoutDummy = "Driver";
    };

    class GVAR(indfor_heli_pilot) : GVAR(indfor_soldier) {
        displayName = "Helicopter Pilot";
        loadoutDummy = "HeliPilot";
    };

    class GVAR(indfor_heli_crew) : GVAR(indfor_soldier) {
        displayName = "Helicopter Crew";
        loadoutDummy = "HeliCrew";
    };

    class GVAR(indfor_jet_pilot) : GVAR(indfor_soldier) {
        displayName = "Jet Pilot";
        loadoutDummy = "JetPilot";
    };

    class GVAR(indfor_jtac) : GVAR(indfor_soldier) {
        displayName = "JTAC";
        loadoutDummy = "JTAC";
    };

    class GVAR(indfor_uav) : GVAR(indfor_soldier) {
        displayName = "UAV Operator";
        loadoutDummy = "UAVOperator";
    };

    class GVAR(indfor_survivor) : GVAR(indfor_soldier) {
        displayName = "Survivor";
        loadoutDummy = "Survivor";
    };

    class GVAR(indfor_custom1) : GVAR(indfor_soldier) {
        displayName = "Custom 1";
        loadoutDummy = "Custom1";
    };

    class GVAR(indfor_custom2) : GVAR(indfor_soldier) {
        displayName = "Custom 2";
        loadoutDummy = "Custom2";
    };

    class GVAR(indfor_custom3) : GVAR(indfor_soldier) {
        displayName = "Custom 3";
        loadoutDummy = "Custom3";
    };

    class GVAR(indfor_custom4) : GVAR(indfor_soldier) {
        displayName = "Custom 4";
        loadoutDummy = "Custom4";
    };

    class GVAR(indfor_custom5) : GVAR(indfor_soldier) {
        displayName = "Custom 5";
        loadoutDummy = "Custom5";
    };

    class GVAR(indfor_custom6) : GVAR(indfor_soldier) {
        displayName = "Custom 6";
        loadoutDummy = "Custom6";
    };

    class GVAR(indfor_custom7) : GVAR(indfor_soldier) {
        displayName = "Custom 7";
        loadoutDummy = "Custom7";
    };

    class GVAR(indfor_custom8) : GVAR(indfor_soldier) {
        displayName = "Custom 8";
        loadoutDummy = "Custom8";
    };

    class GVAR(indfor_custom9) : GVAR(indfor_soldier) {
        displayName = "Custom 9";
        loadoutDummy = "Custom9";
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
        loadoutDummy = "Soldier";

        class EventHandlers: EventHandlers {
            AttributesChanged3DEN = "if ((_this select 0) isKindOf 'keko_faction_generic_opfor_soldier' && (((_this select 0) get3DENAttribute 'description') select 0) isEqualTo '') then {_entity = _this select 0; _entity set3DENAttribute ['ControlMP', true]; _entity call keko_faction_generic_fnc_addRoleDescription;};";
        };
    };

    class GVAR(opfor_command) : GVAR(opfor_soldier) {
        displayName = "Zeus";
        icon = "iconManOfficer";
        loadoutDummy = "Command";
    };

    class GVAR(opfor_lead) : GVAR(opfor_soldier) {
        displayName = "Platoon Lead";
        icon = "iconManOfficer";
        loadoutDummy = "Lead";
    };

    class GVAR(opfor_sergeant) : GVAR(opfor_soldier) {
        displayName = "Platoon Sergeant";
        icon = "iconManLeader";
        loadoutDummy = "Sergeant";
    };

    class GVAR(opfor_sql) : GVAR(opfor_soldier) {
        displayName = "Squad Leader";
        icon = "iconManLeader";
        loadoutDummy = "SQL";
    };

    class GVAR(opfor_ftl) : GVAR(opfor_soldier) {
        displayName = "Fire-Team Leader";
        icon = "iconManLeader";
        loadoutDummy = "FTL";
    };

    class GVAR(opfor_doctor) : GVAR(opfor_soldier) {
        displayName = "Platoon Medic";
        icon = "iconManMedic";
        loadoutDummy = "Doctor";
    };

    class GVAR(opfor_medic) : GVAR(opfor_soldier) {
        displayName = "Medic";
        icon = "iconManMedic";
        loadoutDummy = "Medic";
    };



    class GVAR(opfor_rifleman) : GVAR(opfor_soldier) {
        displayName = "Rifleman";
        loadoutDummy = "Rifleman";
    };

    class GVAR(opfor_rifleman_at) : GVAR(opfor_soldier) {
        displayName = "Rifleman AT";
        icon = "iconManAT";
        loadoutDummy = "RiflemanAT";
    };

    class GVAR(opfor_rifleman_at_tanks) : GVAR(opfor_soldier) {
        displayName = "Rifleman AT (Tanks DLC)";
        icon = "iconManAT";
        loadoutDummy = "RiflemanATTanks";
    };

    class GVAR(opfor_grenadier) : GVAR(opfor_soldier) {
        displayName = "Grenadier";
        loadoutDummy = "Grenadier";
    };

    class GVAR(opfor_lmg) : GVAR(opfor_soldier) {
        displayName = "LMG";
        icon = "iconManMG";
        loadoutDummy = "LMG";
    };

    class GVAR(opfor_lmg_asst) : GVAR(opfor_soldier) {
        displayName = "LMG Asst.";
        loadoutDummy = "LMGAsst";
    };



    class GVAR(opfor_mmg) : GVAR(opfor_soldier) {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        loadoutDummy = "MMG";
    };

    class GVAR(opfor_mmg_asst) : GVAR(opfor_soldier) {
        displayName = "Machine Gunner Asst.";
        loadoutDummy = "MMGAsst";
    };

    class GVAR(opfor_at) : GVAR(opfor_soldier) {
        displayName = "AT Specialist";
        icon = "iconManAT";
        loadoutDummy = "ATSpecialist";
    };

    class GVAR(opfor_at_asst) : GVAR(opfor_soldier) {
        displayName = "AT Specialist Asst.";
        loadoutDummy = "ATSpecialistAsst";
    };

    class GVAR(opfor_aa) : GVAR(opfor_soldier) {
        displayName = "AA Specialist";
        icon = "iconManAT";
        loadoutDummy = "AASpecialist";
    };

    class GVAR(opfor_aa_asst) : GVAR(opfor_soldier) {
        displayName = "AA Specialist Asst.";
        loadoutDummy = "AASpecialistAsst";
    };



    class GVAR(opfor_marksman) : GVAR(opfor_soldier) {
        displayName = "Marksman";
        loadoutDummy = "Marksman";
    };

    class GVAR(opfor_sniper) : GVAR(opfor_soldier) {
        displayName = "Sniper";
        loadoutDummy = "Sniper";
    };

    class GVAR(opfor_spotter) : GVAR(opfor_soldier) {
        displayName = "Spotter";
        loadoutDummy = "Spotter";
    };

    class GVAR(opfor_eod) : GVAR(opfor_soldier) {
        displayName = "Explosive Specialist";
        icon = "iconManExplosive";
        loadoutDummy = "EOD";
    };

    class GVAR(opfor_engineer) : GVAR(opfor_soldier) {
        displayName = "Engineer";
        icon = "iconManEngineer";
        loadoutDummy = "Engineer";
    };

    class GVAR(opfor_driver) : GVAR(opfor_soldier) {
        displayName = "Driver/Crewman";
        loadoutDummy = "Driver";
    };

    class GVAR(opfor_heli_pilot) : GVAR(opfor_soldier) {
        displayName = "Helicopter Pilot";
        loadoutDummy = "HeliPilot";
    };

    class GVAR(opfor_heli_crew) : GVAR(opfor_soldier) {
        displayName = "Helicopter Crew";
        loadoutDummy = "HeliCrew";
    };

    class GVAR(opfor_jet_pilot) : GVAR(opfor_soldier) {
        displayName = "Jet Pilot";
        loadoutDummy = "JetPilot";
    };

    class GVAR(opfor_jtac) : GVAR(opfor_soldier) {
        displayName = "JTAC";
        loadoutDummy = "JTAC";
    };

    class GVAR(opfor_uav) : GVAR(opfor_soldier) {
        displayName = "UAV Operator";
        loadoutDummy = "UAVOperator";
    };

    class GVAR(opfor_survivor) : GVAR(opfor_soldier) {
        displayName = "Survivor";
        loadoutDummy = "Survivor";
    };

    class GVAR(opfor_custom1) : GVAR(opfor_soldier) {
        displayName = "Custom 1";
        loadoutDummy = "Custom1";
    };

    class GVAR(opfor_custom2) : GVAR(opfor_soldier) {
        displayName = "Custom 2";
        loadoutDummy = "Custom2";
    };

    class GVAR(opfor_custom3) : GVAR(opfor_soldier) {
        displayName = "Custom 3";
        loadoutDummy = "Custom3";
    };

    class GVAR(opfor_custom4) : GVAR(opfor_soldier) {
        displayName = "Custom 4";
        loadoutDummy = "Custom4";
    };

    class GVAR(opfor_custom5) : GVAR(opfor_soldier) {
        displayName = "Custom 5";
        loadoutDummy = "Custom5";
    };

    class GVAR(opfor_custom6) : GVAR(opfor_soldier) {
        displayName = "Custom 6";
        loadoutDummy = "Custom6";
    };

    class GVAR(opfor_custom7) : GVAR(opfor_soldier) {
        displayName = "Custom 7";
        loadoutDummy = "Custom7";
    };

    class GVAR(opfor_custom8) : GVAR(opfor_soldier) {
        displayName = "Custom 8";
        loadoutDummy = "Custom8";
    };

    class GVAR(opfor_custom9) : GVAR(opfor_soldier) {
        displayName = "Custom 9";
        loadoutDummy = "Custom9";
    };



    // Legacy units
    #include "CfgVehiclesLegacy.hpp"

};
