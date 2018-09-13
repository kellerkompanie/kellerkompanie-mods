class GVAR(menuDialog) {

	idd = -1;
	movingEnable = true;
	enableSimulation = true;

	onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(menuDialog), _this select 0)]; _this spawn FUNC(dialogMenuInit));

	controls[] = {
		Back,
		BluforCheck,
		BluforText,
		IndforCheck,
		IndforText,
		OpforCheck,
		OpforText,
		CivCheck,
		CivText,
		ButtonOk,
		ButtonCancel
	};

	class Back: IGUIBack
	{
		idc = 2200;
		x = 8 * GUI_GRID_W + GUI_GRID_X;
		y = 6 * GUI_GRID_H + GUI_GRID_Y;
		w = 24.5 * GUI_GRID_W;
		h = 8 * GUI_GRID_H;
	};
	class BluforCheck: RscCheckbox
	{
		idc = 2800;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class BluforText: RscText
	{
		idc = 1000;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "BLUFOR";
	};
	class IndforCheck: RscCheckbox
	{
		idc = 2801;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class IndforText: RscText
	{
		idc = 1001;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "INDFOR";
	};
	class OpforCheck: RscCheckbox
	{
		idc = 2802;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class OpforText: RscText
	{
		idc = 1002;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "OPFOR";
	};
	class CivCheck: RscCheckbox
	{
		idc = 2803;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class CivText: RscText
	{
		idc = 1003;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "CIV";
	};
	class ButtonOk: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 23 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE([] spawn FUNC(dialogTeleportMenu));
	};
	class ButtonCancel: RscButton
	{
		idc = 2;
		text = "Cancel";
		x = 28 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};

};
