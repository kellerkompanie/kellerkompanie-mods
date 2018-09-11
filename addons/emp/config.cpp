class CfgPatches
{
    class keko_emp
    {
        units[] = {
        	"keko_ModuleEMP"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_main",
            "cba_settings"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
	      version = 1.0;
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_effects: NO_CATEGORY
    {
        displayName = "Kellerkompanie Effects";
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

    class keko_ModuleEMP: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "EMP";
        category           = "keko_effects";
        function           = "keko_emp_fnc_moduleEMP";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        curatorCanAttach   = 1;
        icon = "\keko_emp\icons\icon_emp.paa";
    };
};


class CfgFunctions
{
	class keko_emp
	{
		tag = "keko_emp";
		class emp
		{
			file = "keko_emp\functions";

      class affectLight {};
      class affectStaticTurret {};
      class affectVehicle {};
      class configObj {};
      class empEffect {};
      class empStarter {};
      class moduleEMP {};
      class sparkEffect {};
      class sparky {};
      class tgtSFX {};
      class vizEffEMP {};
		};
	};
};


class CfgSounds
{
	class murmur
	{
		name = "murmur"; // Name for mission editor
		sound[] = {"\keko_emp\sounds\murmur.ogg", 0.8, 1.0};
		titles[] = {0, ""};
	};
	class geiger
	{
		name = "geiger"; // Name for mission editor
		sound[] = {"\keko_emp\sounds\geiger.ogg", .7, 1.0};
		titles[] = {0, ""};
	};
	class spark1
	{
		name = "spark1";
		sound[] = {"\keko_emp\sounds\spark1.ogg", db+5, 1};
		titles[] = {};
	};
	class spark11
	{
		name = "spark11";
		sound[] = {"\keko_emp\sounds\spark11.ogg", db+5, 1};
		titles[] = {};
	};
	class spark2
	{
		name = "spark2";
		sound[] = {"\keko_emp\sounds\spark2.ogg", db+5, 1};
		titles[] = {};
	};
	class spark22
	{
		name = "spark22";
		sound[] = {"\keko_emp\sounds\spark22.ogg", db+5, 1};
		titles[] = {};
	};
	class spark3
	{
		name = "spark3";
		sound[] = {"\keko_emp\sounds\spark3.ogg", db+5, 1};
		titles[] = {};
	};
	class spark4
	{
		name = "spark4";
		sound[] = {"\keko_emp\sounds\spark4.ogg", db+5, 1};
		titles[] = {};
	};
	class spark5
	{
		name = "spark5";
		sound[] = {"\keko_emp\sounds\spark5.ogg", db+5, 1};
		titles[] = {};
	};
	class earthquake_02
	{
		name = "earthquake_02";
		sound[] = {"\keko_emp\sounds\earthquake_02.ogg",0.7, 1};
		titles[] = {1, ""};
	};
	class tiuit
	{
		name = "tiuit"; // Name for mission editor
		sound[] = {"\keko_emp\sounds\tiuit.ogg", 0.2, 1.0};
		titles[] = {0, ""};
	};
};
