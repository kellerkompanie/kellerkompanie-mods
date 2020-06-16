// Original Author: Belbo [SeL] http://spezialeinheit-luchs.de/
#include "script_component.hpp"

if !(hasInterface) exitWith {};

params [
    ["_unit", player, [objNull]]
];

/*
SR-Kreise:
1. 30.1 Lead
2. 31 Alpha
3. 32 Bravo
4. 33 Charlie
5. 34 Delta
6. 35 Echo
7. 36 Fox
8. 30 Kampfkreis

LR-Kreise:
1. 50 Konvoi / Fahrzeuge
2. 30 Kampfkreis
3. 40 Air Traffic
4. 60 Logistik
5. 70 OPZ/Zeus
*/

//set frequencies depending on group for tfar

private _activeSWRadio = call TFAR_fnc_activeSwRadio;
private _hasLRRadio = call TFAR_fnc_haveLRRadio;
private _activeLRRadio = if (_hasLRRadio) then {call TFAR_fnc_activeLRRadio} else {[""]};

if ( toUpper (groupID group _unit) in ["COMMAND","HQ"] ) exitWith {
    [_activeSWRadio, 0] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
        [_activeLRRadio, 5] call TFAR_fnc_setAdditionalLrChannel;
    };
};
if ( toUpper (groupID group _unit) in ["LEAD"] ) exitWith {
    [_activeSWRadio, 0] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
        [_activeLRRadio, 5] call TFAR_fnc_setAdditionalLrChannel;
    };
};
if ( toUpper (groupID group _unit) in ["ALPHA","ALFA"] ) exitWith {
    [_activeSWRadio, 1] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
    };
};
if ( toUpper (groupID group _unit) in ["BRAVO"] ) exitWith {
    [_activeSWRadio, 2] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
    };
};
if ( toUpper (groupID group _unit) in ["CHARLIE"] ) exitWith {
    [_activeSWRadio, 3] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
    };
};
if ( toUpper (groupID group _unit) in ["DELTA"] ) exitWith {
    [_activeSWRadio, 4] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 1] call TFAR_fnc_setLRChannel;
    };
};
if ( toUpper (groupID group _unit) in ["ECHO"] ) exitWith {
    [_activeSWRadio, 5] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 2] call TFAR_fnc_setLRChannel;
    };
};
if ( toUpper (groupID group _unit) in ["FOX"] ) exitWith {
    [_activeSWRadio, 6] call TFAR_fnc_setSwChannel;
    if (_hasLRRadio) then {
        [_activeLRRadio, 0] call TFAR_fnc_setLRChannel;
    };
};

// TFAR_fnc_setLRChannel
// TFAR_fnc_setLrStereo
// TFAR_fnc_setSwChannel
// TFAR_fnc_setSwStereo

// TFAR_fnc_setSwVolume
// TFAR_fnc_setLrVolume

// TFAR_fnc_setAdditionalLrChannel
// TFAR_fnc_setAdditionalLrStereo
// TFAR_fnc_setAdditionalSwChannel
// TFAR_fnc_setAdditionalSwStereo
