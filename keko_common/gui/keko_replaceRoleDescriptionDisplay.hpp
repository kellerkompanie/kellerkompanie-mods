class keko_replaceRoleDescriptionDisplay
{
	idd = 90000;
	movingEnable = true;
	class Controls
	{
		class Background: keko_IGUIBack
		{
			x = 0.395 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.252 * safezoneH;
		};
		class Header: keko_RscText
		{
			text = "Find and replace in role description";
			x = 0.395 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class RadiusText: keko_RscText
		{
			text = "Find:";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RadiusValue: keko_RscEdit
		{
			idc = 1000;
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['keko_lastReplaceFind',''])";
		};
		class CoverageText: keko_RscText
		{
			text = "Replace with:";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.374 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class CoverageValue: keko_RscEdit
		{
			idc = 1100;
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['keko_lastReplaceReplace',''])";
		};
		class Close: keko_RscButton
		{
			text = "Close";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = "(findDisplay 90000) closeDisplay 0";
		};
		class Confirm: keko_RscButton
		{
			text = "OK";
			x = 0.52625 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call keko_common_fnc_replaceRoleDescription";
		};
	};
};