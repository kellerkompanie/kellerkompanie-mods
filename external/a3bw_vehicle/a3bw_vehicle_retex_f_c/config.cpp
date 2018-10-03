////////////////////////////////////////////////////////////////////
//DeRap: a3bw_vehicle\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Wed Oct 03 01:16:07 2018 : 'file' last modified on Thu Sep 08 13:25:03 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSounds
{
	sounds[] = {};
	class alarm_go
	{
		name = "alarm-go";
		sound[] = {"a3bw_veh_retex_f\sounds\alarm-go.ogg",5,1};
		titles[] = {};
	};
	class alarm_prepare
	{
		name = "alarm-prepare";
		sound[] = {"a3bw_veh_retex_f\sounds\alarm-prepare.ogg",5,1};
		titles[] = {};
	};
	class alarm_ramp
	{
		name = "alarm-ramp";
		sound[] = {"a3bw_veh_retex_f\sounds\alarm-ramp.ogg",5,1};
		titles[] = {};
	};
};
class DefaultEventhandlers;
class AnimationSources;
class CfgPatches
{
	class a3bw_vehicle_retex_f
	{
		author = "Williams / OsiriZ";
		name = "Arma III Bundeswehr Retex Pack";
		url = "janldwg@gmail.com";
		units[] = {"BW_Offroad_Feldjager_F","BW_Offroad_F","BW_Offroad_Repair_F","BW_SPw_Fennek_Stan_F","BW_SPw_Fennek_Med_F","BW_SPw_Fennek_SMG_F","BW_SPw_Fennek_GMW_F","BW_MATV_Stan_F","BW_MATV_SMG_F","BW_MATV_GMW_F","BW_MATV_Med_F","BW_LKW7T_Trans_F","BW_LKW7T_Trans_Cov_F","BW_LKW7T_Med_F","BW_LKW7T_Fuel_F","BW_LKW7T_Ammo_F","BW_LKW7T_Repair_F","BW_LKW7T_Device_F","BW_LKW15T_Multi_F","BW_LKW15T_Fuel_F","BW_LKW15T_Ammo_F","BW_LKW15T_Repair_F","BW_Arma_FLW_F","BW_Arma_Trans_F","BW_Arma_Med_F","BW_Pandur_FSW_F","BW_Pandur_Trans_F","BW_Pandur_Med_F","BW_BPz_Nemmera_F","BW_PzH_Sholef_F","BW_MH6_Heer_F","BW_AH6_Heer_F","BW_AW159_Trans_Heer_F","BW_AW159_Med_Heer_F","BW_AW159_CAS_Heer_F","BW_AW101_Trans_Heer_F","BW_AW101_Med_Heer_F","BW_CH67_Trans_Heer_F","BW_CH67_Med_Heer_F","BW_Taru_SC_Heer_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F","BWA3_Weapons","BWA3_Units","BWA3_Puma"};
	};
};
class CfgVehicles
{
	class B_G_Offroad_01_F;
	class BW_Offroad_Base: B_G_Offroad_01_F
	{
		class EventHandlers;
		scope = 0;
		class textureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\offroad\feldjageroffroad_0.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
	};
	class BW_Offroad_Feldjager_F: BW_Offroad_Base
	{
		displayName = "$STR_A3_BW_FeldjaegerOffroadName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "(_this select 0) setVariable ['BIS_enableRandomization', false]; [(_this select 0),0,1,0,0,0,0,0,0] spawn IP_fnc_animateEFOffroad; (_this select 0) execvm ""\a3bw_vehicle\a3bw_vehicle_retex_f_c\scripts\beacons.sqf"";";
			};
		};
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\offroad_feldjaeger_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\offroad\feldjageroffroad_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_Offroad_F: BW_Offroad_Base
	{
		displayName = "$STR_A3_BW_OffroadName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "(_this select 0) setVariable ['BIS_enableRandomization', false]; [(_this select 0),0,1,0,0,0,0,0,0] spawn IP_fnc_animateEFOffroad; (_this select 0) execvm ""\a3bw_vehicle\a3bw_vehicle_retex_f_c\scripts\initoffroad.sqf"";";
			};
		};
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\offroad_stan_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\offroad\feloffroadolive_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class C_Offroad_01_repair_F;
	class BW_Offroad_Repair_F_Base: C_Offroad_01_repair_F
	{
		class EventHandlers;
		scope = 0;
	};
	class BW_Offroad_Repair_F: BW_Offroad_Repair_F_Base
	{
		displayName = "$STR_A3_BW_OffroadRepairName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "(_this select 0) setVariable ['BIS_enableRandomization', false]; [(_this select 0),0,1,0,0,0,0,0,0] spawn IP_fnc_animateEFOffroad;";
			};
		};
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\offroad_repair_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Engineer_Fleck";
		typicalCargo[] = {"BWA3_Engineer_Fleck"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\offroad\feloffroadflecktarn_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_MRAP_03_F;
	class BW_SPw_Fennek_Stan_F: I_MRAP_03_F
	{
		displayName = "$STR_A3_BW_FennekStandardName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\spw_stan_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\fennek\Fennek_Body_Standard_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_SPw_Fennek_Med_F: I_MRAP_03_F
	{
		displayName = "$STR_A3_BW_FennekMedevacName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\spw_san_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Medic_Fleck";
		typicalCargo[] = {"BWA3_Medic_Fleck"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\fennek\Fennek_Body_Medic_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_MRAP_03_hmg_F;
	class BW_SPw_Fennek_SMG_F: I_MRAP_03_hmg_F
	{
		displayName = "$STR_A3_BW_FennekSMGName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\spw_smg_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\fennek\Fennek_Body_SMG_0.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_MRAP_03_gmg_F;
	class BW_SPw_Fennek_GMW_F: I_MRAP_03_gmg_F
	{
		displayName = "$STR_A3_BW_FennekGMWName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\spw_gmw_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\fennek\Fennek_Body_GMW_0.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_MRAP_01_F;
	class BW_MATV_Stan_F: B_MRAP_01_F
	{
		displayName = "$STR_A3_BW_OshkoshMATVFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\matv_stan_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Body_Fleck_0.paa","a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Back_Fleck_1.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class BW_MATV_SMG_F: B_MRAP_01_hmg_F
	{
		displayName = "$STR_A3_BW_OshkoshMATVSMGFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\matv_smg_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Body_Fleck_SMG_0.paa","a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Back_Fleck_SMG_1.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class BW_MATV_GMW_F: B_MRAP_01_gmg_F
	{
		displayName = "$STR_A3_BW_OshkoshMATVGMWFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\matv_gmw_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Body_Fleck_GMW_0.paa","a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Back_Fleck_GMW_1.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_MATV_Med_F: B_MRAP_01_F
	{
		displayName = "$STR_A3_BW_OshkoshMATVMedevacFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\matv_san_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Wheeled_Flecktarn";
		crew = "BWA3_Medic_Fleck";
		typicalCargo[] = {"BWA3_Medic_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Body_Fleck_SAN_0.paa","a3bw_vehicle_retex_f\data\textures\matv\M-ATV_Back_Fleck_SAN_1.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_transport_F;
	class BW_LKW7T_Trans_F: O_Truck_03_transport_F
	{
		displayName = "$STR_A3_BW_Truck7TTransportFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Truck_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_transport_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_transport_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_cargo.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Trans";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_transport_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_transport_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_cargo.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_covered_F;
	class BW_LKW7T_Trans_Cov_F: O_Truck_03_covered_F
	{
		displayName = "$STR_A3_BW_Truck7TTransportCoveredFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_trans_cov_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Truck_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tc_ext01_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tc_ext02_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_cargo_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_cover_co.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Cov";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tc_ext01_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tc_ext02_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_cargo_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_cover_co.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_LKW7T_Med_F: O_Truck_03_covered_F
	{
		displayName = "$STR_A3_BW_Truck7TMedevacCoveredFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_san_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Truck_Flecktarn";
		crew = "BWA3_Medic_Fleck";
		typicalCargo[] = {"BWA3_Medic_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_ext01_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_ext02_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_cargo_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_cover_co.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Med";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_ext01_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_ext02_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_cargo_co.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tm_cover_co.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_fuel_F;
	class BW_LKW7T_Fuel_F: O_Truck_03_fuel_F
	{
		displayName = "$STR_A3_BW_Truck7TFuelFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		supplyRadius = 15;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_fuel_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_fuel_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_fuel_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tf_fuel_co.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Fuel";
				author = "Williams / OsiriZ A3";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_fuel_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_fuel_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7tf_fuel_co.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_ammo_F;
	class BW_LKW7T_Ammo_F: O_Truck_03_ammo_F
	{
		displayName = "$STR_A3_BW_Truck7TAmmoFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		supplyRadius = 15;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_ammo_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_ammo_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_ammo_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_ammo.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Ammo";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_ammo_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_ammo_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_ammo.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_repair_F;
	class BW_LKW7T_Repair_F: O_Truck_03_repair_F
	{
		displayName = "$STR_A3_BW_Truck7TRepairFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		supplyRadius = 15;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_repair_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_repair_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_repair_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_repair.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Rep";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_repair_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_repair_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_repair.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Truck_03_device_F;
	class BW_LKW7T_Device_F: O_Truck_03_device_F
	{
		displayName = "$STR_A3_BW_Truck7TDeviceFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw7t_device_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_device_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_device_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_device.paa"};
		class TextureSources
		{
			class Hex
			{
				displayName = "7T_Dev";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_device_1.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_body_device_2.paa","a3bw_vehicle_retex_f\data\textures\lkw7t\lkw7t_back_device.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Truck_01_box_F;
	class BW_LKW15T_Multi_F: B_Truck_01_box_F
	{
		displayName = "$STR_A3_BW_Truck15TContainerFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw15t_multi_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Truck_Flecktarn";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_front_standard_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_middle_engine_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_back_container_f.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Truck_01_fuel_F;
	class BW_LKW15T_Fuel_F: B_Truck_01_fuel_F
	{
		displayName = "$STR_A3_BW_Truck15TFuelFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw15t_fuel_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_front_fuel_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_middle_engine_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_back_fuel_f.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Truck_01_ammo_F;
	class BW_LKW15T_Ammo_F: B_Truck_01_ammo_F
	{
		displayName = "$STR_A3_BW_Truck15TAmmoFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw15t_ammo_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_front_ammo_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_middle_engine_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_back_ammo_f.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Truck_01_Repair_F;
	class BW_LKW15T_Repair_F: B_Truck_01_Repair_F
	{
		displayName = "$STR_A3_BW_Truck15TRepairFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\lkw15t_repair_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "Support";
		crew = "BWA3_Engineer_Fleck";
		typicalCargo[] = {"BWA3_Engineer_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_front_repair_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_middle_engine_f.paa","a3bw_vehicle_retex_f\data\textures\lkw15t\lkw15t_back_container_f.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_APC_Wheeled_02_rcws_F;
	class BW_Arma_Base_F: O_APC_Wheeled_02_rcws_F
	{
		class EventHandlers;
		scope = 0;
		class TextureSources
		{
			class Hex
			{
				displayName = "Arma";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_standard_fleck_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_wheelslights_fleck_1.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		textureList[] = {"Hex",1};
	};
	class BW_Arma_Med_Base_F: O_APC_Wheeled_02_rcws_F
	{
		class EventHandlers;
		scope = 0;
		class TextureSources
		{
			class Hex
			{
				displayName = "Arma";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_medic_fleck_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_wheelslights_fleck_1.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		textureList[] = {"Hex",1};
	};
	class BW_Arma_FLW_F: BW_Arma_Base_F
	{
		displayName = "$STR_A3_BW_GTKArmaFLWFleckName";
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\arma_fsw_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_standard_fleck_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_wheelslights_fleck_1.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_Arma_Trans_F: BW_Arma_Base_F
	{
		displayName = "$STR_A3_BW_GTKArmaTransportFleckName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret'];  (_this select 0) lockTurret [[0],true]}";
			};
		};
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\arma_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_transport_fleck_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_wheelslights_fleck_1.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_Arma_Med_F: BW_Arma_Med_Base_F
	{
		displayName = "$STR_A3_BW_GTKArmaMedevacFleckName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret'];  (_this select 0) lockTurret [[0],true]}";
			};
		};
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\arma_san_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Medic_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_medic_fleck_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_arma\arma_wheelslights_fleck_1.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_APC_Wheeled_03_cannon_F;
	class BW_Pandur_Base_F: I_APC_Wheeled_03_cannon_F
	{
		class EventHandlers;
		scope = 0;
	};
	class BW_Pandur_FSW_F: BW_Pandur_Base_F
	{
		displayName = "$STR_A3_BW_GTKPandurFSWFleckName";
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\pandur_fsw_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_1.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_2.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_3.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_Pandur_Trans_F: BW_Pandur_Base_F
	{
		displayName = "$STR_A3_BW_GTKPandurTransportFleckName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret'];  (_this select 0) lockTurret [[0],true]}";
			};
		};
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\pandur_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_transport_textur_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_1.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_2.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_3.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_Pandur_Med_F: BW_Pandur_Base_F
	{
		displayName = "$STR_A3_BW_GTKPandurMedevacFleckName";
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideTurret','HideHull'];  (_this select 0) lockTurret [[0],true]}";
			};
		};
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\pandur_san_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Medic_Fleck";
		typicalCargo[] = {"BWA3_Medic_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_medic_textur_0.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_medic_textur_1.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_2.paa","a3bw_vehicle_retex_f\data\textures\gtk_pandur\pandur_standard_textur_3.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class BW_BPz_Nemmera_F: B_APC_Tracked_01_CRV_F
	{
		displayName = "$STR_A3_BW_BPzBueffelFleckName";
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\bpz_nemmera_ep_f.jpg";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Engineer_Fleck";
		typicalCargo[] = {"BWA3_Engineer_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\bpz_nemmera\nemmera_body_f_0.paa","a3bw_vehicle_retex_f\data\textures\pzh_sholef\pzh_sholef_body_f.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa","a3bw_vehicle_retex_f\data\textures\bpz_nemmera\nemmera_body_f_1.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_MBT_01_arty_F;
	class BW_PzH_Sholef_F: B_MBT_01_arty_F
	{
		displayName = "$STR_A3_BW_PzH2000FleckName";
		author = "Williams / OsiriZ";
		driverOpticsModel = "\bwa3_puma\bwa3_puma_optics_driver";
		showNVGDriver = 1;
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\pzh_sholef_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "armored";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\pzh_sholef\pzh_sholef_body_f.paa","a3bw_vehicle_retex_f\data\textures\pzh_sholef\pzh_sholef_turret_f.paa","a3bw_vehicle_retex_f\data\textures\turret\turret_mggl_f_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Heli_Light_01_F;
	class BW_MH6_Heer_F: B_Heli_Light_01_F
	{
		displayName = "$STR_A3_BW_MH6LittleBirdFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\mh6_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lb\littlebird_body_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class Heli_Light_01_armed_base_F;
	class BW_AH6_Heer_F: Heli_Light_01_armed_base_F
	{
		displayName = "$STR_A3_BW_AH6LittleBirdFleckName";
		author = "Williams / OsiriZ";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\ah6_cas_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		weapons[] = {"M134_minigun","missiles_DAR","CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Belt","24Rnd_missiles","168Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\lb\littlebird_body_0.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_Heli_light_03_unarmed_F;
	class BW_AW159_Trans_Heer_F: I_Heli_light_03_unarmed_F
	{
		displayName = "$STR_A3_BW_AW159HellcatTransportFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\aw159_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\aw159\AW159_Hellcat.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_AW159_Med_Heer_F: I_Heli_light_03_unarmed_F
	{
		displayName = "$STR_A3_BW_AW159HellcatMedevacFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\aw159_sar_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\aw159\AW159_Hellcat_SAR.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_Heli_light_03_F;
	class BW_AW159_CAS_Heer_F: I_Heli_light_03_F
	{
		displayName = "$STR_A3_BW_AW159HellcatCASFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\aw159_cas_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\aw159\AW159_Hellcat_CAS.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class I_Heli_Transport_02_F;
	class BW_NH90_Base: I_Heli_Transport_02_F
	{
		class EventHandlers;
		scope = 0;
	};
	class BW_AW101_Trans_Heer_F: BW_NH90_Base
	{
		displayName = "$STR_A3_BW_NH90TransportFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\aw101_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_1.paa","a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_2.paa","a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_3.paa"};
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				Init = "_this execVM ""\a3bw_vehicle\a3bw_vehicle_retex_f_c\scripts\usableCargoRamp.sqf"";";
			};
		};
		class AnimationSources
		{
			class door
			{
				source = "user";
				animPeriod = 4;
			};
			class door_back_R: door{};
			class door_back_L: door{};
			class CargoRamp_Open
			{
				source = "user";
				animPeriod = 4;
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName = "<t color='#CC2639'>Open Right Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_R"" == 0) AND Alive(this)";
				statement = "this animate [""door_back_R"",1]";
			};
			class OpenLdoor
			{
				displayName = "<t color='#CC2639'>Open Left Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_L"" == 0) AND Alive(this)";
				statement = "this animate [""door_back_L"",1]";
			};
			class CloseRdoor
			{
				displayName = "<t color='#CC2639'>Close Right Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_R"" == 1) AND Alive(this)";
				statement = "this animate [""door_back_R"",0]";
			};
			class CloseLdoor
			{
				displayName = "<t color='#CC2639'>Close Left Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_L"" == 1) AND Alive(this)";
				statement = "this animate [""door_back_L"",0]";
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_AW101_Med_Heer_F: BW_NH90_Base
	{
		displayName = "$STR_A3_BW_NH90MedevacFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\aw101_sar_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_SAR_1.paa","a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_SAR_2.paa","a3bw_vehicle_retex_f\data\textures\aw101\aw101_body_SAR_3.paa"};
		class EventHandlers: EventHandlers
		{
			class a3bw_EventHandlers
			{
				Init = "_this execVM ""\a3bw_vehicle\a3bw_vehicle_retex_f_c\scripts\usableCargoRamp.sqf"";";
			};
		};
		class AnimationSources
		{
			class door
			{
				source = "user";
				animPeriod = 4;
			};
			class door_back_R: door{};
			class door_back_L: door{};
			class CargoRamp_Open
			{
				source = "user";
				animPeriod = 4;
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName = "<t color='#CC2639'>Open Right Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_R"" == 0) AND Alive(this)";
				statement = "this animate [""door_back_R"",1]";
			};
			class OpenLdoor
			{
				displayName = "<t color='#CC2639'>Open Left Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_L"" == 0) AND Alive(this)";
				statement = "this animate [""door_back_L"",1]";
			};
			class CloseRdoor
			{
				displayName = "<t color='#CC2639'>Close Right Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_R"" == 1) AND Alive(this)";
				statement = "this animate [""door_back_R"",0]";
			};
			class CloseLdoor
			{
				displayName = "<t color='#CC2639'>Close Left Door</t>";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow = 0;
				condition = "(this animationPhase ""door_back_L"" == 1) AND Alive(this)";
				statement = "this animate [""door_back_L"",0]";
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class B_Heli_Transport_03_F;
	class BW_CH67_Trans_Heer_F: B_Heli_Transport_03_F
	{
		displayName = "$STR_A3_BW_CH67TransportFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\ch67_trans_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		textureList[] = {"A3_Tex",1};
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\ch67\CH67_front_0.paa","a3bw_vehicle_retex_f\data\textures\ch67\CH67_back_1.paa"};
		class textureSources
		{
			class ch67
			{
				displayName = "Default";
				author = "Williams / OsiriZ";
				textures[] = {"a3bw_vehicle_retex_f\data\textures\ch67\CH67_front_0.paa","a3bw_vehicle_retex_f\data\textures\ch67\CH67_back_1.paa"};
				materials[] = {};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class BW_CH67_Med_Heer_F: B_Heli_Transport_03_F
	{
		displayName = "$STR_A3_BW_CH67MedevacFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\ch67_sar_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		textureList[] = {"A3_Tex",1};
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3bw_vehicle_retex_f\data\textures\ch67\CH67_front_SAR_0.paa","\a3bw_vehicle_retex_f\data\textures\ch67\CH67_back_SAR_1.paa"};
		class textureSources
		{
			class ch67med
			{
				displayName = "Default";
				author = "Williams / OsiriZ";
				textures[] = {"\a3bw_vehicle_retex_f\data\textures\ch67\CH67_front_SAR_0.paa","\a3bw_vehicle_retex_f\data\textures\ch67\CH67_back_SAR_1.paa"};
				materials[] = {};
				factions[] = {"BWA3_Faction_Fleck"};
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
	class O_Heli_Transport_04_Black_F;
	class BW_Taru_SC_Heer_F: O_Heli_Transport_04_Black_F
	{
		displayName = "$STR_A3_BW_TaruFleckName";
		author = "Williams / OsiriZ";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		editorPreview = "a3bw_vehicle_retex_f\editorpreview\taru_lh_ep_f.jpg";
		faction = "BWA3_Faction_Fleck";
		vehicleClass = "BW_VehClass_Air_Flecktarn";
		crew = "B_HeliPilot_F";
		typicalCargo[] = {"B_helicrew_F"};
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"a3bw_vehicle_retex_f\data\textures\taru\bw_taru_body_1.paa","a3bw_vehicle_retex_f\data\textures\taru\bw_taru_body_2.paa"};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 24;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine = "BWA3_200Rnd_556x45";
				count = 6;
			};
			class _xx_BWA3_DM25
			{
				magazine = "BWA3_DM25";
				count = 10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine = "BWA3_DM32_Orange";
				count = 8;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_EOTech552_pointer
			{
				weapon = "BWA3_G36KA2_EOTech552_pointer";
				count = 2;
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				weapon = "BWA3_MG4_ZO4x30_pointer";
				count = 1;
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon = "BWA3_PzF3_Tandem_Loaded";
				count = 2;
			};
		};
	};
};
class cfgMods
{
	author = "76561198162670337";
	timepacked = "1473341103";
};
