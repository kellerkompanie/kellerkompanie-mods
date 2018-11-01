class CfgVehicles {
	class Logic;
	class Module_F: Logic {
		class ArgumentsBaseUnits;
		class ModuleDescription;
	};
	class GVAR(moduleBase): Module_F {
		author = ECSTRING(common,KEKOTeam);
		category = "KEKO";
		function = QEFUNC(common,dummy);
		scope              = 1;
		scopeCurator       = 2;
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 0;
	};
	class GVAR(moduleBase3den): Module_F {
		author = ECSTRING(common,KEKOTeam);
		category = "KEKO";
		function = QEFUNC(common,dummy);
		scope              = 2;
		scopeCurator       = 1;
		functionPriority   = 2;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
	};
	class GVAR(moduleAddLoadoutMenu3den): GVAR(moduleBase3den) {
		displayName        = "Add Loadout Menu";
		category           = QGVAR(Loadout);
		function           = QFUNC(moduleAddLoadoutMenu3den);
		icon = QPATHTOF(ui\loadout_menu_icon.paa);
	};
	class keko_ModuleAddLoadoutMenu3den: GVAR(moduleAddLoadoutMenu3den) {
		displayName        = "(DEPRECATED - DO NOT USE) Add Loadout Menu";
		category           = QEGVAR(common,Deprecated);
	};
	class GVAR(moduleAddLoadoutMenu): GVAR(moduleBase) {
		displayName        = "Add Loadout Menu";
		category           = QGVAR(Loadout);
		function           = QFUNC(moduleAddLoadoutMenu);
		icon 			   = QPATHTOF(ui\loadout_menu_icon.paa);
		curatorCanAttach   = 1;
	};
	class GVAR(moduleCustomLoadouts3den): GVAR(moduleBase3den) {
		displayName        = "Custom Loadouts";
		category           = QGVAR(Loadout);
		function           = QFUNC(moduleCustomLoadouts3den);
		icon = QPATHTOF(ui\icon_loadouts.paa);
	};
	class keko_ModuleCustomLoadouts3den: GVAR(moduleCustomLoadouts3den) {
		displayName        = "(DEPRECATED - DO NOT USE) Custom Loadouts";
		category           = QEGVAR(common,Deprecated);
	};

	class GVAR(moduleApplyLoadout): GVAR(moduleBase) {
		displayName        = "Apply Loadout";
		category           = QGVAR(Loadout);
		function           = QFUNC(moduleApplyLoadout);
		icon = QPATHTOF(ui\loadout_change_icon.paa);
		curatorCanAttach   = 1;
	};
};
