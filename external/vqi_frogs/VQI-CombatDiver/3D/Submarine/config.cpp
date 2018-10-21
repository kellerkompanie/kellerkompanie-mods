class CfgPatches{
	class VQI_Submarines {
		units[] = {""};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgAddons {
	class VQI_Submarines {
		list[]={VQI_Submarine_CNS_Type1};
	};
};

class CfgVehicleClasses {
	class VQI_Submarines {
	// name in editor
	displayName="VQI Submarines";
	};
};

class CfgVehicles {
	class Building;	// External class reference
	class FloatingStructure_F;	// External class reference
	class Thing;	// External class reference
	class ThingX;	// External class reference
	class Wall_F;	// External class reference
	
	class NonStrategic : Building {
		class AnimationSources;	// External class reference
	};
	class FlagCarrierCore;	// External class reference
	
	class VQI_Submarine_CNS_Type1: NonStrategic {
		scope=2;
		author="R.Von Quest";
		model="\vqi_frogs\VQI-CombatDiver\3D\Submarine\sub_gen_v2.p3d"; //note: for image path, remove the first
		icon="\vqi_frogs\VQI-CombatDiver\3D\iconLOC.paa";
		armor=5555;
		displayName="VQI Submarine (Type1)";
		vehicleClass="VQI_Submarines";
		destrType = "DestructTree";
		//class eventHandlers 
		//{
		//	init = "[_this select 0] execVM '\vqi_sniper\VQI-SpectreSniper\SniperData\moduleEH.sqf'";
		//};
	};
};