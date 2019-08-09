#include "script_component.hpp"

params ["_role"];

player enableSimulation false;

player setVariable ["ace_medical_medicClass", 0, true];
player setVariable ["ACE_isEngineer", 0, true];

if (isNil QGVAR(customLoadouts)) then {
    GVAR(customLoadouts) = [];
};

{
    _x params ["_type","","_loadout", "_medicClass", "_engineerClass"];

    if(_type isEqualTo _role) then {
        player setUnitLoadout _loadout;
        player setVariable ["ace_medical_medicClass", _medicClass, true];
        player setVariable ["ACE_isEngineer", _engineerClass, true];
    };
} forEach GVAR(customLoadouts);

if( _role isEqualTo "Doctor" ) then {
    player setVariable ["ace_medical_medicClass", 2, true];
};

if( _role isEqualTo "Medic" ) then {
    player setVariable ["ace_medical_medicClass", 1, true];
};

if( _role isEqualTo "Engineer" ) then {
    player setVariable ["ACE_isEngineer", 2, true];
};

if( _role isEqualTo "EOD" ) then {
    player setVariable ["ACE_isEngineer", 2, true];
};

call FUNC(addPresetItems);

player enableSimulation true;

if !(weaponLowered player) then {
    player action ["WeaponOnBack", player];
};
