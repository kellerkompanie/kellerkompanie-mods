#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("loadCrate: persistency disabled, exiting!"); false};
if(EGVAR(persistency_settings,key) == "") exitWith{WARNING("loadCrate: persistency key not set, exiting!"); false};
if !(EGVAR(persistency_settings,cratesEnabled)) exitWith{WARNING("loadCrate: persistency for crates is disabled, exiting!"); false};

params [
	["_input", objNull, [objNull, -1]]
];

TRACE_1("loadCrate", _input);

private _objIsNull = false;
if((typeName _input) == (typeName objNull)) then {
	if(isNull _input) then {
		_objIsNull = true;
	};
};

if(_objIsNull) exitWith {
	ERROR("loadCrate: illegal argument, exiting!");
	false
};

private _crate = objNull;
private _crateID = -1;

if ((typeName _input) == (typeName objNull)) then {
	// an object was passed as input, assume it's a crate
	_crate = _input;
	_crateID = _crate getVariable ["keko_persistency_crateID", -1];
} else {
	// input must be a CrateID
	_crateID = _input;
};

if(_crateID == -1) exitWith {
	ERROR("loadCrate: crate has no ID assigned, exiting!");
	false
};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getCrate:%1", _crateID]);

if ((_ret select 0) == 1) then {
	TRACE_1("loadCrate: loading sucessful", _ret);

	// assume loading was sucess
	((_ret select 1) select 0) params [
		"_class",
		"_position",
		"_orientation",
		"_items",
		"_magazines",
		"_weapons",
		"_containers"];

	TRACE_4("loadCrate", _class, _position, _orientation, _items);

	// ReammoBox_F
	if(isNull _crate) then {
		//_allPossibleCrates = nearestObjects [_position, [_class], 100000];
		private _allPossibleCrates = allMissionObjects _class;
		{
			if (_x getVariable ["keko_persistency_crateID", -1] == _crateID) exitWith{_crate = _x;};
		} forEach _allPossibleCrates;
	};

	if(isNull _crate) then {
		_crate = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
	} else {
		_crate setPos _position;
	};

	_crate setDir _orientation;
	private _serializedData = [_items, _magazines, _weapons, _containers];
	[_crate, _serializedData] call FUNC(setContainerContent);

	_crate setVariable ["keko_persistency_crateID", _crateID];

	true
} else {
	ERROR("loadCrate: loading unsucessful", _ret);
	false
};
