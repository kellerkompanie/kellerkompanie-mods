class keko_police_settingsDialog {
	
	idd = -1;
	movingEnable = true;
	enableSimulation = true;	

	onLoad = "uiNamespace setVariable ['keko_police_settings_dialog', _this select 0]; (_this) call keko_police_fnc_settingsDialogInit";

	controls[]=
	{
		IGUIBack_2200,
		RscText_1000,
		RscText_1001,
		RscText_1002,
		RscText_1003,
		RscSlider_1900,
		RscSlider_1901,
		RscText_1004,
		RscText_1005,
		RscButton_1600,
		RscButton_1601,
		RscCheckbox_2800
	};

	class IGUIBack_2200: IGUIBack
	{
		idc = 2200;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 37.5 * GUI_GRID_W;
		h = 14 * GUI_GRID_H;
	};
	class RscText_1000: RscText
	{
		idc = 1000;
		text = "Kellerkompanie Police Settings"; 
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 1 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscText_1001: RscText
	{
		idc = 1001;
		text = "Shout distance";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 4 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscText_1002: RscText
	{
		idc = 1002;
		text = "Surrender Chance";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 7.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscText_1003: RscText
	{
		idc = 1003;
		text = "Higher chance when wounded";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 13.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscSlider_1900: RscSlider
	{
		idc = 1900;
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 4 * GUI_GRID_H + GUI_GRID_Y;
		w = 19.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onSliderPosChanged = "ctrlSetText [1004, format['%1 m', round (_this select 1)]]";
	};
	class RscSlider_1901: RscSlider
	{
		idc = 1901;
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 19.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onSliderPosChanged = "ctrlSetText [1005, format['%1%2', round (_this select 1), '%']]";
	};
	class RscText_1004: RscText
	{
		idc = 1004;
		text = "5 m";
		x = 34.5 * GUI_GRID_W + GUI_GRID_X;
		y = 4 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscText_1005: RscText
	{
		idc = 1005;
		text = "10%";
		x = 34.5 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class RscButton_1600: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 25 * GUI_GRID_W + GUI_GRID_X;
		y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[] spawn keko_police_fnc_settingsDialogCallback";
	};
	class RscButton_1601: RscButton
	{
		idc = 1601;
		text = "Cancel";
		x = 32 * GUI_GRID_W + GUI_GRID_X;
		y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 5.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};
	class RscCheckbox_2800: RscCheckbox
	{
		idc = 2800;
		x = 13.46 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 0.963062 * GUI_GRID_H;
		//onCheckedChanged = "systemChat str _this"
	};
};