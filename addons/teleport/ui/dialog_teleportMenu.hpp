class keko_teleport_menuDialog {
	
	idd = -1;
	movingEnable = true;
	enableSimulation = true;	

	onLoad = "uiNamespace setVariable ['keko_teleport_menuDialog', _this select 0]; (_this) spawn keko_teleport_fnc_dialogMenuInit;";

	controls[] = { 
		KEKO_TELEPORT_MENU_UI_BACK, 
		KEKO_TELEPORT_MENU_UI_BLUFOR_CHECK, 
		KEKO_TELEPORT_MENU_UI_INDFOR_CHECK,
		KEKO_TELEPORT_MENU_UI_OPFOR_CHECK,
		KEKO_TELEPORT_MENU_UI_CIV_CHECK,
		KEKO_TELEPORT_MENU_UI_BLUFOR_TEXT, 
		KEKO_TELEPORT_MENU_UI_INDFOR_TEXT,
		KEKO_TELEPORT_MENU_UI_OPFOR_TEXT,
		KEKO_TELEPORT_MENU_UI_CIV_TEXT,
		KEKO_TELEPORT_MENU_UI_BUTTON_OK, 
		KEKO_TELEPORT_MENU_UI_BUTTON_CANCEL
	};

	class KEKO_TELEPORT_MENU_UI_BACK: IGUIBack
	{
		idc = 2200;
		x = 8 * GUI_GRID_W + GUI_GRID_X;
		y = 6 * GUI_GRID_H + GUI_GRID_Y;
		w = 24.5 * GUI_GRID_W;
		h = 8 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_MENU_UI_BLUFOR_CHECK: RscCheckbox
	{
		idc = 2800;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_MENU_UI_BLUFOR_TEXT: RscText
	{
		idc = 1000;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "BLUFOR";
	};
	class KEKO_TELEPORT_MENU_UI_INDFOR_CHECK: RscCheckbox
	{
		idc = 2801;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_MENU_UI_INDFOR_TEXT: RscText
	{
		idc = 1001;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "INDFOR";
	};
	class KEKO_TELEPORT_MENU_UI_OPFOR_CHECK: RscCheckbox
	{
		idc = 2802;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};	
	class KEKO_TELEPORT_MENU_UI_OPFOR_TEXT: RscText
	{
		idc = 1002;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "OPFOR";
	};
	class KEKO_TELEPORT_MENU_UI_CIV_CHECK: RscCheckbox
	{
		idc = 2803;
		x = 9 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_MENU_UI_CIV_TEXT: RscText
	{
		idc = 1003;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		text = "CIV";
	};
	class KEKO_TELEPORT_MENU_UI_BUTTON_OK: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 23 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[] spawn keko_teleport_fnc_dialogTeleportMenu;";
	};
	class KEKO_TELEPORT_MENU_UI_BUTTON_CANCEL: RscButton
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