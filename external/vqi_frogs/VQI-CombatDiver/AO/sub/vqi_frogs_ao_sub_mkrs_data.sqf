// Store X Intel Data
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_sub_mkrs_data.sqf"; };
sleep 1;


// Function: Marker Data
VQI_fnc_markerData = {
	[
		_this,
		markerText _this,
		markerpos _this,
		mapGridPosition markerPos _this,
		markerDir _this,
		markerSize _this,
		markerType _this,
		markerShape _this,
		markerBrush _this,
		markerColor _this,
		markerAlpha _this		// select 10
	]
};
sleep 1;





// Store all Markers
aoSUBmkrs = allMapMarkers;
aoSUBdata = [];
{ aoSUBdata pushBack ( _x call VQI_fnc_markerData ); } forEach aoSUBmkrs;
sleep 1;


// Set Alpha to 0
{ _x setMarkerAlpha 0 } forEach aoSUBmkrs;


publicVariable "aoSUBmkrs";
publicVariable "aoSUBdata";
publicVariable "VQI_fnc_markerData";



sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "ao_sub_mkrs_data.sqf -END-"; };