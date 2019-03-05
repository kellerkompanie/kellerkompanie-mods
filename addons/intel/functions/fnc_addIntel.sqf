#include "script_component.hpp"

params ["_object", "_action", "_title", "_content", "_remove"];

// TODO set duration in dialog
private _duration = 3;

[
    _object,    // Object the action is attached to
    _action,    // Title of the action
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",    // Idle icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",    // Progress icon shown on screen
    "_this distance _target < 3",    // Condition for the action to be shown
    "_caller distance _target < 3",    // Condition for the action to progress
    {},        // Code executed when action starts
    {},        // Code executed on every progress tick
    {
        params ["_object", "", "", "_arguments"];
        _arguments params ["_title", "_content", "_remove"];

        ["intelAdded", [format ["Intel gefunden", player, _title], "\A3\ui_f\data\map\markers\military\warning_ca.paa"]] call bis_fnc_showNotification;

        if !(player diarySubjectExists QGVAR(briefingIntel)) then {
            player createDiarySubject [QGVAR(briefingIntel), "Intel"];
        };
        
        player createDiaryRecord [QGVAR(briefingIntel), [_title, _content]];

        if (_remove) then {deleteVehicle _object};

        openMap [true,false];
    },    // Code executed on completion
    {},        // Code executed on interrupted
    [_title,_content,_remove],    // Arguments passed to the scripts
    _duration,    // Action duration
    20,            // Priority
    true,        // Remove on completion
    false        // Show in unconscious state
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];
