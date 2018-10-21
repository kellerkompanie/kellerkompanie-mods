//
//
private ["_logic","_units","_activated","_frogsHints","_frogsMenu","_frogsBoarding","_frogsLOC","_subTravel","_aoSUBon","_aoSUB","_aoSUBintel","_subMarker"];


// Argument 0 is module logic
_logic = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this, 1, [], [[]]] call BIS_fnc_param;

// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this, 2, true, [true]] call BIS_fnc_param;




// ---------- FROGS Module Setup Player Options ---------------
// --------------------------------------------------------------
// --------------------------------------------------------------

// HINTS
_frogsHints = _logic getVariable "vqi_module_frogs_debughints";
missionNamespace setVariable ["VQI_FROGS_HINTS", _frogsHints];

// MENU OBJECT
_frogsMenu = _logic getVariable "vqi_module_frogs_mapobject";
missionNamespace setVariable ["VQI_FROGS_MAPOBJECT", _frogsMenu];

// BOARDING
_frogsBoarding = _logic getVariable "vqi_module_frogs_boarding";
missionNamespace setVariable ["VQI_FROGS_BOARDING", _frogsBoarding];

// LOC
//_frogsLOC = _logic getVariable "vqi_module_frogs_loc";
//missionNamespace setVariable ["VQI_FROGS_LOC", _frogsLOC];

// DIVEMATE
_frogsDB1 = _logic getVariable "vqi_module_frogs_db1watch";
missionNamespace setVariable ["VQI_FROGS_DB1WATCH", _frogsDB1];

// Travel Time
_subTravel = _logic getVariable "vqi_module_frogs_sub_traveltime";
missionNamespace setVariable ["VQI_FROGS_SUB_TravelTime", _subTravel ];

// AO: Subs
_aoSUB = _logic getVariable "vqi_module_frogs_ao_sub";
missionNamespace setVariable ["VQI_FROGS_AO_SUB_NUM", _aoSUB ];

// AO: Subs Intel
_aoSUBintel = _logic getVariable "vqi_module_frogs_ao_sub_intel";
missionNamespace setVariable ["VQI_FROGS_AO_SUB_INTEL", _aoSUBintel ];

// AO: Naval
_aoNAV = _logic getVariable "vqi_module_frogs_ao_nav";
missionNamespace setVariable ["VQI_FROGS_AO_NAV_NUM", _aoNAV ];

// AO: Naval Marker
_aoNAVcolor = _logic getVariable "vqi_module_frogs_ao_nav_color";
missionNamespace setVariable ["VQI_FROGS_AO_NAV_COLOR", _aoNAVcolor ];

// AO: Naval Intel
_aoNAVintel = _logic getVariable "vqi_module_frogs_ao_nav_intel";
missionNamespace setVariable ["VQI_FROGS_AO_NAV_INTEL", _aoNAVintel ];

// AO: Naval Side
_aoNAVside = _logic getVariable "vqi_module_frogs_ao_nav_side";
missionNamespace setVariable ["VQI_FROGS_AO_NAV_SIDE", _aoNAVside ];

// MARKER
_subMarker = _logic getVariable "vqi_module_frogs_tempmarker";
missionNamespace setVariable ["VQI_FROGS_MKR_DELETE", _subMarker];






sleep 5;
[] spawn VQI_fnc_FROGSinit;


//