#include "script_component.hpp"

params ["_player", "_role"];

_player enableSimulation false;

_player setVariable ["ace_medical_medicClass", 0, true];
_player setVariable ["ACE_isEngineer", 0, true];

if (isNil QGVAR(customLoadouts)) then {
    GVAR(customLoadouts) = [];
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

if !(weaponLowered player) then {
    _player action ["WeaponOnBack", _player];
};
