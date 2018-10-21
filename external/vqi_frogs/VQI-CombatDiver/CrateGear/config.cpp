//
//


class CfgPatches 
{
	class VQI_FROGS_CrateGear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};


class CfgVehicleClasses 
{
	class Von_Quest_Industries {
		displayname = "VQI Crates";
	};
};




class CfgVehicles
{
	class NATO_Box_Base;
	class VQI_FROGS_Crate: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Von_Quest_Industries";
		displayName = "Combat Diver Operations";
		//model = "\A3\weapons_F\AmmoBoxes\SupplyDrop";
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F";
		icon = "iconCrateWpns";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_VQI_DiveMate_1
			{
				name = "VQI_DiveMate_1";
				count = 4;
			};
			class _xx_VQI_Vest_Stingray
			{
				name = "VQI_Vest_Stingray";
				count = 4;
			};
			class _xx_VQI_BOTTLE_SR2_GAS
			{
				name = "VQI_BOTTLE_SR2_GAS";
				count = 4;
			};
			class _xx_VQI_BOTTLE_SR2_DIL
			{
				name = "VQI_BOTTLE_SR2_DIL";
				count = 4;
			};
			class _xx_U_B_Wetsuit
			{
				name = "U_B_Wetsuit";
				count = 4;
			};
			class _xx_VQI_Goggles_SPECTRA
			{
				name = "VQI_Goggles_SPECTRA";
				count = 4;
			};			
		};
	};
};