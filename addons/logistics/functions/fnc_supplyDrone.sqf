#include "script_component.hpp"

if !(isServer) exitWith {_this remoteExec [QFUNC(supplyDrone), 2]};

private _spawnPos = [];
private _targetPos = [];
private _droneInventory = [];

if(GVAR(customLogistics) == 2) then {
	params ["_spawn", "_target", "_crate_name"];

	_spawnPos = _spawn;
	_targetPos = _target;

	private _descapedString = [_crate_name, "%20", " "] call EFUNC(common,replaceString);

	{
		private _entryName = _x select 0;

		if(_entryName isEqualTo _descapedString) then {
			_droneInventory = _x select 2;
		};
	} forEach GVAR(customCrates) select 0;
}
else {
	params ["_spawn", "_target", "_faction", "_crate"];

	_spawnPos = _spawn;
	_targetPos = _target;

	private _crateConfig = configFile >> "kekoFaction" >> _faction >> _crate;
	_droneInventory = getArray (_crateConfig >> "inventory");
};

private _uav = createVehicle ["B_UAV_06_F", _spawnPos, [], 0,""];
createVehicleCrew _uav;

private _uavCrew = crew _uav;
private _uavGroup = group (crew _uav select 0);
_uavGroup deleteGroupWhenEmpty true;
private _civGroup = createGroup civilian;
_uavCrew joinSilent _civGroup;

_uav allowDamage false;
_uav setVariable ["acex_headless_blacklist", true];

[_uav] call FUNC(clearCargo);
[_uav, _droneInventory] call FUNC(fillCrate);

{
	_x setVariable ["acex_headless_blacklist", true];
	_x allowDamage false;
} forEach crew _uav;

private _group = group (crew _uav select 0);
_group setBehaviour "CARELESS";
_group setCombatMode "BLUE";
_group setSpeedMode "FULL";
_group setVariable ["acex_headless_blacklist", true];

private _pilot = driver _uav;
_pilot setSkill 1;
{
	_pilot disableAI _x
} forEach ["TARGET", "AUTOTARGET","AUTOCOMBAT"];
_group allowFleeing 0;
_group deleteGroupWhenEmpty true;

_uav setVariable [QGVAR(UAVHomeBase), _spawnPos];
_uav flyInHeight 30;

private _actionFlyHome = [QGVAR(UAVFlyHome), "Return to Base", "",
	{
		private _dest = _target getVariable QGVAR(UAVHomeBase);
		_target flyInHeight 30;
		private _homeWP = (group ((crew _target) select 0)) addWaypoint [_dest, 0];
		_homeWP setWaypointStatements ["true", "private _vehicle = vehicle this; _vehicle remoteExec ['deleteVehicle', _vehicle];"];
	},
	{true}] call ace_interact_menu_fnc_createAction;

[_uav, 0, ["ACE_MainActions"], _actionFlyHome] remoteExec ["ace_interact_menu_fnc_addActionToObject", [0, -2] select isDedicated];

//_uav move _targetPos;
//[{unitReady _this}, {_this land "LAND";}, _uav] call CBA_fnc_waitUntilAndExecute;

private _dropLocationWaypoint = _group addWaypoint [_targetPos, 0];
_dropLocationWaypoint setWaypointCompletionRadius 5;
_dropLocationWaypoint setWaypointStatements ["true", "private _vehicle = vehicle this; _vehicle flyInHeight 0;"];
