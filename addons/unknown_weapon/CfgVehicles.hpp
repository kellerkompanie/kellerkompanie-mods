class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
        };
    };
    class GVAR(moduleWhitelistWeapons3den): Module_F {        
        displayName        = "Whitelist Weapons"; 
        category           = QGVAR(UnknownWeapon);
        function           = QFUNC(moduleWhitelistWeapons3den);
        icon = QPATHTOF(ui\icon_weapon.pac);
        scope              = 2; 
        scopeCurator       = 1;
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;        
    };
    class GVAR(moduleWhitelistWeapons): Module_F {
        displayName        = "Whitelist Weapons";
        icon               = QPATHTOF(ui\icon_weapon.pac); 
        category           = QGVAR(UnknownWeapon);
        function           = QFUNC(moduleWhitelistWeapons);
        scope              = 1; 
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
};