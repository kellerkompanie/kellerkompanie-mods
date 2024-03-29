#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		Function for defining AI who are in artillery pieces.

	Parameter(s):
		0: OBJECT - Unit to check if it is in an artillery piece.

	Returns:
		NOTHING
	
	Note:
		Deprecated in favour of Rydigiers "Fire for Effect: The God Of War"
*/

_veh = (vehicle _this);
if (_veh in GVAR(ArtilleryArray)) exitWith {};

//Get the vehicles class name.
private _class = typeOf _veh;
if (isNil ("_class")) exitWith {};

//Figure out if it is defined as artillery
private _artyScan = getNumber(configfile/"CfgVehicles"/_class/"artilleryScanner");

//Exit the script if it is not defined as artillery
if (isNil "_artyScan") exitWith {
	//Check if unit somehow is in the keko_vcomai_ArtilleryArray and remove them.  This can happen to units who were inside artillery pieces but ejected or moved out due to a divine intervention.
	if (_veh in GVAR(ArtilleryArray)) then {
		private _t = GVAR(ArtilleryArray) findIf {_veh isEqualTo _x};
		GVAR(ArtilleryArray) deleteAt _t;
	};
};

if (_artyScan isEqualTo 1) then {
	GVAR(ArtilleryArray) pushBack _veh;
};