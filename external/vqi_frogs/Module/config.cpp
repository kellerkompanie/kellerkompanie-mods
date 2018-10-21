// : : : FROGS Module System : : :
// 
#define private		0
#define protected	1
#define public		2


class CfgPatches {
	
	class VQI_FROGS {	// multi allowed?
		units[] = {"VQI_ModuleFROGS"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
		//directory = "SPOOKWARCOM\SPOOKWARCOM";
	};
};



class CfgFunctions 
{
	class VQI
	{
		class FROGSystem
		{
			class FROGSmod  { file = "\vqi_frogs\module\fn_module.sqf"; };
			class FROGSinit { file = "\vqi_frogs\init.sqf"; };
		};
	};
};



class CfgFactionClasses {
	class NO_CATEGORY;
	class VQI_FROGS: NO_CATEGORY
	{
		displayName = "=VQI= F. R. O. G. S";
	};
};



class CfgVehicles {
	class Logic;	// internal game class reference
	
	class Module_F : Logic {
				class ArgumentsBaseUnits {
				 class Units; };
				class ModuleDescription {
				 class AnyBrain; };
	};
	
	///////////////////////////////////
	// Combat Diver
	class VQI_ModuleFROGS : Module_F {
	icon = "vqi_frogs\module\iconFROGS.paa";
		scope = public;
		author = "R.Von Quest aka 'Goblin'";
		category = "VQI_FROGS";
		displayName = "Combat Diver";
		function = "VQI_fnc_FROGSmod";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		
		class Arguments: ArgumentsBaseUnits
		{
			
			//class Units: Units {};
			class vqi_module_frogs_debughints { //Debug, Info, Hints
				displayName = "Debug/Hints/Info";
				description = "Recommend: OFF";
				typeName = NUMBER;
				
				class Values
				{
					class 0OFF	{name = "OFF";  value = 0; default = 0;}; // ListBox Items
					class 1ON	{name = "ON";   value = 1; };
				};
			};
			
			class vqi_module_frogs_mapobject { //
				displayName = "Menu Object";
				description = "Enter the Name of the OBJECT (user placed) that the Main Menu will appear. Submarine Transport, Intel, etc. This can be ANY Object";
				typeName = OBJECT;
				defaultValue = "VQI_FROGS_LAPTOP";
			};
			
			class vqi_module_frogs_boarding { //
				displayName = "Boarding Option";
				description = "Allow Player Boarding Options (teleport) from OBJECT or MUST Travel out to PLACED SURFACED Submarine BEFORE boarding";
				typeName = NUMBER;
				
				class Values
				{
					class 0DOPDB	{name = "Board from Surfaced Sub";  value = 0; }; // ListBox Items
					class 1DOPDB	{name = "Teleport from MENU OBJECT";  value = 1; default = 1;};
					class 2DOPDB	{name = "Auto-Teleport at Game Start";  value = 2; };
				};
			};
			/*
			class vqi_module_frogs_loc { //
				displayName = "Lockout Chamber";
				description = "Select to use Lockout Chamber during transition, or Teleport directly into water over placed Submarine. NOTE: LOC is clunky and only a placeholder. LOC 3D Model is coming SOON!";
				typeName = NUMBER;
				
				class Values
				{
					class 0LOC	{name = "OFF - Teleport into water ONLY";  value = 0; }; // ListBox Items
					class 1LOC	{name = "ON - Teleport onto LOC";  value = 1; default = 1;};
				};
			};
			*/
			class vqi_module_frogs_db1watch { //
				displayName = "DiveMate (watch)";
				description = "Adds 'Watch' Key option, (3rd option) See KeyBinding README for more info. Display Time of DiveMate on screen when pressed.";
				typeName = NUMBER;
				
				class Values
				{
					class 0DB1	{name = "OFF - Not needed, Using other"; value = 0; }; // ListBox Items
					class 1DB1	{name = "Watch Key - Temp, Quick On/Off"; value = 1; };
					class 2DB1	{name = "Watch Key - Temp, 10sec"; value = 2; };
					class 3DB1	{name = "Watch Key - Temp, 20sec"; value = 3; default = 3;};
					class 4DB1	{name = "Watch Key - Temp, 30sec"; value = 4; };
					class 5DB1	{name = "Watch Key - Temp, 60sec"; value = 5; };
					class 6DB1	{name = "Watch Key - Temp, 90sec"; value = 6; };
				};
			};			
			
			class vqi_module_frogs_sub_traveltime { //
				displayName = "Sub Travel Time";
				description = "Simulates the Travel Time it takes the Sub to reach its destination (Advances Game Time)";
				typeName = NUMBER;
				
				class Values
				{
					class 0STT	{name = "None, Teleport Instantly";  value = 0; }; // ListBox Items
					class 1STT	{name = "Advance Game Time 1 Hour, Exact";  value = 1; };
					class 2STT	{name = "Advance Game Time 1-3 Hours, Random";  value = 2; default = 2; };
					class 3STT	{name = "Advance Game Time 2-6 Hours, Random";  value = 3; };
					class 4STT	{name = "Advance Game Time 3-9 Hours, Random";  value = 4; };
					class 5STT	{name = "Advance Game Time 4-12 Hours, Random";  value = 5; };
					class 6STT	{name = "Advance Game Time 3 Hours, Exact";  value = 6; };
					class 7STT	{name = "Advance Game Time 6 Hours, Exact";  value = 7; };
					class 8STT	{name = "Advance Game Time 12 Hours, Exact";  value = 8; };
				};
			};
			
