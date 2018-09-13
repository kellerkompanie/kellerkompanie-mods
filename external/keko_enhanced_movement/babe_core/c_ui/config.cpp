////////////////////////////////////////////////////////////////////
//DeRap: babe_core\c_ui\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:46 2018 : 'file' last modified on Thu May 10 19:35:41 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class babe_core_UI
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F","A3_Sounds_F","A3_Data_F"};
	};
};
class ScrollBar;
class RscBackground;
class RscListNBox;
class BABE_core_List: RscListNBox
{
	x = "0.25 * safezoneW + safezoneX";
	y = "0.875 * safezoneH + safezoneY";
	w = "safezoneW/3.5";
	h = "safezoneH/4";
	shadow = 0;
	type = 102;
	sizeEx = "safezoneW*0.0175";
	font = "PuristaMedium";
	style = 0;
	color[] = {1,1,1,1};
	colorBorder[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {1,1,1,1};
	colorSelect[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorSelect2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorSelectBackground[] = {1,1,1,1};
	colorSelectBackground2[] = {1,1,1,1};
	colorBackgroundActive[] = {1,1,1,1};
	colorBackground[] = {1,1,1,1};
	period = 0;
	rowHeight = 0.05;
	columns[] = {0.025,0.5,0.5};
	tooltip = "hold shift to click and drag this menu";
	class ListScrollBar: ScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	onMouseButtonDblClick = "_this call (uiNameSpace getVariable 'babe_core_fnc_settings_dbc')";
};
