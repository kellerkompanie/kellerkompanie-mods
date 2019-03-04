#include "script_component.hpp"

INFO_1("_this %1", _this);

private _returnCrate = "";
if(GVAR(customLogistics) == 2) then {
	params ["_position", "_crate_name"];

	private _descapedString = [_crate_name, "%20", " "] call EFUNC(common,replaceString);

	{
		private _entryName = _x select 0;
		private _entryClass = _x select 1;
		private _entryContents = _x select 2;

		if(_entryName isEqualTo _descapedString) then {
			_position = [_position select 0, _position select 1, (_position select 2) + 0.1];
			private _crate = createVehicle [_entryClass, _position, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			[_crate] call FUNC(clearCargo);

			[_crate, _entryContents] call FUNC(fillCrate);

			private _actionDelete = ["DeleteCrate", "Delete Crate", "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction;
			[_crate, 0, ["ACE_MainActions"], _actionDelete] call ace_interact_menu_fnc_addActionToObject;

			if(true) exitWith{_returnCrate = _crate;};
		};
	} forEach GVAR(customCrates) select 0;
}
else {
	params ["_position", "_faction", "_crate"];

	private _crateConfig = configFile >> "kekoFactions" >> _faction >> "crates" >> _crate;
	private _cfgNames = getArray (_crateConfig >> "cfgName");

	// TODO choose based on side
	private _cfgName = _cfgNames select 0;

	private _inventory = getArray (_crateConfig >> "inventory");

	_position = [_position select 0, _position select 1, (_position select 2) + 0.1];
	_crate = createVehicle [_cfgName,_position, [], 0, "CAN_COLLIDE"];
	_crate allowDamage false;
	[_crate] call FUNC(clearCargo);

	[_crate, _inventory] call FUNC(fillCrate);

	private _actionDelete = ["DeleteCrate", "Delete Crate", "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction;
	[_crate, 0, ["ACE_MainActions"], _actionDelete] call ace_interact_menu_fnc_addActionToObject;

	if(true) exitWith{_returnCrate = _crate;};
};

_returnCrate
