#include "script_component.hpp"

params ["_vehicle",["_ropesIndex",0],["_ropeLength",15]];

if(local _vehicle) then {
    private _existingRopes = [_vehicle,_ropesIndex] call FUNC(getRopes);
    private _existingRopesCount = [_vehicle] call FUNC(getRopesCount);

    if(count _existingRopes == 0) then {
        private _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
        private _cargoRopes = [];
        private _slingLoadPoint = (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex;

        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);

        {
            ropeUnwind [_x, 5, _ropeLength];
        } forEach _cargoRopes;

        private _allRopes = _vehicle getVariable [QGVAR(Ropes),[]];

        _allRopes set [_ropesIndex,_cargoRopes];
        _vehicle setVariable [QGVAR(Ropes),_allRopes,true];
    };
} else {
    _this remoteExecCall [QFUNC(deployRopesIndex), _vehicle];
};
