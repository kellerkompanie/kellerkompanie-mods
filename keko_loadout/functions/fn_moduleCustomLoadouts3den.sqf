_logic = _this select 0;

if (!isServer) exitWith {};
diag_log text "[KEKO] (loadout) running moduleCustomLoadouts3den";

if (isNil "keko_var_customLoadouts") then {
	keko_var_customLoadouts = [];
};

_objects = synchronizedObjects _logic;
diag_log text format ["[KEKO] (loadout) synchronizedObjects _logic: %1", _objects];

{
	diag_log text format ["[KEKO] (loadout) converting %1 to loadout", _x];

	_loadout = getUnitLoadout _x;
	_type = typeOf _x;
	_loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _type >> "loadoutDummy");
	_name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
	
	keko_var_customLoadouts pushBack [_loadoutDummyClass, _name, _loadout];

	deleteVehicle _x;

} forEach _objects;

publicVariable "keko_var_customLoadouts";
diag_log text format ["[KEKO] (loadout) keko_var_customLoadouts: %1", keko_var_customLoadouts];