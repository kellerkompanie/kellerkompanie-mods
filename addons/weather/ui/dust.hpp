class dust_menu{
	idd = 1000;
	movingEnable = 1;
	onLoad = QUOTE([] spawn FUNC(dust_menuOnload));
	class Controls
	{
		class c_desert: RscCombo
		{
			idc = 2100;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class c_wall: RscCombo
		{
			idc = 2101;
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class c_objects: RscCombo
		{
			idc = 2102;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class c_lethWall: RscCombo
		{
			idc = 2103;
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class s_direction: RscSlider
		{
			idc = 1900;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = QUOTE(sliderNr = 0; [] spawn FUNC(dust_setSliderValue); false);
		};
		class s_duration: RscSlider
		{
			idc = 1901;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = QUOTE(sliderNr = 1; [] spawn FUNC(dust_setSliderValue); false);
		};
		class s_delay: RscSlider
		{
			idc = 1902;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = QUOTE(sliderNr = 2; [] spawn FUNC(dust_setSliderValue); false);
		};
		class s_b_intensity: RscSlider
		{
			idc = 1903;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = QUOTE(sliderNr = 3; [] spawn FUNC(dust_setSliderValue); false);
		};
		class s_d_intensity: RscSlider
		{
			idc = 1904;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			onSliderPosChanged = QUOTE(sliderNr = 4; [] spawn FUNC(dust_setSliderValue); false);
		};
		class b_close
		{
			idc = 1600;
			type = CT_BUTTON;
			style = 14;
			default = false;
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_BOLD;
			colorBackground[] = {1,1,1,1}; // Fill color
			colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {0.15,0.25,0.55,1}; // Text color
			colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.044 * safezoneH;
			borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
			colorBorder[] = {1,1,1,1}; // Left border color
			colorShadow[] = {0,0,0,0}; // Background frame color
			offsetX = 0.0075; // Horizontal background frame offset
			offsetY = 0.01; // Vertical background frame offset
			offsetPressedX = 0.0075; // Horizontal background offset when pressed
			offsetPressedY = 0.01; // Horizontal background offset when pressed
			text = "Close";
			tooltip = "Abort / close the Dust Storm Spawn Menu";
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
			action = "closeDialog 0;";
		};
		class b_confirm
		{
			idc = 1601;
			type = CT_BUTTON;
			style = 14;
			default = false;
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_BOLD;
			colorBackground[] = {1,1,1,1}; // Fill color
			colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {0.15,0.25,0.55,1}; // Text color
			colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.044 * safezoneH;
			borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
			colorBorder[] = {1,1,1,1}; // Left border color
			colorShadow[] = {0,0,0,0}; // Background frame color
			offsetX = 0.0075; // Horizontal background frame offset
			offsetY = 0.01; // Vertical background frame offset
			offsetPressedX = 0.0075; // Horizontal background offset when pressed
			offsetPressedY = 0.01; // Horizontal background offset when pressed
			text = "Confirm";
			tooltip = "Confirm the settings and initialize dust storm";
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
			action = QUOTE([] spawn FUNC(dust_storm_init); false);
		};
		class b_abort
		{
			idc = 1602;
			type = CT_BUTTON;
			style = 14;
			default = true;
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_BOLD;
			colorBackground[] = {1,1,1,1}; // Fill color
			colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {0.15,0.25,0.55,1}; // Text color
			colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.095 * safezoneW;
			h = 0.044 * safezoneH;
			borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
			colorBorder[] = {1,1,1,1}; // Left border color
			colorShadow[] = {0,0,0,0}; // Background frame color
			offsetX = 0.0075; // Horizontal background frame offset
			offsetY = 0.01; // Vertical background frame offset
			offsetPressedX = 0.0075; // Horizontal background offset when pressed
			offsetPressedY = 0.01; // Horizontal background offset when pressed
			text = "Terminate dust storm";
			tooltip = "Terminate currently running dust storm";
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
			action = QUOTE([] spawn FUNC(dust_abortStorm); false);
		};
	};
	class controlsBackground
	{
		class background: RscPicture
		{
			idc = 1000;
			text = QPATHTOF(ui\tablet.paa);
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0};
			x = 0.145625 * safezoneW + safezoneX;
			y = 0.14 * safezoneH + safezoneY;
			w = 0.675 * 1.05 * safezoneW;
			h = 0.9 * 0.8 * 1.05 * safezoneH;
			font = "EtelkaMonospacePro";
		};
		class t_header_bg: RscText
		{
			idc = 1002;
			colorBackground[] = {1,1,1,1};
			x = 0.417499 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class t_header: RscText
		{
			idc = 1001;
			font = GUI_FONT_BOLD;
			colorBackground[] = {0.059,0.098,0.216,1};
			sizeEx = "0.03/ (getResolution select 5)";
			text = "Dust Storm Spawn Menu";
			x = 0.422657 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_desert: RscText
		{
			idc = 1003;
			font = GUI_FONT_BOLD;
			text = "Vegetation:";
			tooltip = "Depending on your settings either dry or green shrubs will fly around";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_wall: RscText
		{
			idc = 1004;
			font = GUI_FONT_BOLD;
			text = "Dust wall:";
			tooltip = "If enabled wall of dust is created, disable it if mission is too laggy with this option";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_objects: RscText
		{
			idc = 1005;
			font = GUI_FONT_BOLD;
			text = "Effect on objects:";
			tooltip = "If enabled occasionally a random object near playable units will be thrown in the air";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_lethWall: RscText
		{
			idc = 1006;
			font = GUI_FONT_BOLD;
			text = "Lethal dust wall:";
			tooltip = "If enabled the wall of dust becomes destructive, it may generate severe frame drops so use it with care!";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_direction: RscText
		{
			idc = 1007;
			font = GUI_FONT_BOLD;
			text = "Dust storm direction:";
			tooltip = "From 1 to 360, direction towards the wind blows expressed in compass degrees.";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_duration: RscText
		{
			idc = 1008;
			font = GUI_FONT_BOLD;
			text = "Dust storm duration:";
			tooltip = "Duration how long the dust storm will last expressed in minutes.";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_delay: RscText
		{
			idc = 1009;
			font = GUI_FONT_BOLD;
			text = "Ambient sound delay:";
			tooltip = "Maximum delay in minutes between random ambient sounds. Minimum delay is set to one minute.";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_b_intensity: RscText
		{
			idc = 1010;
			font = GUI_FONT_BOLD;
			text = "Amount of shrubs:";
			tooltip = "How many shrubs should fly around? Higher percentage results in more shrubs but less frames.";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_s_direction: RscText
		{
			idc = 19000;
			font = GUI_FONT_BOLD;
			text = "360°";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class t_s_duration: RscText
		{
			idc = 19001;
			font = GUI_FONT_BOLD;
			text = "5 min";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class t_s_delay: RscText
		{
			idc = 19002;
			font = GUI_FONT_BOLD;
			text = "1 min";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class t_s_b_intensity: RscText
		{
			idc = 19003;
			font = GUI_FONT_BOLD;
			text = "50%";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class t_d_intensity: RscText
		{
			idc = 1011;
			font = GUI_FONT_BOLD;
			text = "Dust intensity:";
			tooltip = "Dust intensity: Higher percentage results in more dust but less frames.";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class t_s_d_intensity: RscText
		{
			idc = 19004;
			font = GUI_FONT_BOLD;
			text = "50%";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
