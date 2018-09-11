class keko_intel_mainDialog {

	idd = -1;
	movingEnable = true;
	enableSimulation = true;

	onLoad = "uiNamespace setVariable ['keko_intel_mainDialog', _this select 0]; (_this) spawn keko_intel_fnc_dialogIntelInit;";

	controls[] = { 
		KEKO_INTEL_UI_BACK,	
		KEKO_INTEL_UI_TEXT_TITLE,
		KEKO_INTEL_UI_EDIT_TITLE,
		KEKO_INTEL_UI_TEXT_HEADING,
		KEKO_INTEL_UI_TEXT_ACTION,
		KEKO_INTEL_UI_EDIT_ACTION,
		KEKO_INTEL_UI_TEXT_CONTENT,
		KEKO_INTEL_UI_EDIT_CONTENT,
		KEKO_INTEL_UI_TEXT_REMOVE,
		KEKO_INTEL_UI_CHECK_REMOVE,
		KEKO_TELEPORT_UI_BUTTON_CANCEL,
		KEKO_TELEPORT_UI_BUTTON_OK
	};


	class KEKO_INTEL_UI_BACK: IGUIBack
	{
		idc = 2200;
		x = 3.5 * GUI_GRID_W + GUI_GRID_X;
		y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 33 * GUI_GRID_W;
		h = 21 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_TEXT_TITLE: RscText
	{
		idc = 1000;
		text = "Titel:"; 
		x = 4 * GUI_GRID_W + GUI_GRID_X;
		y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 3.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_EDIT_TITLE: RscEdit
	{
		idc = 1400;
		x = 7.5 * GUI_GRID_W + GUI_GRID_X;
		y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 28 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_TEXT_HEADING: RscText
	{
		idc = 1001;
		text = "Intel hinzufügen";
		x = 4 * GUI_GRID_W + GUI_GRID_X;
		y = 3 * GUI_GRID_H + GUI_GRID_Y;
		w = 6.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_TEXT_ACTION: RscText
	{
		idc = 1002;
		text = "Action:";
		x = 4 * GUI_GRID_W + GUI_GRID_X;
		y = 5 * GUI_GRID_H + GUI_GRID_Y;
		w = 3.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_EDIT_ACTION: RscEdit
	{
		idc = 1401;
		x = 7.5 * GUI_GRID_W + GUI_GRID_X;
		y = 5 * GUI_GRID_H + GUI_GRID_Y;
		w = 28 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_TEXT_CONTENT: RscText
	{
		idc = 1003;
		text = "Inhalt:";
		x = 4 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_EDIT_CONTENT: RscEdit
	{
		idc = 1402;
		x = 7.5 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 28 * GUI_GRID_W;
		h = 8.5 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_TEXT_REMOVE: RscText
	{
		idc = 1004;
		text = "Remove after";
		x = 7 * GUI_GRID_W + GUI_GRID_X;
		y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_INTEL_UI_CHECK_REMOVE: RscCheckbox
	{
		idc = 2800;
		x = 5.5 * GUI_GRID_W + GUI_GRID_X;
		y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 1 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class KEKO_TELEPORT_UI_BUTTON_OK: RscButton
	{
		idc = 1600;
		text = "OK";
		x = 26 * GUI_GRID_W + GUI_GRID_X;
		y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "[] spawn keko_intel_fnc_dialogIntelCallback;";
	};
	class KEKO_TELEPORT_UI_BUTTON_CANCEL: RscButton
	{
		idc = 1601;
		text = "Cancel";
		x = 31 * GUI_GRID_W + GUI_GRID_X;
		y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 4.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};


};