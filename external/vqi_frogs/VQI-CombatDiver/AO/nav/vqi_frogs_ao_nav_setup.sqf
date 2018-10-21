// Area-of-Operation:  NAVAL ASSETS
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_nav_setup.sqf"; };
sleep 1;



private ["_mapSize","_mapHalf","_mapCent","_aoCount","_mkrNAV","_rNum","_aoIntel","_aoSUB","_rShip","_mkrGRP","_mkrW","_mkrH",
		"_marker","_markerA","_markerB","_markerC","_markerD","_posXYZ","_posBIS","_aoPROB","_subType","_pSUB","_land","_depth"];

		
		
_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


// How many AO's on Map - Set or Scale
if (VQI_FROGS_AO_NAV_NUM >= 0) then { 
	_aoCount = VQI_FROGS_AO_NAV_NUM; 
} else { 
	VQI_FROGS_AO_NAV_NUM = (VQI_FROGS_AO_NAV_NUM * -1);	// convert to positive
	_aoCount = round (random (VQI_FROGS_AO_NAV_NUM)); 	// randomize upTo -X
};

// Marker Default
_mkrColor = "colorRed";
_txtForce = "Gunboat";


// Marker Color
if (VQI_FROGS_AO_NAV_COLOR == 0)  then { _mkrColor = "colorBlack"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 1)  then { _mkrColor = "colorGrey"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 2)  then { _mkrColor = "colorRed"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 3)  then { _mkrColor = "colorBrown"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 4)  then { _mkrColor = "colorOrange"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 5)  then { _mkrColor = "colorYellow"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 6)  then { _mkrColor = "colorKhaki"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 7)  then { _mkrColor = "colorGreen"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 8)  then { _mkrColor = "colorBlue"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 9)  then { _mkrColor = "colorPink"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 10) then { _mkrColor = "colorWhite"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 11) then { _mkrColor = "colorWEST"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 12) then { _mkrColor = "colorEAST"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 13) then { _mkrColor = "colorGUER"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 14) then { _mkrColor = "colorCIV"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 15) then { _mkrColor = "colorUNKNOWN"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 16) then { _mkrColor = "colorBLUFOR"; };	// dark blue
if (VQI_FROGS_AO_NAV_COLOR == 17) then { _mkrColor = "colorOPFOR"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 18) then { _mkrColor = "colorINDEPENDENT"; };	//
if (VQI_FROGS_AO_NAV_COLOR == 19) then { _mkrColor = "colorCivilian"; };//



// defaults
_mkrNAV = "o_naval";
_mkrGRP = "group_1";
_trgNAV = _mapCent;

_mkrW = 1.3; 
_mkrH = 1.3;

_fSize = 0;
_tSize = 1000;



// Readout Info
if (VQI_FROGS_HINTS == 1) then { hint format ["MapSize: %1 \n \n NAVAL \n AO -- %2",_mapSize,_aoCount]; sleep 5;};

hint "- INTEL REPORT -";
trgNAV = 1; // trg setup




// Loop
for "_i" from 1 to _aoCount do {


	// Intel - Dynamic  vs.  Static
	if (VQI_FROGS_AO_NAV_INTEL == 1) then { _aoIntel = round(random 100); } else { _aoIntel = 100; }; 	// 
	
	
	// Naval X
	_rNum = random 100;
	if ((_rNum > 0 )  && (_rNum < 60)) then { _fSize = ([1,1] call BIS_fnc_randomInt) * 1000; _tSize = 2000; }; 	// 60% - Naval Ops
	if ((_rNum > 60)  && (_rNum < 90)) then { _fSize = ([2,2] call BIS_fnc_randomInt) * 1000; _tSize = 2000; }; 	// 30% - Naval Ops
	if ((_rNum > 90)  && (_rNum < 99)) then { _fSize = ([3,3] call BIS_fnc_randomInt) * 1000; _tSize = 2000; }; 	// 10% - Naval Ops
	sleep 0.1;
	


	//find & move out to random 95% of map + 360*, random location
	_posXYZ = [_mapCent, (random(_mapHalf*0.95)), random 360] call BIS_fnc_relPos;
	sleep 0.1;
	
	// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
	_posBIS = [_posXYZ, 1, 5000, 30, 2, 0, 0] call BIS_fnc_findSafePos;
	sleep 0.1;
	
	
	
	// trigger set-up for AO
	if (random 100 < _aoIntel) then {
		_trgNAV = createTrigger ["EmptyDetector", _posBIS];		// type, location
		_trgNAV setTriggerArea [_tSize, _tSize, 0, false];		// x, y, angle, rectangle, Z
		_trgNAV setTriggerActivation ["ANY", "PRESENT", true];	// who, how, repeat on/off
		_trgNAV setTriggerTimeout [1, 2, 3, true];				// min, ave, max, interupt
		_trgNAV setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0)", 										//
								 format["[%1,%2] execVM ""vqi_frogs\VQI-CombatDiver\AO\nav\vqi_frogs_ao_nav_trigger.sqf""",_fSize,_posBIS],		//
								 ""];																								//
	} else {
		_trgNAV = _posBIS;
		if (VQI_FROGS_HINTS == 1) then { hint "Intel: nil"; };
	};
	sleep 1;
	

	
	
	// Primary Marker
	_nameAO = "markerNAV0" + str _i;
	_marker = createMarker [_nameAO,_trgNAV]; 	//
	_marker setMarkerType _mkrNAV; 				//
	_marker setMarkerColor _mkrColor;
	_marker setMarkerText format [" %1",_aoIntel];
	_marker setMarkerAlpha (_aoIntel / 100) - 0.2;
	sleep 0.1;
	
	
	// Marker Details
	if (_fSize == 1000) then {_mkrGRP = "group_1"; _txtForce = "SQUAD"; 	_mkrW = 1.2; _mkrH = 1.2; };
	if (_fSize == 2000) then {_mkrGRP = "group_2"; _txtForce = "SECTION"; 	_mkrW = 1.2; _mkrH = 1.2; };
	if (_fSize == 3000) then {_mkrGRP = "group_3"; _txtForce = "PLATOON"; 	_mkrW = 1.2; _mkrH = 1.2; };
	sleep 0.1;
	
	
	// Squad, Section, Platoon
	_nameAO1 = "markerNAV1" + str _i;
	_markerA = createMarker [_nameAO1,_trgNAV]; //
	_markerA setMarkerType _mkrGRP; //
	_markerA setMarkerColor "ColorBLACK";
	_markerA setMarkerSize [_mkrW,_mkrH];
	_markerA setMarkerAlpha (_aoIntel / 100);
	

	

hint (format ["AO INTEL REPORT \n NAVAL \n \n %1 \n Intel: %2",_txtForce,_aoIntel]+"%"); 

sleep 0.1;
};



sleep 1;
hint "- END OF REPORT -";

sleep 1;
execVM "vqi_frogs\VQI-CombatDiver\AO\nav\vqi_frogs_ao_nav_mkrs_data.sqf";













sleep 5;
ao_nav_done = true;

sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "ao_nav_setup.sqf -END-"; };

///////////////////
/* NOTES:



*/