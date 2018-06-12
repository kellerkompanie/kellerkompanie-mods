////////////////////////////////////////////////////////////////////
//DeRap: babe_em\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:49 2018 : 'file' last modified on Thu May 10 19:35:42 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BaBe_EM
	{
		units[] = {"babe_helper"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"babe_core","A3_characters_F"};
	};
};
class CfgModSettings
{
	class babe_EM
	{
		displayname = "Enhanced Movement";
		class Keys
		{
			class jumpclimb
			{
				displayname = "Jump/Climb";
				keyfunction = "babe_em_fnc_detect";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class Use
			{
				displayname = "Use";
				keyfunction = "babe_int_fnc_use";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class Selfint
			{
				displayname = "Self Interaction";
				keyfunction = "babe_int_fnc_self";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class jump
			{
				displayname = "Jump only";
				keyfunction = "babe_em_fnc_jump_only";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
			class climb
			{
				displayname = "Climb only";
				keyfunction = "babe_em_fnc_detect_cl_only";
				class user0
				{
					displayname = "NONE";
					value = 0;
				};
				class user1
				{
					displayname = "User Action 1";
					value = 1;
				};
				class user2
				{
					displayname = "User Action 2";
					value = 2;
				};
				class user3
				{
					displayname = "User Action 3";
					value = 3;
				};
				class user4
				{
					displayname = "User Action 4";
					value = 4;
				};
				class user5
				{
					displayname = "User Action 5";
					value = 5;
				};
				class user6
				{
					displayname = "User Action 6";
					value = 6;
				};
				class user7
				{
					displayname = "User Action 7";
					value = 7;
				};
				class user8
				{
					displayname = "User Action 8";
					value = 8;
				};
				class user9
				{
					displayname = "User Action 9";
					value = 9;
				};
				class user10
				{
					displayname = "User Action 10";
					value = 10;
				};
				class user11
				{
					displayname = "User Action 11";
					value = 11;
				};
				class user12
				{
					displayname = "User Action 12";
					value = 12;
				};
				class user13
				{
					displayname = "User Action 13";
					value = 13;
				};
				class user14
				{
					displayname = "User Action 14";
					value = 14;
				};
				class user15
				{
					displayname = "User Action 15";
					value = 15;
				};
				class user16
				{
					displayname = "User Action 16";
					value = 16;
				};
				class user17
				{
					displayname = "User Action 17";
					value = 17;
				};
				class user18
				{
					displayname = "User Action 18";
					value = 18;
				};
				class user19
				{
					displayname = "User Action 19";
					value = 19;
				};
				class user20
				{
					displayname = "User Action 20";
					value = 20;
				};
			};
		};
		class Settings
		{
			class Stamina
			{
				displayname = "Stamina";
				defaultvalue = "On";
				class On
				{
					displayname = "On";
					value = 1;
					function = "player enableStamina true";
					multiplayer = 0;
				};
				class Off
				{
					displayname = "Off";
					value = 2;
					function = "player enableStamina false";
					multiplayer = 0;
				};
			};
			class walkonstuff
			{
				displayname = "Forced Walkable Surface";
				defaultvalue = "On";
				class On
				{
					displayname = "On";
					value = 1;
					function = "['EH_em_walkonstuff', {true}, [], babe_em_fnc_walkonstuff, [], false, {}, [], -1] call babe_core_fnc_addEH;";
					multiplayer = 0;
				};
				class Off
				{
					displayname = "Off";
					value = 2;
					function = "['EH_em_walkonstuff'] call babe_core_fnc_removeEH;";
					multiplayer = 0;
				};
			};
			class SelfInteraction
			{
				displayname = "Self Interaction";
				defaultvalue = "On";
				class On
				{
					displayname = "On";
					value = 1;
				};
				class Off
				{
					displayname = "Off";
					value = 2;
				};
			};
			class VehicleInteraction
			{
				displayname = "Vehicle Interaction";
				defaultvalue = "menu";
				class menu
				{
					displayname = "Menu";
					value = 1;
				};
				class fast
				{
					displayname = "Fast";
					value = 2;
				};
				class Off
				{
					displayname = "Off";
					value = 3;
				};
			};
		};
	};
};
class CfgVehicles
{
	class All{};
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class TargetTraining: NonStrategic{};
	class TargetGrenade: TargetTraining{};
	class babe_helper: TargetGrenade
	{
		model = "\babe\babe_em\models\helper.p3d";
		armor = 20000;
		scope = 2;
		displayName = "helper";
		icon = "iconObject";
		mapSize = 0.7;
		accuracy = 0.2;
		hiddenSelections[] = {"camo"};
	};
};
