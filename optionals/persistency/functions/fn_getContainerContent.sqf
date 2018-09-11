params ["_crate"];

// get all items without containers
_items = [];
{
	_isVest = (_x isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"]) || (_x isKindOf ["Vest_NoCamo_Base", configFile >> "CfgWeapons"]);
	_isUniform = _x isKindOf ["Uniform_base", configFile >> "CfgWeapons"];
	if !(_isVest || _isUniform) then {
		_items pushBack _x;
	};
} forEach itemCargo _crate;

_magazines = magazinesAmmoCargo _crate;
_weapons = weaponsItemsCargo _crate;

_containers = [];
{
	_x params ["_containerType", "_containerObject"];

	_containerItems = getItemCargo _containerObject;
	_containerMagazines = magazinesAmmoCargo _containerObject;
	_containerWeapons = weaponsItemsCargo _containerObject;

	_containers pushBack [_containerType, _containerItems, _containerMagazines, _containerWeapons];

} forEach everyContainer _crate;

_r = [_items, _magazines, _weapons, _containers];

_r