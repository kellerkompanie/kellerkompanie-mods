class keko_common_lockDoorsDialog {
	
	idd = -1;
	movingEnable = true;
	enableSimulation = true;	

	onLoad = "uiNamespace setVariable ['keko_common_lockdoors_dialog', _this select 0]; (_this) call keko_common_fnc_lockDoorsDialogInit";

	controls[] = { 
		KEKO_COMMON_LOCKDOORS_UI_BACK, 
		KEKO_COMMON_LOCKDOORS_UI_TITLE_TEXT, 
		KEKO_COMMON_LOCKDOORS_UI_RADIUS_TEXT, 
		KEKO_COMMON_LOCKDOORS_UI_RADIUS_EDIT,
		KEKO_COMMON_LOCKDOORS_UI_METERS_TEXT,
		KEKO_COMMON_LOCKDOORS_UI_LOCK_BUTTON,
		KEKO_COMMON_LOCKDOORS_UI_UNLOCK_BUTTON,
		KEKO_COMMON_LOCKDOORS_UI_CANCEL_BUTTON
	};

	class KEKO_COMMON_LOCKDOORS_UI_BACK: IGUIBack
	{
		idc = 2200;
		x = 6.14 * GUI_GRID_W + GUI_GRID_X;
		y = 8.84 * GUI_GRID_H + GUI_GRID_Y;
		w = 27.5 * GUI_GRID_W;
		h = 12 * GUI_GRID_H;
	};
	class KEKO_COMMON_LOCKDOORS_UI_TITLE_TEXT: RscText
	{
		idc = 1000;
		text = "(Un-)Lock Doors"; //--- ToDo: Localize;
		x = 7 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 7 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_COMMON_LOCKDOORS_UI_RADIUS_TEXT: RscText
	{
		idc = 1001;
		text = "Radius:"; //--- ToDo: Localize;
		x = 7 * GUI_GRID_W + GUI_GRID_X;
		y = 12 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_COMMON_LOCKDOORS_UI_RADIUS_EDIT: RscEdit
	{
		idc = 1400;
		x = 11 * GUI_GRID_W + GUI_GRID_X;
		y = 12 * GUI_GRID_H + GUI_GRID_Y;
		w = 7 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_COMMON_LOCKDOORS_UI_METERS_TEXT: RscText
	{
		idc = 1002;
		text = "meters"; //--- ToDo: Localize;
		x = 18.5 * GUI_GRID_W + GUI_GRID_X;
		y = 12 * GUI_GRID_H + GUI_GRID_Y;
		w = 3.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};	
	class KEKO_COMMON_LOCKDOORS_UI_LOCK_BUTTON: RscButton
	{
		idc = 1600;
		text = "Lock"; //--- ToDo: Localize;
		x = 19 * GUI_GRID_W + GUI_GRID_X;
		y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[true] spawn keko_common_fnc_lockDoorsDialogCallback;";
	};
	class KEKO_COMMON_LOCKDOORS_UI_UNLOCK_BUTTON: RscButton
	{
		idc = 1600;
		text = "Unlock"; //--- ToDo: Localize;
		x = 24 * GUI_GRID_W + GUI_GRID_X;
		y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[false] spawn keko_common_fnc_lockDoorsDialogCallback;";
	};
	class KEKO_COMMON_LOCKDOORS_UI_CANCEL_BUTTON: RscButton
	{
		idc = 1601;
		text = "Cancel"; //--- ToDo: Localize;
		x = 29 * GUI_GRID_W + GUI_GRID_X;
		y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};

};


