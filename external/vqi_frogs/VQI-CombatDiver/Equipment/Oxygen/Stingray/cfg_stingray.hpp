//
//

class VQI_Vest_Stingray_GAS : Vest_NoCamo_Base {
	displayName = "Stingray Rebreather Rig";
	descriptionShort = "Mil-Spec Closed Circuit System<br/>Radial Flow, AutoLung, 0-20m : 2h<br/>Non-Magnetic, Low Hydrostatic";
	author = "R. Von Quest";
	//access = ReadOnlyVerified;
	scope = 1;
	//scopeArsenal = 2;
	//canShootInWater = 1;
	//disposableWeapon = 0;
	//selectionFireAnim = "zasleh";
	//type = 701;
	//nameSound = "";
	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 50;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};





class VQI_Vest_Stingray_OFF : Vest_NoCamo_Base {
	displayName = "Stingray Rebreather Rig";
	descriptionShort = "Mil-Spec Closed Circuit System<br/>Radial Flow, AutoLung, 0-20m : 2h<br/>Non-Magnetic, Low Hydrostatic";
	author = "R. Von Quest";
	//access = ReadOnlyVerified;
	scope = 1;
	//scopeArsenal = 2;
	//canShootInWater = 1;
	//disposableWeapon = 0;
	//selectionFireAnim = "zasleh";
	//type = 701;
	//nameSound = "";
	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		//vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 50;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};



class VQI_Vest_Stingray : Vest_NoCamo_Base {
	displayName = "Stingray Rebreather Rig";
	descriptionShort = "Mil-Spec Closed Circuit System<br/>Radial Flow, AutoLung, 0-20m : 2h<br/>Non-Magnetic, Low Hydrostatic";
	author = "R. Von Quest";
	//access = ReadOnlyVerified;
	scope = 2;
	//scopeArsenal = 2;
	//canShootInWater = 1;
	//disposableWeapon = 0;
	//selectionFireAnim = "zasleh";
	//type = 701;
	//nameSound = "";
	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\graphics\rebreather_stingray.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		//vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 50;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};
//////////////////
/* NOTES:



*/