#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _listBox = _display displayCtrl 1500;
private _playerListBox = _display displayCtrl 1501;

// LBs leeren
lbClear _listBox;
lbClear _playerListBox;
ctrlEnable [1606, false];

{
    if(side _x == side player) then {
        lbAdd [1501, name _x];
        lbSetData [1501, _forEachIndex, getPlayerUID _x];
        lbSetCurSel [1501, 0];
        ctrlEnable [1606, true];
    };
} forEach allPlayers - [player];

switch(side player) do {
    case west: {
        if (isNil QGVAR(destinations_blufor)) then {GVAR(destinations_blufor) = []};

        TRACE_1("dialogTeleportInit", GVAR(destinations_blufor));

        {
            TRACE_1("dialogTeleportInit", _x);

            lbAdd [1500, _x];
            lbSetData [1500, _forEachIndex, _x];
            lbSetCurSel [1500, 0];
        } forEach GVAR(destinations_blufor);

        if(count GVAR(destinations_blufor) == 0) then {
            ctrlEnable [1600, false];
            ctrlEnable [1601, false];
            ctrlEnable [1602, false];
            ctrlEnable [1603, false];
        };
    };
    case resistance: {
        if (isNil "keko_teleport_destinations_indfor") then {GVAR(destinations_indfor) = []};

        TRACE_1("dialogTeleportInit", GVAR(destinations_indfor));

        {
            TRACE_1("dialogTeleportInit", _x);

            lbAdd [1500, _x];
            lbSetData [1500, _forEachIndex, _x];
            lbSetCurSel [1500, 0];
        } forEach GVAR(destinations_indfor);

        if(count GVAR(destinations_indfor) == 0) then {
            ctrlEnable [1600, false];
            ctrlEnable [1601, false];
            ctrlEnable [1602, false];
            ctrlEnable [1603, false];
        };
    };
    case east:
    {
        if (isNil QGVAR(destinations_opfor)) then {GVAR(destinations_opfor) = []};

        TRACE_1("dialogTeleportInit", GVAR(destinations_opfor));

        {
            TRACE_1("dialogTeleportInit", _x);

            lbAdd [1500, _x];
            lbSetData [1500, _forEachIndex, _x];
            lbSetCurSel [1500, 0];
        } forEach GVAR(destinations_opfor);

        if(count GVAR(destinations_opfor) == 0) then {
            ctrlEnable [1600, false];
            ctrlEnable [1601, false];
            ctrlEnable [1602, false];
            ctrlEnable [1603, false];
        };
    };
    case civilian: {
        if (isNil "keko_teleport_destinations_civ") then {GVAR(destinations_civ) = []};

        TRACE_1("dialogTeleportInit", GVAR(destinations_civ));

        {
            TRACE_1("dialogTeleportInit", _x);

            lbAdd [1500, _x];
            lbSetData [1500, _forEachIndex, _x];
            lbSetCurSel [1500, 0];
        } forEach GVAR(destinations_civ);

        if(count GVAR(destinations_civ) == 0) then {
            ctrlEnable [1600, false];
            ctrlEnable [1601, false];
            ctrlEnable [1602, false];
            ctrlEnable [1603, false];
        };
    };
};

true
