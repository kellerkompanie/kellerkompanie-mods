#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("saveCrate: persistency disabled, exiting!"); false};
if (EGVAR(persistency_settings,key) == "") exitWith{WARNING("saveCrate: persistency key not set, exiting!"); false};
if (EGVAR(persistency_settings,cratesEnabled) == 0) exitWith{WARNING("saveCrate: persistency for crates is disabled, exiting!"); false};

params ["_crate"];

private _crateID = _crate getVariable ["keko_persistency_crateID", -1];
private _crateClass = typeOf _crate;
private _cratePosition = getPos _crate;
private _crateOrientation = getDir _crate;

private _crateSerialization = _crate call FUNC(getContainerContent);
private _crateItems = _crateSerialization select 0;
private _crateMagazines = _crateSerialization select 1;
private _crateWeapons = _crateSerialization select 2;
private _crateContainers = _crateSerialization select 3;

TRACE_3("saveCrate", _crateID, _crateClass, _cratePosition);

if(_crateID == -1) then {
	// crate does not exist yet, create new and store CrateID
	private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:addCrate:%1:%2:%3:%4:%5:%6:%7:%8",
		EGVAR(persistency_settings,key),
		_crateClass,
		_cratePosition,
		_crateOrientation,
		_crateItems,
		_crateMagazines,
		_crateWeapons,
		_crateContainers]);
	TRACE_1("addCrate returns", _ret);

	if ((_ret select 0) == 1) then {
		_crateID = ((_ret select 1) select 0);
		TRACE_1("crate was created with", _crateID);
		_crate setVariable ["keko_persistency_crateID", _crateID];
		true
	} else {
		ERROR("creation of crate was unsucessful :(");
		false
	};


} else {
	// crate already exists, update information
	private _ret = "extDB3" callExtension format [ "1:keko_persistency:updateCrate:%1:%2:%3:%4:%5:%6:%7:%8:%9",
		EGVAR(persistency_settings,key),
		_crateClass,
		_cratePosition,
		_crateOrientation,
		_crateItems,
		_crateMagazines,
		_crateWeapons,
		_crateContainers,
		_crateID];

	TRACE_1("updateCrate returns", _ret);
	true
};
