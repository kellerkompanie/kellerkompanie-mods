/*
	Code written by Haz
*/

class rsc_downloadingData
{
	idd = 97531;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable [""disp_downloadingData"", (_this select 0)]; [] spawn client_fnc_downloadData;";
	onUnLoad = "uiNamespace setVariable [""disp_downloadingData"", nil];";
	duration = 1e011;
	// fadeIn = 0;
	// fadeOut = 0;
	class controls
	{
		class download : RscControlsGroupNoScrollbars
		{
			idc = 100;
			x = "safeZoneX + 0 * (((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			y = "8.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15.4 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class downloadContent : RscText
				{
					idc = 100;
					x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "15.4 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.30000001, 0.30000001, 0.30000001, 0.69999999};
				};
				class downloadTitle : RscText
				{
					idc = 200;
					x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8.8 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.15 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "";
					shadow = 0;
					colorBackground[] = {0, 0, 0, 0.69999999};
				};
				class multiplier : RscText
				{
					idc = 300;
					x = "0 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "";
					colorText[] = {1, 1, 1, 0.5};
					colorBackground[] = {0, 0, 0, 0.69999999};
				};
				class progressBar : RscProgress
				{
					idc = 400;
					x = "2.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "11.1339 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.775 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.80000001, 0.5, 0, 0.69999999};
				};
				class downloadSpeed : RscText
				{
					idc = 500;
					x = "3.4 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "";
					colorText[] = {1, 1, 1, 0.69999999};
				};
				class rangeBackground : RscText
				{
					idc = 600;
					x = "13.2 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.2 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0.5};
				};
				class Range : RscPictureKeepAspect
				{
					idc = 700;
					x = "13.2 * (((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.2 * (((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "";
				};
			};
		};
	};
};