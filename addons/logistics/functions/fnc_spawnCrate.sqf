#include "script_component.hpp"

private _returnCrate = "";

params ["_position", "_crate_name", ["_isDeletable", true, [true]]];

private _descapedString = [_crate_name, "%20", " "] call EFUNC(common,replaceString);

{
    private _entryName = _x select 0;
    private _entryClass = _x select 1;
    private _entryContents = _x select 2;

    if(_entryName isEqualTo _descapedString) then {
        _position = [_position select 0, _position select 1, (_position select 2) + 0.1];
        private _crate = createVehicle [_entryClass, _position, [], 0, "CAN_COLLIDE"];
        _crate allowDamage false;
        [_crate] call FUNC(clearCargo);

        {
            _x addCuratorEditableObjects [[_crate], false];
        } forEach allCurators;

        [_crate, _entryContents] call FUNC(fillCrate);

        if (_isDeletable) then {
            _crate remoteExec [QFUNC(addDeleteCrateAction), [0, -2] select isDedicated];
        };

        if(true) exitWith{_returnCrate = _crate;};
    };
} forEach GVAR(crates);


_returnCrate
