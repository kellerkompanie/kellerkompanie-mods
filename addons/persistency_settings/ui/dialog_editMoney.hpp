class GVAR(editMoneyDialog) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(editMoneyDialog), _this select 0)]; _this spawn FUNC(dialogEditMoneyInit));

    controls[] = {
        "Back",
        "TextCash",
        "EditCash",
        "TextBank",
        "EditBank",
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
        idc = 1006;
        x = QUOTE(8.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        text = "";
    };
    class TextCash: RscText
    {
        idc = 1004;
        x = QUOTE(8.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(7.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        text = "Cash:";
    };
    class EditCash: RscEdit
    {
        idc = 1400;
        x = QUOTE(11.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(7.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(21 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
    };

    class TextBank: RscText
    {
        idc = 1005;
        x = QUOTE(8.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        text = "Bank:";
    };
    class EditBank: RscEdit
    {
        idc = 1401;
        x = QUOTE(11.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(21 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
    };

    class ButtonOk: RscButton
    {
        idc = 1600;
        text = "Apply";
        x = QUOTE(23 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(11.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE([] spawn FUNC(dialogEditMoneyCallback));
    };
    class ButtonCancel: RscButton
    {
        idc = 2;
        text = "Cancel";
        x = QUOTE(28 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(11.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2;";
    };

};
