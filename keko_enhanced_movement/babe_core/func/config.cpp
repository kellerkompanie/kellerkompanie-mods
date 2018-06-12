////////////////////////////////////////////////////////////////////
//DeRap: babe_core\func\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:46 2018 : 'file' last modified on Thu May 10 19:35:41 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BABE_CORE_FNC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_BaseConfig_F"};
	};
};
class CfgFunctions
{
	class BABE_CORE
	{
		tag = "BABE_CORE";
		class core
		{
			file = "\babe\babe_core\func\core";
			class init
			{
				postInit = 1;
			};
			class addEH{};
			class removeEH{};
			class keys{};
			class initFH{};
			class handleEHs{};
			class cachemoddata{};
		};
		class misc
		{
			file = "\babe\babe_core\func\misc";
			class inbbr{};
			class inbbr_pl{};
		};
		class ui
		{
			file = "\babe\babe_core\func\ui";
			class modmenu_init{};
			class settings_dbc{};
			class updateexplist{};
		};
	};
};
