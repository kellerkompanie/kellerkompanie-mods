params ["_position", "_faction", "_crate"];

_crateConfig = configFile >> "kekoFaction" >> _faction >> _crate;
_cfgNames = getArray (_crateConfig >> "cfgName");

// TODO choose based on side
_cfgName = _cfgNames select 0;

_inventory = getArray (_crateConfig >> "inventory");

_crate = createVehicle [_cfgName,_position,[],0,"CAN_COLLIDE"];
_crate allowDamage false;
[_crate] call keko_logistics_fnc_clearCargo;

[_crate, _inventory] call keko_logistics_fnc_fillCrate;

_crate;