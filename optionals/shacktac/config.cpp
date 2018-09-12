// Original version by ShackTac Development Team - dslyecxi.com
#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
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
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
#include "defines.hpp"

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

class STUI_BlankDialog {
	idd = 999;
	movingEnable = 1;
	enableDisplay = 1;
	enableSimulation = 1;
};

class CfgInGameUI {

	class Cursor {
		select = "#(argb,1,1,1)color(0,0,0,0)";
		outArrow = "#(argb,1,1,1)color(0,0,0,0)";
		leader = "#(argb,1,1,1)color(0,0,0,0)";
		mission = "#(argb,1,1,1)color(0,0,0,0)";
		unitBleeding = "#(argb,1,1,1)color(0,0,0,0)";
		unitInjured = "#(argb,1,1,1)color(0,0,0,0)";
		unitHealer = "#(argb,1,1,1)color(0,0,0,0)";
		unitUnconscious = "#(argb,1,1,1)color(0,0,0,0)";
	};
};

class RscInGameUI {

	class RscStaminaBar {
		controls[] = {};
	};
};
