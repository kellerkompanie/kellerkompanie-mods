#include "script_component.hpp"

params ["_position","_type","_id","_name"];



private _markerName = _id;

createMarker [_markerName, _position];
_markerName setMarkerSize [0.7, 0.7];
_markerName setMarkerColor "colorIndependent";
_markerName setMarkerText _name;


switch (_type) do {
    case "AIRPORT": {
    	_markerName setMarkerType "keko_redneck_marker_airport";
    };
    case "DOLLAR": {
    	_markerName setMarkerType "keko_redneck_marker_dollar";
    };
    case "FLAG": {
    	_markerName setMarkerType "keko_redneck_marker_flag";
    };
    case "FUEL": {
    	_markerName setMarkerType "keko_redneck_marker_fuel";
    };
    case "RADIOTOWER": {
    	_markerName setMarkerType "keko_redneck_marker_radiotower";
    };
    case "RESEARCH": {
    	_markerName setMarkerType "keko_redneck_marker_research";
    };
    default {
    };
};




// TODO create flag
	// Flag_Blue_F
	// Flag_Green_F
	// Flag_Red_F
// TODO add to global array of points
// TODO load current state from database or add new entry for point
