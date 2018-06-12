
class CfgPatches {

	class STUI_Core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {
			"CBA_Main", 
			"Extended_EventHandlers", 
			"A3_UI_F", 
			"A3_Data_F", 
			"A3_UIFonts_F"
		};
		author = "ShackTac Development Team";
		authorUrl = "http://dslyecxi.com";
	};
};

class STUI_RscCanvasControl {
	idc = 0;
	x = "SafeZoneX";
	y = "SafeZoneY - 100";
	w = "SafeZoneW";
	h = "SafeZoneH";
	style = 0;
	type = 100;
	scaleMin = 0.000001;
	scaleMax = 1000;
	scaleDefault = 2;
	font = "TahomaB";
	sizeEx = 0.000000;
	maxSatelliteAlpha = 0.000000;
	colorBackground[] = {0, 0, 0, 0};
	colorLevels[] = {0, 0, 0, 0};
	colorSea[] = {0, 0, 0, 0};
	colorForest[] = {0, 0, 0, 0};
	colorRocks[] = {0, 0, 0, 0};
	colorCountlines[] = {0, 0, 0, 0};
	colorMainCountlines[] = {0, 0, 0, 0};
	colorCountlinesWater[] = {0, 0, 0, 0};
	colorMainCountlinesWater[] = {0, 0, 0, 0};
	colorPowerLines[] = {0, 0, 0, 0};
	colorRailWay[] = {0, 0, 0, 0};
	colorForestBorder[] = {0, 0, 0, 0};
	colorRocksBorder[] = {0, 0, 0, 0};
	colorNames[] = {0, 0, 0, 0};
	colorInactive[] = {0, 0, 0, 0};
	colorOutside[] = {0, 0, 0, 0};
	colorText[] = {0, 0, 0, 0};
	colorGrid[] = {0, 0, 0, 0};
	colorGridMap[] = {0, 0, 0, 0};
	colorTracks[] = {0, 0, 0, 0};
	colorTracksFill[] = {0, 0, 0, 0};
	colorRoads[] = {0, 0, 0, 0};
	colorRoadsFill[] = {0, 0, 0, 0};
	colorMainRoads[] = {0, 0, 0, 0};
	colorMainRoadsFill[] = {0, 0, 0, 0};
	ShowCountourInterval = 0;
	shadow = 0;
	text = "";
	alphaFadeStartScale = 0.000000;
	alphaFadeEndScale = 0.000000;
	fontLabel = "TahomaB";
	sizeExLabel = 0.000000;
	fontGrid = "TahomaB";
	sizeExGrid = 0.000000;
	fontUnits = "TahomaB";
	sizeExUnits = 0.000000;
	fontNames = "TahomaB";
	sizeExNames = 0.000000;
	fontInfo = "TahomaB";
	sizeExInfo = 0.000000;
	fontLevel = "TahomaB";
	sizeExLevel = 0.000000;
	stickX[] = {0.000000, {"Gamma", 0, 0.000000}};
	stickY[] = {0.000000, {"Gamma", 0, 0.000000}};
	ptsPerSquareSea = 0.010000;
	ptsPerSquareTxt = 0;
	ptsPerSquareCLn = 0;
	ptsPerSquareExp = 0;
	ptsPerSquareCost = 0;
	ptsPerSquareFor = 0;
	ptsPerSquareForEdge = 0;
	ptsPerSquareRoad = 0;
	ptsPerSquareObj = 0;

	class Task {
		icon = "";
		color[] = {0, 0, 0, 0};
		iconCreated = "";
		colorCreated[] = {0, 0, 0, 0};
		iconCanceled = "";
		colorCanceled[] = {0, 0, 0, 0};
		iconDone = "";
		colorDone[] = {0, 0, 0, 0};
		iconFailed = "";
		colorFailed[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class CustomMark {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Bunker {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Bush {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class BusStop {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Command {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Cross {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Fortress {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Fuelstation {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Fountain {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Hospital {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Chapel {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Church {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Lighthouse {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Quay {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Rock {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Ruin {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class SmallTree {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Stack {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Tree {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Tourism {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Transmitter {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class ViewTower {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Watertower {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Waypoint {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class WaypointCompleted {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class ActiveMarker {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class PowerSolar {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class PowerWave {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class PowerWind {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};

	class Shipwreck {
		icon = "";
		color[] = {0, 0, 0, 0};
		size = 0;
		importance = 0;
		coefMin = 0;
		coefMax = 0;
	};
};

class RscDisplayEmpty {
	/*extern*/ class controls;
};

class RscDisplayMission: RscDisplayEmpty {

	class controls: controls {

		class STUI_Canvas: STUI_RscCanvasControl {
			idc = 6465;
			onDraw = "_this call STUI_Canvas_OnLoad";
		};
	};
};

class Extended_PreInit_EventHandlers {
	STUI = "call compile preprocessFileLineNumbers '\stui_core\preinit.sqf'";
};

class Extended_PostInit_EventHandlers {
	STUI = "call STUI_Run_PostInits";
};

class CfgRemoteExec {

	class Functions {

		class STUI_Resend {
			allowedTargets = 1;
			jip = 0;
		};

		class STUI_GetOwnerID {
			allowedTargets = 2;
			jip = 0;
		};
	};
};

class STUI_BlankDialog {
	idd = 999;
	movingEnable = 1;
	enableDisplay = 1;
	enableSimulation = 1;
};

class CfgMods {
	/*extern*/ class Mod_Base;

	class STUI: Mod_Base {
		name = "ShackTac User Interface";
		picture = "\stui_core\logos\st_logo_ca.paa";
		logoSmall = "\stui_core\logos\st_logo_small_ca.paa";
		logo = "\stui_core\core\logos\st_logo_small_ca.paa";
		logoOver = "\stui_core\core\logos\st_logo_small_ca.paa";
		action = "http://dslyecxi.com/shacktac_wp/";
		actionName = "Website";
		tooltip = "ShackTac UI";
		tooltipOwned = "ShackTac User Interface";
		dlcColor[] = {1, 0.760000, 0, 1};
		overview = "ShackTac User Interface (STUI), contains enhancements to the UI for Arma 3.<br /><br />This modset includes the following elements:<br />* <a href='http://dslyecxi.com/shacktac-fireteam-hud-for-arma-3/'>ShackTac Fireteam HUD</a><br />* <a href='http://dslyecxi.com/shacktac-group-indicators/'>ShackTac Group Indicators</a><br />* <a href='http://dslyecxi.com/shacktac_wp/shacktac-mods/shacktac-name-tags/'>ShackTac Name Tags</a><br />* <a href='http://dslyecxi.com/shacktac_wp/shacktac-mods/shacktac-stamina-bar/'>ShackTac Stamina Bar</a><br />* <a href='http://dslyecxi.com/shacktac-map-autobrightness-mod/'>ShackTac Map Autobrightness</a><br />* <a href='http://dslyecxi.com/shacktac-interact-mod/'>ShackTac Interact</a>";
		hideName = 0;
		hidePicture = 0;
		author = "ShackTac Development Team";
		dir = "@stui";
	};
};
