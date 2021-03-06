#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		Handles waypoints for vehicles. Transport vehicles will recieved a different style of waypoints.

	Parameter(s):
		0: GROUP
		1: TRANSPORT VEHICLE?
		2: ARRAY OF VEHICLES

	Returns:
		NOTHING
*/

params ["_Group","_Transport","_VehFullArr"];

if !((waypointPosition [_Group,(currentWaypoint _Group)]) isEqualTo [0,0,0]) exitWith {};
if (count (_group call FUNC(waypointCheck)) > 0) exitWith {}; 

//If the vehicle has units to transport is should then find a secure location to drop the troops off!
private _Leader = leader _Group;
private _Units = units _Group;

if (_Transport) then {
	//Exit the function if the driver is NOT in the leaders group
	If !(driver (vehicle _leader) in _Units) exitWith {};
	if (GVAR(Debug)) then {
		[_Leader,"TRANSPORT VEHICLE"] call FUNC(DebugText);
	};
	
	//Let's find the nearest enemies and friendlies!	
	private _nearestEnemy = _leader call FUNC(ClstEmy);	
	private _nearestFriend = _nearestEnemy call FUNC(ClstEmy);
	private _DisembarkLocation1 = getPosWorld _nearestFriend;
	
	//First find a good location to disembark.
	private _FinalDisembarkLocation = [_DisembarkLocation1,25, [1, -1, 0.1, 0, 0, false, objNull]] call FUNC(isFlatEmpty);
	if (_FinalDisembarkLocation isEqualTo []) then {
		_FinalDisembarkLocation = getpos _nearestFriend;
	};

	private _waypoint0 = _Group addwaypoint [_FinalDisembarkLocation,0];	
	_waypoint0 setwaypointtype "TR UNLOAD";
	_waypoint0 setWaypointSpeed "FULL";
	_waypoint0 setWaypointSpeed "LIMITED";
	_Group setCurrentWaypoint [_Group,(_waypoint0 select 1)];
}
else {
	if (GVAR(Debug)) then {
		[_Leader,"VEHICLE FLANK MOVE"] call FUNC(DebugText);
	};
	[_Leader] spawn FUNC(FlankMove);
};