["keko_settings_shacktac", "LIST", ["ShackTac", "Enable/Disable ShackTac"], "STUI Settings", [[1,0], ["Enabled","Disabled"], 0]] call cba_settings_fnc_init;

STUI_Debug = (productVersion select 4) == "Diag" || {profileNamespace getVariable ["STUI_Debug", false]};

if (STUI_Debug) then
{
    STUI_Load =
    {
        params ["_filename"];
        private _start = diag_tickTime;
        diag_log ["STUI: Loading", _filename];
        call compile preprocessFileLineNumbers("\stui_" + _filename);
        diag_log ["STUI: Finished ", _filename, " in ", diag_tickTime - _start];
    };
}
else
{
    STUI_Load =
    {
        params ["_filename"];
        call compile preprocessFileLineNumbers("\stui_" + _filename);
    };
};

STUI_LoadAll =
{
    {_x call STUI_Load} forEach(_this);
};

STUI_PostInits = [];

STUI_Run_PostInits =
{
    {
        call(_x);
    } forEach(STUI_PostInits);

    // No need to keep this around in memorry
    if (!STUI_Debug) then
    {
        // Resize rather than nil out in case something accidentally
        // tries to use it.
        STUI_PostInits resize 0;
    };
};

"core\sendto.sqf" call STUI_Load;

// Rest of this isn't needed by servers etc.
if (!hasInterface) exitWith
{
    // Skip over these init lines
    STUI_LoadUIOnly = {};
};

STUI_BlankDialog =
{
    createDialog "STUI_BlankDialog";
    findDisplay 999;
};

if (isNil "STUI_Occlusion") then {STUI_Occlusion = true};

// Forward to normal STUI_Load if hasInterface
STUI_LoadUIOnly = STUI_Load;

[
     "core\canvas.sqf"
    ,"core\fontmetrics.sqf"
    ,"core\assignedTeam.sqf"
    ,"core\settings.sqf"
] call STUI_LoadAll;
