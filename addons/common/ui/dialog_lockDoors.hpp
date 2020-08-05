class GVAR(lockDoorsDialog) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(lockdoors_dialog), _this select 0)]; _this call FUNC(lockDoorsDialogInit));

    controls[] = {
        "Back",
        "TitleText",
        "RadiusText",
        "RadiusEdit",
        "Text",
        "Button",
        "UnlockButton",
        "CancelButton"
    };

    class Back: IGUIBack {
        idc = 2200;
        x = QUOTE(6.14 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(8.84 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(27.5 * GUI_GRID_W);
        h = QUOTE(12 * GUI_GRID_H);
    };
    class TitleText: RscText {
        idc = 1000;
        text = "(Un-)Lock Doors"; //--- ToDo: Localize;
        x = QUOTE(7 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(7 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class RadiusText: RscText {
        idc = 1001;
        text = "Radius:"; //--- ToDo: Localize;
        x = QUOTE(7 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class RadiusEdit: RscEdit {
        idc = 1400;
        x = QUOTE(11 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(7 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class Text: RscText {
        idc = 1002;
        text = "meters"; //--- ToDo: Localize;
        x = QUOTE(18.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(3.5 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class Button: RscButton {
        idc = 1600;
        text = "Lock"; //--- ToDo: Localize;
        x = QUOTE(19 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(18.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE([ARR_1(true)] spawn FUNC(lockDoorsDialogCallback));
    };
    class UnlockButton: RscButton {
        idc = 1600;
        text = "Unlock"; //--- ToDo: Localize;
        x = QUOTE(24 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(18.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE([ARR_1(false)] spawn FUNC(lockDoorsDialogCallback));
    };
    class CancelButton: RscButton {
        idc = 1601;
        text = "Cancel"; //--- ToDo: Localize;
        x = QUOTE(29 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(18.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2";
    };
};
