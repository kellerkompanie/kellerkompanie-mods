#include "script_component.hpp"

params ["_vehicle",["_ropesIndex",0],["_ropeLength",15]];

INFO_3("deployRopesIndex _vehicle=%1 _ropesIndex=%2 _ropeLength=%3", _vehicle, _ropesIndex, _ropeLength);

if(local _vehicle) then {
    private _existingRopes = [_vehicle,_ropesIndex] call FUNC(getRopes);
    private _existingRopesCount = [_vehicle] call FUNC(getRopesCount);

    INFO("deployRopesIndex vehicle is local");

    if(count _existingRopes == 0) then {
        INFO("deployRopesIndex _existingRopes == 0");

        private _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
        INFO_1("deployRopesIndex _slingLoadPoints=%1", _slingLoadPoints);
        private _cargoRopes = [];

        INFO_2("deployRopesIndex _existingRopesCount=%1 _ropesIndex=%2", _existingRopesCount, _ropesIndex);
        private _slingLoadPoint = (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex;
        INFO_1("deployRopesIndex _slingLoadPoint=%1", _slingLoadPoint);

        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);
        _cargoRopes pushBack (ropeCreate [_vehicle, _slingLoadPoint, _ropeLength]);

        INFO_1("deployRopesIndex _cargoRopes=%1", _cargoRopes);

        {
            INFO_2("deployRopesIndex unwinding rope _x=%1 _ropeLength=%2", _x, _ropeLength);
            ropeUnwind [_x, 5, _ropeLength];
        } forEach _cargoRopes;

        private _allRopes = _vehicle getVariable [QGVAR(Ropes),[]];

        _allRopes set [_ropesIndex,_cargoRopes];
        _vehicle setVariable [QGVAR(Ropes),_allRopes,true];
    };
} else {
    INFO("deployRopesIndex vehicle is not local");
    _this remoteExecCall [QFUNC(deployRopesIndex), _vehicle];
};
