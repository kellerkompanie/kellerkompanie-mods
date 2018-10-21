//
//
hint "2.sqf";
sleep 1;


_locPING = _this select 0;
sleep 2;



_mkrP = createMarker["mkrP", _locPING];
"mkrP" setMarkerShape "ICON";
"mkrP" setMarkerType "mil_dot";
"mkrP" setMarkerColor "ColorOPFOR";
"mkrP" setMarkerText " HMS Proteus";
"mkrP" setMarkerAlpha 0;



// Add MENU - Sub Options
// 1. Wait...
// 2. Stealth/Move
// 3. Deploy
//
// X. SONAR?









sleep 1;
hint "2.sqf -END-";