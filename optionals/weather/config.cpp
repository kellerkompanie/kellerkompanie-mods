class CfgPatches
{
    class keko_weather
    {
        units[] = {
        	"keko_ModuleSnowStorm",
          "keko_ModuleDustStorm",
          "keko_ModuleDisableStorm"
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
    class keko_weather: NO_CATEGORY
    {
        displayName = "Kellerkompanie Weather";
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

    class keko_ModuleSnowStorm: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Snow Storm";
        category           = "keko_weather";
        function           = "keko_weather_fnc_moduleSnowStorm";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_weather\icons\icon_weather_on.paa";
    };
    class keko_ModuleDustStorm: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Dust Storm";
        category           = "keko_weather";
        function           = "keko_weather_fnc_moduleDustStorm";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_weather\icons\icon_weather_on.paa";
    };
    class keko_ModuleDisableStorm: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Stop Storm";
        category           = "keko_weather";
        function           = "keko_weather_fnc_moduleDisableStorm";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_weather\icons\icon_weather_off.paa";
    };
};

#include "\keko_weather\dialogs\snow_defines.hpp"
#include "\keko_weather\dialogs\snow.hpp"
#include "\keko_weather\dialogs\dust_defines.hpp"
#include "\keko_weather\dialogs\dust.hpp"



class CfgFunctions
{
	class keko_weather
	{
		tag = "keko_weather";
		class weather
		{
			file = "keko_weather\functions";

			class snow_setVehicleVarName {};
			class snow_storm_init {};
			class snow_alias_hunt {};
			class snow_al_snow {};
			class snow_alias_snowstorm_effect {};
			class snow_rotocol_client {};
			class snow_umblator {};
			class snow_breath {};
			class snow_rotocol {};
			class snow_menuOnload {};
			class snow_setSliderValue {};
			class snow_terminateSnow {};

      class dust_setVehicleVarName {};
			class dust_storm_init {};
			class dust_alias_hunt {};
			class dust_menuOnload {};
			class dust_setSliderValue {};
			class dust_alias_duststorm_effect {};
			class dust_alias_dust_wall {};
			class dust_al_duststorm {};
			class dust_abortStorm {};

			class moduleSnowStorm {};
			class moduleDustStorm {};
			class moduleDisableStorm {};
		};
	};
};




class CfgSounds
{
	class bcg_wind
	{
		name = "bcg_wind";
		sound[] = {"keko_weather\sound\bcg_wind.ogg", 0.3, 1};
		titles[] = {1, ""};
	};
	class bcg_wind_mild
	{
		name = "bcg_wind_mild";
		sound[] = {"keko_weather\sound\bcg_wind_mild.ogg", 0.05, 1};
		titles[] = {1, ""};
	};
	class rafala_1
	{
		name = "rafala_1";
		sound[] = {"keko_weather\sound\rafala_1.ogg", db+10, 1};
		titles[] = {1, ""};
	};
	class rafala_2
	{
		name = "rafala_2";
		sound[] = {"keko_weather\sound\rafala_2.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class rafala_6
	{
		name = "rafala_6";
		sound[] = {"keko_weather\sound\rafala_6.ogg", db+15, 1};
		titles[] = {1, ""};
	};
	class rafala_7
	{
		name = "rafala_7";
		sound[] = {"keko_weather\sound\rafala_7.ogg", db+10, 1};
		titles[] = {1, ""};
	};
	class rafala_8
	{
		name = "rafala_8";
		sound[] = {"keko_weather\sound\rafala_8.ogg", db+15, 1};
		titles[] = {1, ""};
	};
	class rafala_9
	{
		name = "rafala_9";
		sound[] = {"keko_weather\sound\rafala_9.ogg", db+10, 1};
		titles[] = {1, ""};
	};
	class tree_crack_1
	{
		name = "tree_crack_1";
		sound[] = {"keko_weather\sound\tree_crack_1.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_2
	{
		name = "tree_crack_2";
		sound[] = {"keko_weather\sound\tree_crack_2.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_3
	{
		name = "tree_crack_3";
		sound[] = {"keko_weather\sound\tree_crack_3.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_4
	{
		name = "tree_crack_4";
		sound[] = {"keko_weather\sound\tree_crack_4.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_5
	{
		name = "tree_crack_5";
		sound[] = {"keko_weather\sound\tree_crack_5.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_6
	{
		name = "tree_crack_6";
		sound[] = {"keko_weather\sound\tree_crack_6.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_7
	{
		name = "tree_crack_7";
		sound[] = {"keko_weather\sound\tree_crack_7.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_8
	{
		name = "tree_crack_8";
		sound[] = {"keko_weather\sound\tree_crack_8.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class tree_crack_9
	{
		name = "tree_crack_9";
		sound[] = {"keko_weather\sound\tree_crack_9.ogg", db+5, 1};
		titles[] = {1, ""};
	};
	class lup_01
	{
		name = "lup_01";
		sound[] = {"keko_weather\sound\lup_01.ogg", 1, 1};
		titles[] = {};
	};
	class lup_02
	{
		name = "lup_02";
		sound[] = {"keko_weather\sound\lup_02.ogg", 1, 1};
		titles[] = {};
	};
	class lup_03
	{
		name = "lup_03";
		sound[] = {"keko_weather\sound\lup_03.ogg", 1, 1};
		titles[] = {};
	};
	class tremurat_1
	{
		name = "tremurat_1";
		sound[] = {"keko_weather\sound\tremurat_1.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tremurat_2
	{
		name = "tremurat_2";
		sound[] = {"keko_weather\sound\tremurat_2.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tremurat_3
	{
		name = "tremurat_3";
		sound[] = {"keko_weather\sound\tremurat_3.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tremurat_4
	{
		name = "tremurat_4";
		sound[] = {"keko_weather\sound\tremurat_4.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class NoSound
	{
		name = "NoSound";
		sound[] = {"", 0, 1};
		titles[] = {0, ""};
	};
	class tuse_1
	{
		name = "tuse_1";
		sound[] = {"keko_weather\sound\tuse_1.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tuse_2
	{
		name = "tuse_2";
		sound[] = {"keko_weather\sound\tuse_2.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tuse_3
	{
		name = "tuse_3";
		sound[] = {"keko_weather\sound\tuse_3.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tuse_4
	{
		name = "tuse_4";
		sound[] = {"keko_weather\sound\tuse_4.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tuse_5
	{
		name = "tuse_5";
		sound[] = {"keko_weather\sound\tuse_5.ogg", 1, 1};
		titles[] = {1, ""};
	};
	class tuse_6
	{
		name = "tuse_6";
		sound[] = {"keko_weather\sound\tuse_6.ogg", 1, 1};
		titles[] = {1, ""};
	};


  class uragan_1
  {
    name = "uragan_1";
    sound[] = {"\sound\uragan_1.ogg", db+5, 1};
    titles[] = {1, ""};
  };

  class rafala_4_dr
  {
    name = "rafala_4_dr";
    sound[] = {"\sound\rafala_4_dr.ogg", db+1, 1};
    titles[] = {1, ""};
  };
  class rafala_5_st
  {
    name = "rafala_5_st";
    sound[] = {"\sound\rafala_5_st.ogg", db+1, 1};
    titles[] = {1, ""};
  };
  class sandstorm
  {
    name = "sandstorm";
    sound[] = {"\sound\sandstorm.ogg", db+10, 1};
    titles[] = {1, ""};
  };
};
