params ["_role","_faction"];

diag_log text format["[KEKO] (loadout) applyCustomLoadout: %1", _role];

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

if (isNil "keko_var_customLoadouts") then {
	keko_var_customLoadouts = [];
};

{
	_type = _x select 0;
	_name = _x select 1;	
	_loadout = _x select 2;
	
	if(_type isEqualTo _role) then {
		player setUnitLoadout _loadout;
	};
} forEach keko_var_customLoadouts;

call keko_loadout_fnc_addPresetItems;

player enableSimulation true;

if !(weaponLowered player) then {
	player action ["WeaponOnBack", player];
};

[player] spawn keko_loadout_fnc_setChannels;