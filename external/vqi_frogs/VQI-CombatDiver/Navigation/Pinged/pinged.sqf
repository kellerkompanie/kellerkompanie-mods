//
//
//hint "2.sqf";
//sleep 1;

hint "- ALERT ALERT ALERT -";


_PING = _this select 0;



_mkrP1 = createMarker["mkrP1", _PING];
"mkrP1" setMarkerShape "ELLIPSE";			//
"mkrP1" setMarkerBrush "Border";
"mkrP1" setMarkerColor "ColorOPFOR";
"mkrP1" setMarkerSize [1000,1000];
"mkrP1" setMarkerAlpha 0.5;

_mkrP2 = createMarker["mkrP2", _PING];
"mkrP2" setMarkerShape "ELLIPSE";			//
"mkrP2" setMarkerBrush "Border";
"mkrP2" setMarkerColor "ColorOPFOR";
"mkrP2" setMarkerSize [500,500];
"mkrP2" setMarkerAlpha 0.5;




[HMSProteusLOC,"VQI_Sound_PingedByEnemy"] call CBA_fnc_globalSay3d;

subWait1hr = true;
LOCLAPTOP2 removeAction 1;
sleep 2;


systemChat "ENEMY SUB!!!"; sleep 1;
systemChat "Shut her down! Run Silent.........."; sleep 15;

systemChat "If we get Pinged again, they'll launch Torpedos."; sleep 5;

systemChat "Transport of these Frogmen still have priority."; sleep 2;
systemChat "The Mission MUST continue, but NOT at the risk of this billion-dollar machine."; sleep 5;

systemChat "I have Orders you still have Navigational precedence."; sleep 2;
systemChat "Sir, you have a say... What do you want to do?";





removeAllActions LOCLAPTOP2;

[[LOCLAPTOP2, ["-----------------", "hint ''; [LOCLAPTOP2, 0]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request to Captain - Stealth Mode - Wait 1 hr...", "execVM 'vqi_frogs\VQI-CombatDiver\Navigation\Pinged\pinged_wait.sqf'; [LOCLAPTOP2, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request to Captain - Stealth Mode - SLOW SAIL", "execVM 'vqi_frogs\VQI-CombatDiver\Navigation\Stealth\stealth_wpA.sqf'; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request to Captain - Full Speed Ahead - MOVE!", "hint 'Request: DENIED'; [LOCLAPTOP2, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request to Captain - Deployment - Ready the LOC", "execVM 'vqi_frogs\VQI-CombatDiver\Navigation\Pinged\pinged_deploy.sqf'; [LOCLAPTOP2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-----------------", "hint ''; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request SONAR ROOM - Passive SONAR Report", "execVM 'vqi_frogs\VQI-CombatDiver\SONAR\sonar_passive.sqf'; [LOCLAPTOP2, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request SONAR ROOM - Active SONAR Ping!", "execVM 'vqi_frogs\VQI-CombatDiver\SONAR\sonar_active.sqf'; [LOCLAPTOP2, 7]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-----------------", "hint ''; [LOCLAPTOP2, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: SUBMARINES", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Sub\vqi_frogs_ao_sub_mkrs_intel.sqf'; [LOCLAPTOP2, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: NAVAL OPs", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Nav\vqi_frogs_ao_nav_mkrs_intel.sqf'; [LOCLAPTOP2, 10]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: WATER MINES", "execVM 'vqi_fuse\VQI-EOD\AO\watermines\vqi_fuse_ao_watermine_mkrs_intel.sqf'; [LOCLAPTOP2, 11]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["INTEL - AO: SURF MINES", "execVM 'vqi_fuse\VQI-EOD\AO\surfzones\vqi_fuse_ao_surfzone_mkrs_intel.sqf'; [LOCLAPTOP2, 12]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 13]"]], "addAction", true, true] call BIS_fnc_MP;





sleep 1;
//hint "2.sqf -END-";