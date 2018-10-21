//
//



class CfgPatches{
	class VQI_LockoutChamber {
		units[] = {"VQI_DDS_LockoutChamber"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgAddons {
	class VQI_LockoutChamber {
		list[]={VQI_DDS_LockoutChamber};
	};
};

class CfgVehicleClasses {
	class VQI_LockoutChamber {
	displayName="VQI Diver";	// 'CLASS' display name in Editor [(not "classname") Faction >> Class >> Unit, etc.]
	};
};




// PLACEHOLDER -WIP-
class CfgVehicles {
	class Air;
	class Plane : Air {
	
		class HitPoints {
			class HitHull {
				armor = 900;
				material = 50;
				name = "telo";
				visual = "trup";
				passThrough = false;
			};
		};
	};
	
	//class Sounds;
	class VQI_DDS_LockoutChamber: Plane {
		scope = 1;
		author = "R.Von Quest";
		model = "\vqi_frogs\VQI-CombatDiver\3D\LOC\vqi_loc2.p3d"; //note: for image path in O2/OB, remove the first dash
		icon = "\vqi_frogs\VQI-CombatDiver\3D\iconLOC.paa";
		//armor=99999;
		displayName = "Diver: LockoutChamber"; // UNIT display name in Editor
		vehicleClass = "VQI_LockoutChamber";
		destrType = "DestructNO";
		
		class TransportWeapons
			{
			};
		class TransportMagazines
			{
			};
		class TransportItems
			{
			};
			memoryPointSupply = "LOCDoorSwitch";
			supplyRadius = 0.5;
	
		
		class AnimationSources
		{
			class  UserLOCdoor1
			{
				source = "user";
				animPeriod =5;
				initPhase=0;
			};
		};


		class UserActions
		{
			class OpenLOCdoor
			{
				displayName="Open LOC Door";
				position="LOCDoorSwitch";
				onlyforplayer=0;
				radius=1;
				condition="(this animationPhase ""AnimateLOCdoor1"" == 0)";
				statement="this animate [""AnimateLOCdoor1"",1];";
			};
			class CloseLOCdoor
			{
				displayName="Close LOC Door";
				position="LOCDoorSwitch";
				onlyforplayer=0;
				radius=1;
				condition="(this animationPhase ""AnimateLOCdoor1"" == 1)";
				statement="this animate [""AnimateLOCdoor1"",0];";
			};
		};
	};
};














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