#include "script_component.hpp"

private ["_vehicle"];

_vehicle = vehicle player;

if([_vehicle] call FUNC(canReleaseCargo)) then {
    private _activeRopes = [_vehicle] call FUNC(getActiveRopesWithCargo);

    if(count _activeRopes > 1) then {
        player setVariable [QGVAR(ReleaseCargoIndexVehicle), _vehicle];
        ["Release Cargo",QFUNC(releaseCargoIndexAction),_activeRopes,"Cargo"] call FUNC(showSelectRopesMenu);
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call FUNC(releaseCargo);
        };
    };
};
