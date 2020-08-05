class GVAR(heliDropDialog) {

    idd = 11;
    movingEnable = 1;
    enableSimulation = 1;
    onload = QUOTE(_this spawn FUNC(dialogHeliDropInit));

    controls[] = {
        "Back",
        "Frame",
        "List",
        "Text",
        "ButtonOk",
        "ButtonCancel"
    };

    class Back: IGUIBack {
        idc = 2200;
        x = QUOTE(0.06 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(0.99 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(40 * GUI_GRID_W);
        h = QUOTE(24 * GUI_GRID_H);
        moving = 1;
    };

    class Frame: RscFrame {
        idc = 1800;
        text = "Supply Drop";
        x = QUOTE(0 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(0.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(40 * GUI_GRID_W);
        h = QUOTE(24.5 * GUI_GRID_H);
        sizeEx = QUOTE(1 * GUI_GRID_H);
    };

    class List: RscListbox {
        idc = 1500;
        text = "Güter";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(3 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(16 * GUI_GRID_W);
        h = QUOTE(21 * GUI_GRID_H);

        colorSelectBackground[] =
        {
            0.03,
            0.42,
            0.53,
            1
        };
    };

    class Text: RscText    {
        idc = 1000;
        text = "Güter";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(1.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(15.5 * GUI_GRID_W);
        h = QUOTE(2 * GUI_GRID_H);
    };

    class ButtonOk: RscButton {
        idc = 1600;
        text = "Drop";
        x = QUOTE(18 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(8.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(lbData [ARR_2(1500, lbCurSel 1500)] spawn FUNC(dialogHeliDropCallback));
    };

    class ButtonCancel: RscButton {
        idc = 1601;
        text = "Abbrechen";
        x = QUOTE(28.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(8.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2";
    };
};
