class GVAR(applyLoadoutDialog) {

	idd = 11;
	movingEnable = true;
	enableSimulation = true;
	onload = QUOTE(_this spawn FUNC(dialogApplyLoadoutInit));

	controls[] = {
		Back,
		Frame,
		List,
		Text,
		ButtonOk,
		ButtonCancel
	};

	class Back: IGUIBack
	{
		idc = 2200;
		x = 0.06 * GUI_GRID_W + GUI_GRID_X;
		y = 0.99 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24 * GUI_GRID_H;
		moving = 1;
	};

	class Frame: RscFrame
	{
		idc = 1800;
		text = "Apply Loadout";
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24.5 * GUI_GRID_H;
		sizeEx = 1 * GUI_GRID_H;
	};

	class List: RscListbox
	{
		idc = 1500;
		text = "Loadouts";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 3 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 21 * GUI_GRID_H;

		colorSelectBackground[] =
		{
			0.03,
			0.42,
			0.53,
			1
		};
	};

	class Text: RscText
	{
		idc = 1000;
		text = "Loadouts";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 15.5 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};

	class ButtonOk: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(lbData [ARR_2(1500, lbCurSel 1500)] spawn FUNC(dialogApplyLoadoutCallback));
	};

	class ButtonCancel: RscButton
	{
		idc = 1601;
		text = "Abbrechen";
		x = 28.5 * GUI_GRID_W + GUI_GRID_X;
		y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};
};
