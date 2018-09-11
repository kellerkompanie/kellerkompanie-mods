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

    class GVAR(moduleEMP): Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "EMP";
        category           = QGVAR(Effects);
        function           = QFUNC(moduleEMP);
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        curatorCanAttach   = 1;
        icon = QPATHTOF(ui\icon_emp.paa);
    };
};