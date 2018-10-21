// Display X Intel Data
//
private ["_mkrAlpha","_mkrCount","_alpha","_aData","_mData"];

//openMap true;
hint "- INTEL REPORT - \n \n NAVAL";

// Grab Alpha
_mkrAlpha = [];
{ _mkrAlpha set [count _mkrAlpha,[_x select 10]]; } forEach aoNAVdata;
if (VQI_FROGS_HINTS == 1) then { hint format ["Alpha Data: %1",_mkrAlpha]; };
sleep 1;


// Total Variables in Array
_mkrCount = (count _mkrAlpha) -1;
if (VQI_FROGS_HINTS == 1) then { hint format ["COUNT: %1",_mkrCount]; };
sleep 1;


// Set Marker Alpha to Original
for "_i" from 0 to _mkrCount do {

	_alpha = _mkrAlpha select _i;	// brackets
	_aData = _alpha select 0;		// number
	//hint format ["%1",_aData];
	
	
	_mData = aoNAVdata select _i;
	if (_aData > 0) then {
		(_mData select 0) setMarkerAlpha _aData;
	};
};

sleep 300;

// Re-Set Marker Alpha to ZERO
for "_i" from 0 to _mkrCount do {

	_alpha = _mkrAlpha select _i;	// brackets
	_aData = _alpha select 0;		// number
	//hint format ["%1",_aData];
	
	
	_mData = aoNAVdata select _i;
	if (_aData > 0) then {
		(_mData select 0) setMarkerAlpha 0;
	};
};


//sleep 3;
//{ _x setMarkerAlpha 0 } forEach allMapMarkers;