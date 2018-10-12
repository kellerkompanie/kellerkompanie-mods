#include "script_component.hpp"

params ["_vehicle","",["_ropeIndex",0]];

if(local _vehicle) then {
	private _existingRopesAndCargo = [_vehicle,_ropeIndex] call FUNC(getRopesAndCargo);
	private _existingRopes = _existingRopesAndCargo select 0;
	private _existingCargo = _existingRopesAndCargo select 1;
	{
		_existingCargo ropeDetach _x;
	} forEach _existingRopes;
	private _allCargo = _vehicle getVariable [QGVAR(Cargo),[]];
	_allCargo set [_ropeIndex,objNull];
	_vehicle setVariable [QGVAR(Cargo),_allCargo, true];
	_this call FUNC(retractRopes);
} else {
	_this remoteExecCall [QFUNC(releaseCargo), _vehicle];
};
