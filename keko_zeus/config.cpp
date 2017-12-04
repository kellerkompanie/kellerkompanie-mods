class CfgPatches
{
    class keko_zeus
    {
        units[] = {
            "keko_ModuleAceHeal",
            "keko_ModuleLoadoutObject",
            "keko_ModuleLogisticsObject",
            "keko_ModuleMoveRespawn",
            "keko_ModuleSelectFaction"
        };
        requiredVersion = 1.0;
        requiredAddons[] = {
            "keko_common",
            "A3_UI_F",
            "A3_UI_F_Curator",
            "A3_Functions_F",
            "A3_Functions_F_Curator",
            "A3_Modules_F",
            "A3_Modules_F_Curator"};
        author[] = {"Schwaggot"};
        authorUrl = "http://kellerkompanie.com";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {1,0,0};
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_kellerkompanie: NO_CATEGORY
    {
        displayName = "Kellerkompanie";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase
        {
            class Default;
            class Edit; 
            class Combo;
            class Checkbox;
            class CheckboxNumber; 
            class ModuleDescription;
            class Units;
        };
        class ModuleDescription
        {
            class AnyBrain;
        };
    };
    class keko_ModuleAceHeal: Module_F
    {
        scope = 1; 
        scopeCurator = 2;
        displayName = "ACE Full Heal"; 
        category = "keko_kellerkompanie";
        function = "keko_fnc_moduleAceHeal";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable = 0;
    };
    class keko_ModuleLoadoutObject: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Loadout Menu"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleLoadoutObject";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class keko_ModuleLogisticsObject: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Logistics Menu"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleLogisticsObject";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class keko_ModuleMoveRespawn: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Set Respawn Position"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleMoveRespawn";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
    class keko_ModuleSelectFaction: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Select Faction"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleSelectFaction";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };
};

class CfgFunctions 
{
    class keko
    {
        class keko_kellerkompanie
        {
            file = "\keko_zeus\functions";
            class moduleAceHeal{};
            class moduleLoadoutObject{};
            class moduleLogisticsObject{};
            class moduleMoveRespawn{};
            class moduleSelectFaction{};
        };
    };
};