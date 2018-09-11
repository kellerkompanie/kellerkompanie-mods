class CfgVehicles {
	class Logic;
	class Module_F: Logic {
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
	class keko_ModulePersistencyBlacklist3den: Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Persistency blacklist object";
		category           = QGVAR(Persistency);
		function           = QFUNC(modulePersistencyBlacklist3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
	};

	class keko_ModulePersistencyOverwriteID3den: Module_F {
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Persistency overwrite ID";
		category           = QGVAR(Persistency);
		function           = QFUNC(moduleOverwriteID3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;

		class Attributes: AttributesBase {
			class ID: Edit {
				property = "keko_persistency_settings_ModuleOverwrite_ID";
				displayName = "Database ID";
				typeName = "STRING";
				defaultValue = "'-1'";
			};
		};
	};
};