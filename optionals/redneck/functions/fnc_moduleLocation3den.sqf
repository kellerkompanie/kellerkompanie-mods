#include "script_component.hpp"

params["_logic"];

GVAR(Locations) pushBack _logic;

if !(isServer) exitWith {};

//INFO("moduleLocation3den");

private _loc_id   	= format ['%1',_logic];
private _loc_name 	= _logic getVariable ["loc_name", ""];
private _loc_type 	= _logic getVariable ["loc_type", 0];
private _loc_radius = _logic getVariable ["loc_radius", 0];
private _loc_side 	= _logic getVariable ["loc_side", 0];

if (_loc_side == 0) then {
	_loc_side = 'BLACKORDER';
} else {
	_loc_side = 'REDNECK';
};

//INFO_1("moduleLocation3den _loc_id=%1",_loc_id);

private _markerType = "";
private _markerColor = "Default";
private _markerScale = 1.0;
private _markerName = _loc_name;
private _markerPos = getPos _logic;
private _markerAreaSize = parseNumber _loc_radius;

if (_loc_id in GVAR(LocationMapKeys)) then {
	private _idx = GVAR(LocationMapKeys) find _loc_id;
	_loc_side = GVAR(LocationMapValues) select _idx;
} else {
	GVAR(LocationMapKeys) pushBack _loc_id;
	GVAR(LocationMapValues) pushBack 'BLACKORDER';
	[_loc_id, 'BLACKORDER'] call FUNC(dbUpdateLocation);
};

switch (_loc_type) do {
		case 0: {
			/* Flag */
			_markerType = QGVAR(marker_flag);
			_markerScale = 0.9;
		};
		case 1: {
			/* Checkpoint */
			_markerType = QGVAR(marker_checkpoint);
			_markerScale = 0.6;

			GVAR(Checkpoints) pushBack _logic;
		};
		case 2: {
			/* Hotel */
			_markerType = QGVAR(marker_hotel);
			_markerScale = 0.6;
		};
		case 3: {
			/* Prison */
			_markerType = QGVAR(marker_prison);
			_markerScale = 0.8;
		};
		case 4: {
			/* Research Facility */
			_markerType = QGVAR(marker_research);
			_markerScale = 0.9;
		};
		case 5: {
			/* Industrial Complex */
			_markerType = QGVAR(marker_industry);
			_markerScale = 0.9;
		};
		case 6: {
			/* Farm */
			_markerType = QGVAR(marker_farm);
			_markerScale = 0.6;
		};
		case 7: {
			/* Radio Tower */
			_markerType = QGVAR(marker_radiotower);
			_markerScale = 0.7;
		};
		case 8: {
			/* Power Plant */
			_markerType = QGVAR(marker_powerplant);
			_markerScale = 0.7;
		};
		case 9: {
			/* Fuel Station */
			_markerType = QGVAR(marker_fuelstation);
			_markerScale = 0.7;
		};
		case 10: {
			/* Outpost */
			_markerType = QGVAR(marker_outpost);
			_markerScale = 0.8;
		};
		case 11: {
			/* HQ */
			_markerType = QGVAR(marker_hq);
			_markerScale = 0.9;
		};
		case 12: {
			/* Airport */
			_markerType = QGVAR(marker_airport);
			_markerScale = 0.8;
		};
		case 13: {
			/* Hospital */
			_markerType = QGVAR(marker_hospital);
			_markerScale = 0.7;
		};
};

//INFO_1("_loc_side %1", _loc_side);

private _flagClass = "keko_redneck_flag";
if(_loc_side == 'BLACKORDER') then {
	_flagClass = "blackorder_flag_F";
};
private _flagObject = createVehicle [_flagClass, position _logic, [], 0, "CAN_COLLIDE"];

if(_loc_side == 'BLACKORDER') then {
	private _action = ["CaptureLocation","Capture","",{_this call FUNC(captureLocation);},{true},{},[_loc_id,_loc_name,_loc_type,_loc_radius]] call ace_interact_menu_fnc_createAction;
	[_flagObject, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

	_markerColor = "colorOPFOR";
} else {
	_markerColor = "colorBLUFOR";
};

if(_loc_type == 8) then {
	if(_loc_side == 'REDNECK') then {
		GVAR(PowerPlants) = GVAR(PowerPlants) + 1;
	};
};

private _areaMarkerName = _loc_id + "_area";
createMarker [_areaMarkerName, _markerPos];
_areaMarkerName setMarkerSize [_markerAreaSize, _markerAreaSize];
_areaMarkerName setMarkerColor _markerColor;
_areaMarkerName setMarkerShape "ELLIPSE";
_areaMarkerName setMarkerAlpha 0.7;

private _markerName = _loc_id;
createMarker [_markerName, _markerPos];
_markerName setMarkerType _markerType;
_markerName setMarkerSize [_markerScale, _markerScale];
_markerName setMarkerColor _markerColor;
_markerName setMarkerText _loc_name;
_markerName setMarkerAlpha 0.7;
