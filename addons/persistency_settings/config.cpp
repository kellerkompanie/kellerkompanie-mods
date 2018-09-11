class CfgPatches
{
	class keko_persistency_settings
	{
		units[] = {
			"keko_ModulePersistencyBlacklist3den"
		};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"cba_main",
			"cba_settings",
			"cba_xeh",
			"3den",
			"A3_Modules_F",
			"A3_Modules_F_Curator"};
		author = "Schwaggot";
		authorUrl = "http://kellerkompanie.com";
		version = 1.0;
	};
};

class Extended_PreInit_EventHandlers {
	keko_persistency_settings_xeh = call compile preprocessFileLineNumbers "\keko_persistency_settings\XEH_preInit.sqf";
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class keko_kellerkompanie_persistency: NO_CATEGORY
	{
		displayName = "Kellerkompanie Persistency";
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class EventHandlers;
		class ModuleDescription;

		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;

			expression = "_this setVariable ['%s',_value];";
		};
	};

	class keko_ModulePersistencyBlacklist3den: Module_F
	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Persistency blacklist object";
		category           = "keko_kellerkompanie_persistency";
		function           = "keko_persistency_settings_fnc_modulePersistencyBlacklist3den";
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
	};

	class keko_ModulePersistencyOverwriteID3den: Module_F
	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Persistency overwrite ID";
		category           = "keko_kellerkompanie_persistency";
		function           = "keko_persistency_settings_fnc_moduleOverwriteID3den";
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;

		class Attributes: AttributesBase
		{
			class ID: Edit {
				property = "keko_persistency_settings_ModuleOverwrite_ID";
				displayName = "Database ID";
				typeName = "STRING";
				defaultValue = "'-1'";
			};
		};
	};
};

class CfgFunctions
{
	class keko_persistency_settings
	{
		tag = "keko_persistency_settings";
		class persistency_settings
		{
			file = "keko_persistency_settings\functions";
			class modulePersistencyBlacklist3den{};
			class modulePersistencyOverwriteID3den{};
		};
	};
};
