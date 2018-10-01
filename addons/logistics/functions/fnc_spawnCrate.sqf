#include "script_component.hpp"

INFO("spawnCrate");

private _returnCrate = "";
if(GVAR(customLogistics) == 2) then {
	params ["_position", "_crate_name"];

	INFO("spawnCrate customLogistics == 2");
	TRACE_1("spawnCrate customCrates =", GVAR(customCrates));
	TRACE_1("spawnCrate", _crate_name);

	private _descapedString = [_crate_name, "%20", " "] call EFUNC(common,replaceString);

	TRACE_1("spawnCrate _descapedString", _descapedString);

	{
		private _entryName = _x select 0;
		private _entryClass = _x select 1;
		private _entryContents = _x select 2;

		TRACE_2("spawnCrate iterating", _entryName, _entryClass);

		if(_entryName isEqualTo _descapedString) then {
			TRACE_2("isEqualTo", _entryName, _descapedString);

			_position = [_position select 0, _position select 1, (_position select 2) + 0.1];
			private _crate = createVehicle [_entryClass, _position, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			[_crate] call FUNC(clearCargo);

			[_crate, _entryContents] call FUNC(fillCrate);

			private _actionDelete = ["DeleteCrate", "Delete Crate", "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction;
			[_crate, 0, ["ACE_MainActions"], _actionDelete] call ace_interact_menu_fnc_addActionToObject;

			INFO("spawnCrate crate created");

			if(true) exitWith{_returnCrate = _crate;};
		};
	} forEach GVAR(customCrates) select 0;
}
else {
	params ["_position", "_faction", "_crate"];

	INFO("spawnCrate customLogistics != 2");
	TRACE_3("spawnCrate", _position, _faction, _crate);

	private _crateConfig = configFile >> "kekoFaction" >> _faction >> _crate;
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

	INFO("spawnCrate crate created");

	if(true) exitWith{_returnCrate = _crate;};
};

_returnCrate
