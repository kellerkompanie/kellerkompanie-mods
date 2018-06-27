class CfgPatches
{
    class keko_unknown_weapon
    {
        units[] = { };
        requiredVersion = 1.80;
        requiredAddons[] = {
            "keko_common",
            "keko_loadout"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;       
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_category_unknown_weapon: NO_CATEGORY
    {
        displayName = "Kellerkompanie Unknown Weapon";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
        };
    };
    class keko_ModuleWhitelistWeapons3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Whitelist Weapons"; 
        category           = "keko_category_unknown_weapon";
        function           = "keko_unknown_weapon_fnc_moduleWhitelistWeapons3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_unknown_weapon\icons\icon_weapon.pac";
    };
    class keko_ModuleWhitelistWeapons: Module_F
    {
        displayName        = "Whitelist Weapons";
        icon               = "\keko_unknown_weapon\icons\icon_weapon.pac"; 
        category           = "keko_category_unknown_weapon";
        function           = "keko_unknown_weapon_fnc_moduleWhitelistWeapons";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;        
        scope              = 1; 
        scopeCurator       = 2;
    };
};

class CfgFunctions 
{
    class keko_unknown_weapon
    {
        tag = "keko_unknown_weapon";
        class unknown_weapon 
        {
            file = "keko_unknown_weapon\functions";
            class moduleWhitelistWeapons3den {};
            class moduleWhitelistWeapons {};  
            class postInit{postInit = 1;};    
        };
    };
};

class Extended_PreInit_EventHandlers {
    keko_unknown_weapon_xeh = call compile preprocessFileLineNumbers "\keko_unknown_weapon\XEH_preInit.sqf";
};