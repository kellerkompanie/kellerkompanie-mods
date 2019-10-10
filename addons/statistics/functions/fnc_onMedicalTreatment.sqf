#include "script_component.hpp"

params ["_medic", "", "", "_className"];

if (_medic != ACE_player) exitWith {};

if (_className in ["FieldDressing", "PackingBandage", "ElasticBandage", "QuikClot"]) exitWith {
    GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
};

if (_className isEqualTo "CheckPulse") exitWith {
    GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
};

if (_className isEqualTo "CPR") exitWith {
    GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
};
