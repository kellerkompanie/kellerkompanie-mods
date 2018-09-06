if !(keko_settings_persistency_enabled) exitWith{diag_log text "[KEKO] (persistency) loadCrate: persistency disabled, exiting!"; false};
if(keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) loadCrate: persistency key not set, exiting!"; false};
if !(keko_settings_persistency_cratesEnabled) exitWith{diag_log text "[KEKO] (persistency) loadCrate: persistency for crates is disabled, exiting!"; false};

params [
	["_input", objNull, [objNull, -1]]
];

diag_log text format ["[KEKO] (persistency) loadCrate: _input=%1", _input];

_objIsNull = false;
if((typeName _input) == (typeName objNull)) then {
	if(isNull _input) then {
		_objIsNull = true;
	};
};

if(_objIsNull) exitWith{diag_log text "[KEKO] (persistency) loadCrate: illegal argument, exiting!"; false};

_crate = objNull;
_crateID = -1;

if ((typeName _input) == (typeName objNull)) then {
	// an object was passed as input, assume it's a crate
	_crate = _input;
	_crateID = _crate getVariable ["keko_persistency_crateID", -1];
} else {
	// input must be a CrateID
	_crateID = _input;
};

if(_crateID == -1) exitWith{diag_log text "[KEKO] (persistency) loadCrate: crate has no ID assigned, exiting!"; false};

_ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getCrate:%1", _crateID]);

if ((_ret select 0) == 1) then {
	diag_log text format ["[KEKO] (persistency) loadCrate: loading sucessful %1", _ret];

	// assume loading was sucess
	((_ret select 1) select 0) params [
		"_class",
		"_position",
		"_orientation",
		"_items",
		"_magazines",
		"_weapons",
		"_containers"];

	diag_log text format ["[KEKO] (persistency) loadCrate: _class=%1 _position=%2 _orientation=%3 _items=%4", _class, _position, _orientation, _items];

	// ReammoBox_F
	if(isNull _crate) then {
		//_allPossibleCrates = nearestObjects [_position, [_class], 100000];
		_allPossibleCrates = allMissionObjects _class;
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
	_serializedData = [_items, _magazines, _weapons, _containers];
	[_crate, _serializedData] call keko_persistency_fnc_setContainerContent;

	_crate setVariable ["keko_persistency_crateID", _crateID];

	true
} else {
	diag_log text format ["[KEKO] (persistency) loadCrate: loading unsucessful %1", _ret];
	false
};
