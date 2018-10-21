//
//			***** DO NOT USE *****

/*
class CfgPatches{
	class VQI_LockoutChamber2 {
		addonRootClass = "A3_Boat_F_Beta";
		requiredAddons[] = {"A3_Boat_F", "A3_Boat_F_Beta"};
		units[] = {"VQI_LOC_4Man"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgAddons {
	class VQI_LockoutChamber2 {
		list[]={VQI_LOC_4Man};
	};
};

class CfgVehicleClasses {
	class VQI_LockoutChamber2 {
	displayName="VQI Diver";	// 'CLASS' display name in Editor [(not "classname") Faction >> Class >> Unit, etc.]
	};
};




class CfgVehicles {
	class Ship_F;				// External class reference
	
	class Boat_F : Ship_F {
		//class NewTurret;		// External class reference
		//class Turrets;		// External class reference
		class EventHandlers;	// External class reference
		class AnimationSources;	// External class reference
		//class ViewOptics;		// External class reference
	};
	
	class VQI_LOC_4Man : Boat_F {
		scope=2;
		author="R.Von Quest";
		model="\vqi_frogs\VQI-CombatDiver\3D\LOC2\LOC_4Man.p3d"; 	//note: for image path in O2/OB, remove the first dash
		icon="\vqi_frogs\VQI-CombatDiver\3D\iconLOC.paa";
		//armor=99999;
		displayName="Diver: LockoutChamber"; 						// UNIT display name in Editor
		vehicleClass="submarine";
		destrType="DestructNO";
		
		simulation = "submarineX";
		crew = "B_diver_F";
		faction = BLU_F;
		side = TWest;				
		
		//extCameraPosition[] = {0, 0, 3};
		
		class AnimationSources
		{
			class  UserLOCflood
			{
				source="user";
				animPeriod=60;
				initPhase=0;
			};
		};


		class UserActions
		{
			class LOCflood
			{
				displayName="Flood LOC";
				position="FloodSwitch";
				onlyforplayer=0;
				radius=1;
				condition="(this animationPhase ""AnimateLOCsystem"" == 0)";
				statement="this animate [""AnimateLOCsystem"",1];";
			};
			class LOCdrain
			{
				displayName="Drain LOC";
				position="FloodSwitch";
				onlyforplayer=0;
				radius=1;
				condition="(this animationPhase ""AnimateLOCsystem"" == 1)";
				statement="this animate [""AnimateLOCsystem"",0];";
			};
		};
		//driverCompartments = "Compartment1";
		//cargoCompartments[] = {"Compartment2"};
		//driverAction = "driver_SDV";
		cargoAction[] = {"passenger_SDV"};			/// the same of all the crew
		//ejectDeadDriver = false;
		ejectDeadCargo = false;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		//driverLeftHandAnimName = "drivingwheel";
		//driverRightHandAnimName = "drivingwheel";
		//getInAction = "GetInLow";
		//getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		//commanderCanSee = 31;
		//driverOpticsModel = "\A3\weapons_f_beta\reticle\reticle_SDV_driver";
		//memoryPointDriverOptics = "PIP0_dir";
		//driverForceOptics = false;
		//enableGPS = 1;
		transportSoldier = 1;
		//typicalCargo[] = {"B_diver_F"};
		//cost = 10000;
		
		getInRadius = 2;
	};
};

*/











//////////////////////
/*
		animated=1;
		class AnimationSources
		{
			// 
			class ani_CargoDoor
			{
				type="rotation";
				source="user";
				animPeriod=5;
				selection="CargoDoor";
				axis="CargoDoorAxis";
				memory=1;
				angle0=0;
				angle1=-1.5;
			};
		};	// Animation class end

	
		// UserAction class 
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Cargo Hold: OPEN";
				position="CargoDoorSwitch";
				onlyforplayer = 1;
				radius = 4;
				condition="this animationPhase ""ani_CargoDoor"" < 0.5";
				statement="this animate [""ani_CargoDoor"", 1]";
			};
			
			class CloseCargoDoor
			{
				displayName="Cargo Hold: CLOSE";
				position="CargoDoorSwitch";
				onlyforplayer = 1;
				radius = 4;
				condition="this animationPhase ""ani_CargoDoor"" >= 0.5";
				statement="this animate [""ani_CargoDoor"", 0]";
			};
		};		// UserAction class end
*/