			class vqi_module_frogs_ao_sub { //
				displayName = "AO: Submarines";
				description = "How many SUB/SDVs for the Map. Enter 0, Positive, or a Negative Number. Positive is EXACTLY that many SUBs. A Negative number is RANDOM upto that Number.";
				typeName = NUMBER;
				defaultValue = "-5";
			};
			class vqi_module_frogs_ao_sub_intel { //
				displayName = "Sub Intel";
				description = "Select the INTEL SOURCE for how/what Enemy Submarine info is known. See DOCs for more Info.";
				typeName = NUMBER;
				
				class Values
				{
					//class 0SUBINTEL	{name = "Off / None"; value = 0; default = 0; };
					class 1SUBINTEL	{name = "SIGINT - NSA Radio Intercept/Decrypt"; value = 1; }; 
					class 2SUBINTEL	{name = "NATO Fleet & Naval Surface Ships"; value = 2; };
					class 3SUBINTEL	{name = "Submarines and/or SONAR Bouy Array"; value = 3; };
					class 4SUBINTEL	{name = "Satellite - NROL-34: Odin"; value = 4; default = 4; };
					class 5SUBINTEL	{name = "Satellite - NROL-55: Intruder"; value = 5; };
					class 6SUBINTEL	{name = "Satellite - NROL-79: N.O.S.S."; value = 6; };
				};
			}; 
			
			class vqi_module_frogs_ao_nav { //
				displayName = "AO: Naval";
				description = "How many NAVAL AOs for the Map. Enter 0, Positive, or a Negative Number. Positive is EXACTLY that many AOs. A Negative number is RANDOM upto that Number.";
				typeName = NUMBER;
				defaultValue = "-15";
			};				

			class vqi_module_frogs_ao_nav_color { //
				displayName = "Naval AO Color";
				description = "Set the COLOR of the Map Intel Icon for this AO";
				typeName = NUMBER;
				
				class Values
				{
					class 0AOMAPN	{name = "Black"; value = 0; };
					class 1AOMAPN	{name = "Grey"; value = 1; };
					class 2AOMAPN	{name = "Red"; value = 2; };
					class 3AOMAPN	{name = "Brown"; value = 3; };
					class 4AOMAPN	{name = "Orange"; value = 4; };
					class 5AOMAPN	{name = "Yellow"; value = 5; };
					class 6AOMAPN	{name = "Khaki"; value = 6; };
					class 7AOMAPN	{name = "Green"; value = 7; };
					class 8AOMAPN	{name = "Blue"; value = 8; };
					class 9AOMAPN	{name = "Pink"; value = 9; };
					class 10AOMAPN	{name = "White"; value = 10; };
					class 11AOMAPN	{name = "WEST"; value = 11; };
					class 12AOMAPN	{name = "EAST"; value = 12; };
					class 13AOMAPN	{name = "GUER"; value = 13; };
					class 14AOMAPN	{name = "CIV"; value = 14; };
					class 15AOMAPN	{name = "UNKNOWN"; value = 15; };
					class 16AOMAPN	{name = "Dark Blue"; value = 16; default = 16; };
					class 17AOMAPN	{name = "Dark Red"; value = 17; };
					class 18AOMAPN	{name = "Dark Green"; value = 18; };
					class 19AOMAPN	{name = "Civilian"; value = 19; };				
				};
			};
			
			class vqi_module_frogs_ao_nav_intel { //
				displayName = "Naval Intel %";
				description = "DYNAMIC AOs are RANDOMIZED probability of Calculated-Intel; Realistic and Organic. STATIC AOs are 100% GUARANTEED to be there, 100% of the time.";
				typeName = NUMBER;
				
				class Values
				{
					class 0NAVINTEL	{name = "STATIC - 100% Guaranteed, Absolute!"; value = 0; default = 0; };
					class 1NAVINTEL	{name = "DYNAMIC - Unknown, Probability ONLY"; value = 1; }; // ListBox Items
				};
			}; 
			
			class vqi_module_frogs_ao_nav_side { //
				displayName = "Naval Side =";
				description = "Spawns Random Naval Ops & Units";
				typeName = NUMBER;
				
				class Values
				{
					class 1NAVSIDE {name = "RED / OPF / CSAT"; value = 1; default = 1; }; // ListBox Items
					class 4NAVSIDE {name = "RED / OPF / RHS Russians"; value = 4; };
					class 2NAVSIDE {name = "GRN / IND / A.A.F"; value = 2; };
					class 3NAVSIDE {name = "BLU / BLU / NATO"; value = 3; };
				};
			};			
			
			class vqi_module_frogs_tempmarker { //
				displayName = "Submarine Marker";
				description = "Select Permanent or Temporary (20 min) displayed Marker";
				typeName = NUMBER;
				
				class Values
				{
					class 1ONPERM	{name = "Permanent - Marker stays ON";  value = 1; default = 1;}; // ListBox Items
					class 0OFTEMP	{name = "Temporary - Marker ON for 20 Minutes Only";   value = 0; };
				};
			};
		};
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription {
			description = "Place Module to turn ON System. Select options as desired. Will spawn and de-spawn enemy, items, effects, etc. around player.";
			//sync[] = {};
		};
	};
};





