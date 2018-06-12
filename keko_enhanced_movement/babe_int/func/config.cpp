////////////////////////////////////////////////////////////////////
//DeRap: babe_int\func\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:52 2018 : 'file' last modified on Thu May 10 19:35:44 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class BABE_INT_FNC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_BaseConfig_F","babe_core"};
	};
};
class CfgFunctions
{
	class BABE_INT
	{
		tag = "BABE_INT";
		class core
		{
			file = "\babe\babe_int\func\core";
			class init{};
		};
		class int
		{
			file = "\babe\babe_int\func\int";
			class replace_this{};
			class use{};
			class self{};
			class movein{};
			class fastuse{};
			class fastgetin{};
			class get_seats{};
			class inside_veh{};
		};
		class ui
		{
			file = "\babe\babe_int\func\ui";
			class menuAd{};
		};
	};
};
