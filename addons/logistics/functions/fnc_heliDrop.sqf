#include "script_component.hpp"

if !(isServer) exitWith {_this remoteExecCall [QFUNC(heliDrop), 2]};

if(GVAR(virtualHeliAmount) != -1 && GVAR(virtualHeliAmount) <= 0) exitWith {
	"[KEKO] (logistics) You have used all of your helos already, no more available!" remoteExec ["systemChat", 0];
};

//[_targetPos select 0, _targetPos select 1, 300]
private _targetPos = [];
private _crate = "";
if(GVAR(customLogistics) == 2) then {
	params ["_position", "_crate_name"];
	_targetPos = _position;
	_targetPos set [2, 100];
	_crate = [GVAR(heliEntryPoint), _crate_name] call FUNC(spawnCrate);
}
else
{
	params ["_position", "_faction", "_crateCfg"];
	_targetPos = _position;
	_targetPos set [2, 100];
	_crate = [GVAR(heliEntryPoint), _faction, _crateCfg] call FUNC(spawnCrate);
};


private _helicopterCfgClass = "B_Heli_Transport_03_unarmed_F";
if (EGVAR(loadout,loadoutFaction) != "kekoCustom") then {
	private _factionCfg = configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction);
	_helicopterCfgClass = getText (_factionCfg >> "logisticsHelicopter");
};

private _spawnPos = GVAR(heliEntryPoint);
private _spawnedArr = [_spawnPos, 0, _helicopterCfgClass, civilian] call BIS_fnc_spawnVehicle;
_spawnedArr params ["_vehicle", "", "_group"];
_vehicle engineOn true;

private _windSpeed = vectorMagnitude wind;
_windSpeed = round(_windSpeed * 10) / 10;
private _windDir = floor windDir;
if (windDir >= 180) then {
	_windDir = _windDir - 180;
} else {
	_windDir = _windDir + 180;
};
private _windVec = vectorNormalized [sin _windDir, cos _windDir, 0];
_targetPos = _targetPos vectorAdd (_windVec vectorMultiply (10 * _windSpeed));

private _normVec = (vectorNormalized (_targetPos vectorDiff _spawnPos));
_vehicle setVectorDir _normVec;
_targetPos = _targetPos vectorAdd (_normVec vectorMultiply 100);

createVehicleCrew _vehicle;

if(GVAR(virtualHeliAmount) != -1 && GVAR(virtualHeliAmount) > 0) then {
		GVAR(virtualHeliAmount) = GVAR(virtualHeliAmount) - 1;
		(format ["[KEKO] (logistics) Number of remaining helos: %1", GVAR(virtualHeliAmount)])  remoteExec ["systemChat", 0];
};

//_crate = [[0, 0, 100], 'kekoFactionNATO', 'kekoInfantryCrate'] call FUNC(spawnCrate);
{
	_x addCuratorEditableObjects [[_crate], false];
} forEach allCurators;

[_crate, _vehicle, true] call FUNC(aceForceLoadItem);

_vehicle allowDamage false;
_vehicle flyInHeight 100;

{
	_x setVariable ["acex_headless_blacklist", true];
	_x allowDamage false;
} forEach crew _vehicle;

_group = group (crew _vehicle select 0);
_group setBehaviour "CARELESS";
_group setCombatMode "BLUE";
_group setSpeedMode "FULL";
_group setVariable ["acex_headless_blacklist", true];

private _pilot = driver _vehicle;
_pilot setSkill 1;
{
	_pilot disableAI _x
} forEach ["TARGET", "AUTOTARGET","AUTOCOMBAT"];
_group allowFleeing 0;
_group deleteGroupWhenEmpty true;


private _dropLocationWaypoint = _group addWaypoint [_targetPos, 0];
_dropLocationWaypoint setWaypointCompletionRadius 10;
_dropLocationWaypoint setWaypointStatements ["true", "private _group = group this; private _vehicle = vehicle this; private _crates = _vehicle getVariable 'ace_cargo_loaded'; { [_x, _vehicle] call ace_cargo_fnc_paradropItem } forEach _crates; private _returnLocationWaypoint = _group addWaypoint [keko_logistics_heliExitPoint, 0]; _returnLocationWaypoint setWaypointStatements ['true', 'private _group = group this; private _vehicle = vehicle this; {deleteVehicle _x} forEach crew _vehicle + [_vehicle]; deleteGroup _group;'];"];
