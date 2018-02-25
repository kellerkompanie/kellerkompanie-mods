class keko_teleport_mainDialog {

	idd = -1;
	movingEnable = true;
	enableSimulation = true;

	onLoad = "(_this) spawn keko_teleport_fnc_dialogTeleportInit;";

	controls[] = { 
		KEKO_TELEPORT_UI_BACK,	
		KEKO_TELEPORT_UI_FRAME,
		KEKO_TELEPORT_UI_LIST,
		KEKO_TELEPORT_UI_TEXT,
		KEKO_TELEPORT_UI_BUTTON_JUMP,
		KEKO_TELEPORT_UI_BUTTON_TELEPORT,
		KEKO_TELEPORT_UI_BUTTON_CANCEL
	};

	class KEKO_TELEPORT_UI_BACK: IGUIBack
	{
		idc = 2200;
		x = 0.06 * GUI_GRID_W + GUI_GRID_X;
		y = 0.99 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24 * GUI_GRID_H;
		moving = 1;
	};

	class KEKO_TELEPORT_UI_FRAME: RscFrame
	{
		idc = 1800;
		text = "Teleport-Auswahlmenü";
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24.5 * GUI_GRID_H;
		sizeEx = 1 * GUI_GRID_H;
	};

	class KEKO_TELEPORT_UI_LIST: RscListbox
	{
		idc = 1500;
		text = "Teleport-Ziele";
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

	class KEKO_TELEPORT_UI_TEXT: RscText
	{
		idc = 1000;
		text = "Teleport-Ziele";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 15.5 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};

	class KEKO_TELEPORT_UI_BUTTON_JUMP: RscButton
	{
		idc = 1600;
		text = "Parajump";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 11 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 1; [lbData [1500, lbCurSel 1500]] spawn keko_teleport_fnc_dialogJump;";	
	};
	
	class KEKO_TELEPORT_UI_BUTTON_TELEPORT: RscButton
	{
		idc = 1600;
		text = "Teleport";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 1; [lbData [1500, lbCurSel 1500]] spawn keko_teleport_fnc_dialogTeleport;";	
	};

	class KEKO_TELEPORT_UI_BUTTON_CANCEL: RscButton
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