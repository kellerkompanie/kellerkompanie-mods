class GVAR(mainDialog) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = "uiNamespace setVariable ['keko_intel_mainDialog', _this select 0]; (_this) spawn keko_intel_fnc_dialogIntelInit;";

    controls[] = {
        "KEKO_INTEL_UI_BACK",
        "KEKO_INTEL_UI_TEXT_TITLE",
        "KEKO_INTEL_UI_EDIT_TITLE",
        "KEKO_INTEL_UI_TEXT_HEADING",
        "KEKO_INTEL_UI_TEXT_ACTION",
        "KEKO_INTEL_UI_EDIT_ACTION",
        "KEKO_INTEL_UI_TEXT_CONTENT",
        "KEKO_INTEL_UI_EDIT_CONTENT",
        "KEKO_INTEL_UI_TEXT_REMOVE",
        "KEKO_INTEL_UI_CHECK_REMOVE",
        "KEKO_TELEPORT_UI_BUTTON_CANCEL",
        "KEKO_TELEPORT_UI_BUTTON_OK"
    };


    class KEKO_INTEL_UI_BACK: IGUIBack
    {
        idc = 2200;
        x = QUOTE(3.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(2.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(33 * GUI_GRID_W);
        h = QUOTE(21 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_TEXT_TITLE: RscText
    {
        idc = 1000;
        text = "Titel:";
        x = QUOTE(4 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(7.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3.5 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_EDIT_TITLE: RscEdit
    {
        idc = 1400;
        x = QUOTE(7.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(7.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(28 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_TEXT_HEADING: RscText
    {
        idc = 1001;
        text = "Intel hinzufügen";
        x = QUOTE(4 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(3 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(6.5 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_TEXT_ACTION: RscText
    {
        idc = 1002;
        text = "Action:";
        x = QUOTE(4 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3.5 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_EDIT_ACTION: RscEdit
    {
        idc = 1401;
        x = QUOTE(7.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(28 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_TEXT_CONTENT: RscText
    {
        idc = 1003;
        text = "Inhalt:";
        x = QUOTE(4 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(10 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_EDIT_CONTENT: RscEdit
    {
        idc = 1402;
        x = QUOTE(7.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(10 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(28 * GUI_GRID_W);
        h = QUOTE(8.5 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_TEXT_REMOVE: RscText
    {
        idc = 1004;
        text = "Remove after";
        x = QUOTE(7 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(19.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(6 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_INTEL_UI_CHECK_REMOVE: RscCheckbox
    {
        idc = 2800;
        x = QUOTE(5.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(19.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(1 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class KEKO_TELEPORT_UI_BUTTON_OK: RscButton
    {
        idc = 1600;
        text = "OK";
        x = QUOTE(26 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(21.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4.5 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "[] spawn keko_intel_fnc_dialogIntelCallback;";
    };
    class KEKO_TELEPORT_UI_BUTTON_CANCEL: RscButton
    {
        idc = 1601;
        text = "Cancel";
        x = QUOTE(31 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(21.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4.5 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2";
    };


};
