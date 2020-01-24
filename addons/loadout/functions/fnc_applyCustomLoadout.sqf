#include "script_component.hpp"

params ["_player", "_role"];

_player enableSimulation false;

_player setVariable ["ace_medical_medicClass", 0, true];
_player setVariable ["ACE_isEngineer", 0, true];

INFO_1("applyCustomLoadout GVAR(customLoadouts) = %1", GVAR(customLoadouts));

if (isNil QGVAR(customLoadouts)) then {
    WARNING_1("%1 is nil", QGVAR(customLoadouts));
};

{
    _x params ["_type","","_loadout", "_medicClass", "_engineerClass"];

    if(_type isEqualTo _role) then {
        _player setUnitLoadout _loadout;
        _player setVariable ["ace_medical_medicClass", _medicClass, true];
        _player setVariable ["ACE_isEngineer", _engineerClass, true];
    };
} forEach GVAR(customLoadouts);

if( _role isEqualTo "Doctor" ) then {
    _player setVariable ["ace_medical_medicClass", 2, true];
};

if( _role isEqualTo "Medic" ) then {
    _player setVariable ["ace_medical_medicClass", 1, true];
};

if( _role isEqualTo "Engineer" ) then {
    _player setVariable ["ACE_isEngineer", 2, true];
};

if( _role isEqualTo "EOD" ) then {
    _player setVariable ["ACE_isEngineer", 2, true];
};

_player call FUNC(addPresetItems);

_player enableSimulation true;

[
    {
        params ["_player"];
        if !(weaponLowered _player) then {
            _player action ["WeaponOnBack", _player];
        };
    },
    [_player],
    2
] call CBA_fnc_waitAndExecute;
