#include "script_component.hpp"

private ["_vehicle","_cargo","_canBeAttached"];
_cargo = cursorTarget;
_vehicle = (player getVariable [QGVAR(RopesVehicle), [objNull,0]]) select 0;
if([_vehicle,_cargo] call FUNC(canAttachRopes)) then {

    _canBeAttached = true;

    if!(missionNamespace getVariable [QGVAR(LockedVehiclesEnabled),false]) then {
        if( locked _cargo > 1 ) then {
            hint "Cannot attach cargo ropes to locked vehicle";
            _canBeAttached = false;
        };
    };

    if(_canBeAttached) then {
        [_cargo,player] call FUNC(attachRopes);
    };

};
