#include "script_component.hpp"

params ["_role",""];

TRACE_1("applyCustomLoadout", _role);

player enableSimulation false;

player setVariable ["ace_medical_medicClass", 0, true];
player setVariable ["ACE_isEngineer", 0, true];

if( _role isEqualTo "kekoDoctor" ) then {
	player setVariable ["ace_medical_medicClass", 2, true];
};

if( _role isEqualTo "kekoMedic" ) then {
	player setVariable ["ace_medical_medicClass", 1, true];
};

if( _role isEqualTo "kekoEngineer" ) then {
	player setVariable ["ACE_isEngineer", 2, true];
};

if( _role isEqualTo "kekoEOD" ) then {
	player setVariable ["ACE_isEngineer", 2, true];
};

if (isNil GVAR(customLoadouts)) then {
	GVAR(customLoadouts) = [];
};

{
	_x params ["_type","","_loadout"];

	if(_type isEqualTo _role) then {
		player setUnitLoadout _loadout;
	};
} forEach GVAR(customLoadouts);

call FUNC(addPresetItems);

player enableSimulation true;

if !(weaponLowered player) then {
	player action ["WeaponOnBack", player];
};

[player] spawn FUNC(setChannels);
