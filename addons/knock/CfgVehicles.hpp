class cfgVehicles
{
    class LandVehicle;
    class Tank: LandVehicle
    {
        class ACE_Actions
        {
            class ACE_MainActions
            {
                class GVAR(knock)
                {
                    displayName = "Knock";
                    condition = "(vehicle _player isEqualTo _player) && !(crew _target isEqualTo [])";
                    exceptions[] = {"isnotescorting", "isnotdragging", "isnotcarrying"};
                    statement = "_this call keko_knock_fnc_knockOnTank";
                    showDisabled = 0;
                    priority = 1;
                    distance = 4;
                    icon = QPATHTOF(ui\knock.paa);
                };
            };
        };
    };
    class Car: LandVehicle
    {
        class ACE_Actions
        {
            class ACE_MainActions{};
        };
    };
    class Car_F: Car{};
    class Wheeled_APC: Car
    {
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                class GVAR(knock)
                {
                    displayName = "Knock";
                    condition = "(vehicle _player isEqualTo _player) && !(crew _target isEqualTo [])";
                    exceptions[] = {"isnotescorting", "isnotdragging", "isnotcarrying"};
                    statement = "_this call keko_knock_fnc_knockOnTank";
                    showDisabled = 0;
                    priority = 1;
                    distance = 4;
                    icon = QPATHTOF(ui\knock.paa);
                };
            };
        };
    };
    class Wheeled_APC_F: Car_F
    {
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                class GVAR(knock)
                {
                    displayName = "Knock";
                    condition = "(vehicle _player isEqualTo _player) && !(crew _target isEqualTo [])";
                    exceptions[] = {"isnotescorting", "isnotdragging", "isnotcarrying"};
                    statement = "_this call keko_knock_fnc_knockOnTank";
                    showDisabled = 0;
                    priority = 1;
                    distance = 4;
                    icon = QPATHTOF(ui\knock.paa);
                };
            };
        };
    };
};
