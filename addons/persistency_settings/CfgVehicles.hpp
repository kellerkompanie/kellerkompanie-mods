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
	class GVAR(moduleBase): Module_F {
		author = ECSTRING(common,KEKOTeam);
		category = "KEKO";
		function = QEFUNC(common,dummy);
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		scope = 1;
		scopeCurator = 2;
	};
	class GVAR(moduleBase3den): Module_F {
		author = ECSTRING(common,KEKOTeam);
		category = "KEKO";
		function = QEFUNC(common,dummy);
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
		scope = 2;
		scopeCurator = 1;
	};


	class GVAR(ModulePersistencyBlacklist3den): GVAR(moduleBase3den) {
		displayName        = "Persistency blacklist object";
		category           = QGVAR(Persistency);
		function           = QFUNC(modulePersistencyBlacklist3den);
	};
	class GVAR(ModulePersistencyOverwriteID3den): GVAR(moduleBase3den) {
		displayName        = "Persistency overwrite ID";
		category           = QGVAR(Persistency);
		function           = QFUNC(moduleOverwriteID3den);

		class Attributes: AttributesBase {
			class ID: Edit {
				property = QGVAR(ModuleOverwrite_ID);
				displayName = "Database ID";
				typeName = "STRING";
				defaultValue = "'-1'";
			};
		};
	};
	class GVAR(ModuleSelectivePersistency3den): GVAR(moduleBase3den) {
		displayName        = "Peristency enable";
		category           = QGVAR(Persistency);
		function           = QFUNC(moduleSelectivePersistency3den);
	};

	class GVAR(moduleManualSave): GVAR(moduleBase) {
		displayName        = "Manual Save";
		category           = QGVAR(Persistency);
		function           = QFUNC(moduleManualSave);
	};
	class GVAR(moduleManualLoad): GVAR(moduleBase) {
		displayName        = "Manual Load";
		category           = QGVAR(Persistency);
		function           = QFUNC(moduleManualLoad);
	};
};
