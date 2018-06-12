////////////////////////////////////////////////////////////////////
//DeRap: babe_em\func\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:49 2018 : 'file' last modified on Thu May 10 19:35:42 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class BABE_EM_FNC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_BaseConfig_F","babe_core_fnc"};
	};
};
class CfgFunctions
{
	class BABE_EM
	{
		tag = "BABE_EM";
		class core
		{
			file = "\babe\babe_em\func\core";
			class init{};
		};
		class EH
		{
			file = "\babe\babe_em\func\EH";
			class handledamage_nofd{};
			class animdone{};
		};
		class move
		{
			file = "\babe\babe_em\func\mov";
			class em{};
			class exec_em{};
			class finish_em{};
			class exec_drop{};
			class finish_drop{};
			class jump{};
			class jump_only{};
			class detect{};
			class detect_cl_only{};
			class walkonstuff{};
		};
	};
};
