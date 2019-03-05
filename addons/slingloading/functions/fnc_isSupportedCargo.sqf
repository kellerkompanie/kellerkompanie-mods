#include "script_component.hpp"

params ["_vehicle","_cargo"];

private _canSling = false;
if(not isNull _vehicle && not isNull _cargo) then {
    {
        if(_vehicle isKindOf (_x select 0)) then {
            if(_cargo isKindOf (_x select 2)) then {
                if( (toUpper (_x select 1)) == "CAN_SLING" ) then {
                    _canSling = true;
                } else {
                    _canSling = false;
                };
            };
        };
    } forEach (missionNamespace getVariable [QGVAR(SlingRulesOverride),GVAR(SlingRules)]);
};
_canSling;
