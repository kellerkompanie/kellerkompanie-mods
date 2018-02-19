class keko_teleport_destinationDialog {
	
	idd = -1;
	movingEnable = true;
	enableSimulation = true;	

	onLoad = "uiNamespace setVariable ['keko_teleport_dest_dialog', _this select 0];";

	controls[] = { 
		KEKO_TELEPORT_DEST_UI_BACK, 
		KEKO_TELEPORT_DEST_UI_EDIT, 
		KEKO_TELEPORT_DEST_UI_BUTTON_OK, 
		KEKO_TELEPORT_DEST_UI_BUTTON_CANCEL
	};

	class KEKO_TELEPORT_DEST_UI_BACK: IGUIBack
	{
		idc = 2200;
		x = 8.43 * GUI_GRID_W + GUI_GRID_X;
		y = 6.29 * GUI_GRID_H + GUI_GRID_Y;
		w = 24.5 * GUI_GRID_W;
		h = 6.5 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_DEST_UI_EDIT: RscEdit
	{
		idc = 1400;
		x = 9.5 * GUI_GRID_W + GUI_GRID_X;
		y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 22.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_DEST_UI_BUTTON_OK: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 23 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[] call keko_fnc_dialogTeleportDestination;";
	};
	class KEKO_TELEPORT_DEST_UI_BUTTON_CANCEL: RscButton
	{
		idc = 2;
		text = "Cancel";
		x = 28 * GUI_GRID_W + GUI_GRID_X;
		y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};

};