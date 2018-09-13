class GVAR(replaceRoleDescriptionDisplay)
{
	idd = 90000;
	movingEnable = true;
	class Controls
	{
		class Background: GVAR(IGUIBack)
		{
			x = 0.395 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.252 * safezoneH;
		};
		class Header: GVAR(RscText)
		{
			text = "Find and replace in role description";
			x = 0.395 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class RadiusText: GVAR(RscText)
		{
			text = "Find:";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RadiusValue: GVAR(RscEdit)
		{
			idc = 1000;
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = QUOTE((_this select 0) ctrlSetText (profileNamespace getVariable [QQGVAR(lastReplaceFind),'']));
		};
		class CoverageText: GVAR(RscText)
		{
			text = "Replace with:";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.374 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class CoverageValue: GVAR(RscEdit)
		{
			idc = 1100;
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.18375 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = QUOTE((_this select 0) ctrlSetText (profileNamespace getVariable [QQGVAR(lastReplaceReplace),'']));
		};
		class Close: GVAR(RscButton)
		{
			text = "Close";
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = "(findDisplay 90000) closeDisplay 0";
		};
		class Confirm: GVAR(RscButton)
		{
			text = "OK";
			x = 0.52625 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = QUOTE(call FUNC(replaceRoleDescription));
		};
	};
};