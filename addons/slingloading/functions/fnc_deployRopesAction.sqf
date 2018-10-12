#include "script_component.hpp"

private ["_vehicle","_canDeployRopes"];

if(vehicle player == player) then {
	_vehicle = cursorTarget;
} else {
	_vehicle = vehicle player;
};

if([_vehicle] call FUNC(canDeployRopes)) then {

	_canDeployRopes = true;

	if!(missionNamespace getVariable [QGVAR(LockedVehiclesEnabled),false]) then {
		if( locked _vehicle > 1 ) then {
			["Cannot deploy cargo ropes from locked vehicle",false] call FUNC(hint);
			_canDeployRopes = false;
		};
	};

	if(_canDeployRopes) then {

		_inactiveRopes = [_vehicle] call FUNC(getInactiveRopes);

		if(count _inactiveRopes > 0) then {

			if(count _inactiveRopes > 1) then {
				player setVariable [QGVAR(DeployRopesIndexVehicle), _vehicle];
				["Deploy Cargo Ropes",QFUNC(DeployRopesIndexAction),_inactiveRopes] call FUNC(showSelectRopesMenu);
			} else {
				[_vehicle,player,(_inactiveRopes select 0) select 0] call FUNC(deployRopesIndex);
			};

		} else {

			_slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
			if(count _slingLoadPoints > 1) then {
				player setVariable [QGVAR(DeployCountVehicle), _vehicle];
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
				showCommandingMenu QUOTE(#USER:GVAR(DeployRopesCountMenu));
			} else {
				[_vehicle,player] call FUNC(deployRopes);
			};

		};

	};

};
