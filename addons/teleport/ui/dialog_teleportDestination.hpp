class GVAR(destinationDialog) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(destDialog), _this select 0)]; _this spawn FUNC(dialogDestinationInit));

    controls[] = {
        "Back",
        "Text",
        "Edit",
        "BluforCheck",
        "BluforText",
        "IndforCheck",
        "IndforText",
        "OpforCheck",
        "OpforText",
        "CivCheck",
        "CivText",
        "ButtonOk",
        "ButtonCancel"
    };

    class Back: IGUIBack
    {
        idc = 2200;
        x = QUOTE(8 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(25 * GUI_GRID_W);
        h = QUOTE(8 * GUI_GRID_H);
    };
    class Text: RscText
    {
        idc = 1004;
        x = QUOTE(8.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        text = "Name:";
    };
    class Edit: RscEdit
    {
        idc = 1400;
        x = QUOTE(11.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(21 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
    };
    class BluforCheck: RscCheckbox
    {
        idc = 2800;
        x = QUOTE(9 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(1 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class BluforText: RscText
    {
        idc = 1000;
        x = QUOTE(10 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(10 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
        text = "BLUFOR";
    };
    class IndforCheck: RscCheckbox
    {
        idc = 2801;
        x = QUOTE(9 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(10 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(1 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class IndforText: RscText
    {
        idc = 1001;
        x = QUOTE(10 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(10 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(10 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
        text = "INDFOR";
    };
    class OpforCheck: RscCheckbox
    {
        idc = 2802;
        x = QUOTE(9 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(11 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(1 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class OpforText: RscText
    {
        idc = 1002;
        x = QUOTE(10 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(11 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(10 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
        text = "OPFOR";
    };
    class CivCheck: RscCheckbox
    {
        idc = 2803;
        x = QUOTE(9 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(1 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class CivText: RscText
    {
        idc = 1003;
        x = QUOTE(10 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(10 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
        text = "CIV";
    };

    class ButtonOk: RscButton
    {
        idc = 1600;
        text = "OK";
        x = QUOTE(23 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE([] spawn FUNC(dialogTeleportDestination));
    };
    class ButtonCancel: RscButton
    {
        idc = 2;
        text = "Cancel";
        x = QUOTE(28 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2;";
    };
};
