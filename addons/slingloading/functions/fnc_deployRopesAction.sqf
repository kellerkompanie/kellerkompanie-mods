#include "script_component.hpp"

params ["_player", "_vehicle"];

private _canDeployRopes = true;

if!(missionNamespace getVariable [QGVAR(LockedVehiclesEnabled),false]) then {
    if( locked _vehicle > 1 ) then {
        hint "Cannot deploy cargo ropes from locked vehicle";
        _canDeployRopes = false;
    };
};

if(_canDeployRopes) then {

    private _inactiveRopes = [_vehicle] call FUNC(getInactiveRopes);

    if(count _inactiveRopes > 0) then {

        if(count _inactiveRopes > 1) then {
            _player setVariable [QGVAR(DeployRopesIndexVehicle), _vehicle];
            ["Deploy Cargo Ropes",QFUNC(DeployRopesIndexAction),_inactiveRopes] call FUNC(showSelectRopesMenu);
        } else {
            [_vehicle,_player,(_inactiveRopes select 0) select 0] call FUNC(deployRopesIndex);
        };

    } else {

        private _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
        if(count _slingLoadPoints > 1) then {
            _player setVariable [QGVAR(DeployCountVehicle), _vehicle];
            GVAR(DeployRopesCountMenu) = [
                    ["Deploy Ropes",false]
            ];
            GVAR(DeployRopesCountMenu) pushBack ["For Single Cargo", [0], "", -5, [["expression", QUOTE([1] call FUNC(deployRopesCountAction))]], "1", "1"];
            if((count _slingLoadPoints) > 1) then {
                GVAR(DeployRopesCountMenu) pushBack ["For Double Cargo", [0], "", -5, [["expression", QUOTE([2] call FUNC(deployRopesCountAction))]], "1", "1"];
            };
            if((count _slingLoadPoints) > 2) then {
                GVAR(DeployRopesCountMenu) pushBack ["For Triple Cargo", [0], "", -5, [["expression", QUOTE([3] call FUNC(deployRopesCountAction))]], "1", "1"];
            };
            showCommandingMenu "";
            showCommandingMenu ("#USER:" + GVAR(DeployRopesCountMenu));
        } else {
            [_player, _vehicle] call FUNC(deployRopes);
        };

    };

};
