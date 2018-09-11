STUI_PostInits pushBack
{
    // Automatically get the server to broadcast the client's owner id
    // Have to perform this for each client because we don't want to require
    // the server to have STUI installed.
    if (!isDedicated) then
    {
        player setVariable ["STUI_OwnerID", clientOwner, true];
    };
};

// Server can also ensure owner id is correct
if (isServer) then
{
    STUI_SendTo =
    {
        params ["_target", "_varname"];
        if (local(_target)) exitWith {};

        private _oid = owner _target;
        private _id = _target getVariable ["STUI_OwnerID", -1];
        if (_id != _oid) then
        {
            _target setVariable ["STUI_OwnerID", _oid, true];
        };

        _id publicVariableClient _varname;
    };
}
else
{
    // Send _varname to _target using publicVariableClient
    // ownerid is broadcast from the server when a client connects
    STUI_SendTo =
    {
        params ["_target", "_varname"];
        if (local _target) exitWith {false;};

        private _id = _target getVariable ["STUI_OwnerID", -1];
        if (_id isEqualTo -1) exitWith {false;};

        _id publicVariableClient _varname;
        true;
    };
};
