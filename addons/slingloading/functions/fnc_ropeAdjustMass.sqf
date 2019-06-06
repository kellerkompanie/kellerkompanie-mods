#include "script_component.hpp"

params ["_obj","_heli",["_ropes",[]]];

private _lift = [_heli] call FUNC(ropeGetLiftCapability);
private _originalMass = getMass _obj;
private _heavyLiftMinLift = missionNamespace getVariable [QGVAR(HeavyLiftingMinLiftOverride),5000];

if( _originalMass >= ((_lift)*0.8) && _lift >= _heavyLiftMinLift ) then {
    private _originalMassSet = (getMass _obj) == _originalMass;
    while { _obj in (ropeAttachedObjects _heli) && _originalMassSet } do {
        {
            private _ends = ropeEndPosition _x;
            private _endDistance = (_ends select 0) distance (_ends select 1);
            private _ropeLength = ropeLength _x;
            if((_ropeLength - 2) <= _endDistance && ((position _heli) select 2) > 0 ) then {
                [_obj, ((_lift)*0.8)] remoteExecCall [QFUNC(ropeSetMass), _obj];
                _originalMassSet = false;
            };
        } forEach _ropes;
        sleep 0.1;
    };
    while { _obj in (ropeAttachedObjects _heli) } do {
        sleep 0.5;
    };
    [_obj, _originalMass] remoteExecCall [QFUNC(ropeSetMass), _obj];
};
