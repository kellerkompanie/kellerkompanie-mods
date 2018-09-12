// Server can also ensure owner id is correct
if (isServer) then
{
    params ["_target", "_varname"];
    if (local(_target)) exitWith {};

    private _oid = owner _target;
    private _id = _target getVariable [QGVAR(OwnerID), -1];
    if (_id != _oid) then
    {
        _target setVariable [QGVAR(OwnerID), _oid, true];
    };

    _id publicVariableClient _varname;
}
else
{
    // Send _varname to _target using publicVariableClient
    // ownerid is broadcast from the server when a client connects
    params ["_target", "_varname"];
    if (local _target) exitWith {false;};

    private _id = _target getVariable [QGVAR(OwnerID), -1];
    if (_id isEqualTo -1) exitWith {false;};

    _id publicVariableClient _varname;
    true;
};
