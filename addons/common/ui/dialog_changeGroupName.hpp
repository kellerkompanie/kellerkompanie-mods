class GVAR(changeGroupName) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(changeGroupName), _this select 0)]; _this call FUNC(changeGroupNameDialogInit));

    controls[] = {
        "Back",
        "TitleText",
        "GroupNameText",
        "GroupNameEdit",
        "Button",
        "CancelButton"
    };

    class Back: IGUIBack
    {
        idc = 2200;
        x = QUOTE(6.14 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(8.84 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(27.5 * GUI_GRID_W);
        h = QUOTE(12 * GUI_GRID_H);
    };
    class TitleText: RscText
    {
        idc = 1000;
        text = CSTRING(changeGroupName);
        x = QUOTE(7 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(10 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class GroupNameText: RscText
    {
        idc = 1001;
        text = CSTRING(name);
        x = QUOTE(7 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class GroupNameEdit: RscEdit
    {
        idc = 1400;
        x = QUOTE(11 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(15 * GUI_GRID_W);
        h = QUOTE(1 * GUI_GRID_H);
    };
    class Button: RscButton
    {
        idc = 1600;
        text = CSTRING(ok); //--- ToDo: Localize;
        x = QUOTE(19 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(18.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE([] spawn FUNC(changeGroupNameDialogCallback));
    };
    class CancelButton: RscButton
    {
        idc = 1601;
        text = CSTRING(cancel);
        x = QUOTE(29 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(18.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(4 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2";
    };

};
