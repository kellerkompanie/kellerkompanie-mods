#include "script_component.hpp"

params ["_vehicle","_player",["_ropesIndex",0],["_ropeLength",15]];
if(local _vehicle) then {
	private ["_existingRopes","_existingRopesCount","_allRopes"];
	_existingRopes = [_vehicle,_ropesIndex] call FUNC(getRopes);
	_existingRopesCount = [_vehicle] call FUNC(getRopesCount);
	if(count _existingRopes == 0) then {
		_slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
		_cargoRopes = [];
		_cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
		_cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
		_cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
		_cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
		{
			ropeUnwind [_x, 5, _ropeLength];
		} forEach _cargoRopes;
		_allRopes = _vehicle getVariable [QGVAR(Ropes),[]];
		_allRopes set [_ropesIndex,_cargoRopes];
		_vehicle setVariable [QGVAR(Ropes),_allRopes,true];
	};
} else {
	[_this,QFUNC(deployRopesIndex),_vehicle,true] call FUNC(remoteExec);
};
