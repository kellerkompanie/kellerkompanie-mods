class GVAR(editMoneyDialog) {

    idd = -1;
    movingEnable = true;
    enableSimulation = true;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(editMoneyDialog), _this select 0)]; _this spawn FUNC(dialogEditMoneyInit));

    controls[] = {
        Back,
        TextCash,
        EditCash,
        TextBank,
        EditBank,

        ButtonOk,
        ButtonCancel
    };

    class Back: IGUIBack
    {
        idc = 2200;
        x = 8 * GUI_GRID_W + GUI_GRID_X;
        y = 6 * GUI_GRID_H + GUI_GRID_Y;
        w = 25 * GUI_GRID_W;
        h = 8 * GUI_GRID_H;
    };
    class Text: RscText
    {
        idc = 1006;
        x = 8.5 * GUI_GRID_W + GUI_GRID_X;
        y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 3 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        text = "";
    };
    class TextCash: RscText
    {
        idc = 1004;
        x = 8.5 * GUI_GRID_W + GUI_GRID_X;
        y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 3 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        text = "Cash:";
    };
    class EditCash: RscEdit
    {
        idc = 1400;
        x = 11.5 * GUI_GRID_W + GUI_GRID_X;
        y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 21 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
    };

    class TextBank: RscText
    {
        idc = 1005;
        x = 8.5 * GUI_GRID_W + GUI_GRID_X;
        y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 3 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        text = "Bank:";
    };
    class EditBank: RscEdit
    {
        idc = 1401;
        x = 11.5 * GUI_GRID_W + GUI_GRID_X;
        y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 21 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
    };

    class ButtonOk: RscButton
    {
        idc = 1600;
        text = "Apply";
        x = 23 * GUI_GRID_W + GUI_GRID_X;
        y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 4 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        action = QUOTE([] spawn FUNC(dialogEditMoneyCallback));
    };
    class ButtonCancel: RscButton
    {
        idc = 2;
        text = "Cancel";
        x = 28 * GUI_GRID_W + GUI_GRID_X;
        y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 4 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        action = "closeDialog 2;";
    };

};
