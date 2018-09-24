class CfgVehicles {
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

    class GVAR(moduleSnowStorm): Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Snow Storm";
        category           = GVAR(Weather);
        function           = QFUNC(moduleSnowStorm);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = QPATHTOF(ui\icon_weather_on.paa);
    };
    class GVAR(moduleDustStorm): Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Dust Storm";
        category           = GVAR(Weather);
        function           = QFUNC(moduleDustStorm);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = QPATHTOF(ui\icon_weather_on.paa);
    };
    class GVAR(moduleDisableStorm): Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Stop Storm";
        category           = GVAR(Weather);
        function           = QFUNC(moduleDisableStorm);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = QPATHTOF(ui\icon_weather_off.paa);
    };
};
