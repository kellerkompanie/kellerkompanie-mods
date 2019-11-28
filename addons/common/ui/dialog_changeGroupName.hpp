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
        x = 6.14 * GUI_GRID_W + GUI_GRID_X;
        y = 8.84 * GUI_GRID_H + GUI_GRID_Y;
        w = 27.5 * GUI_GRID_W;
        h = 12 * GUI_GRID_H;
    };
    class TitleText: RscText
    {
        idc = 1000;
        text = CSTRING(changeGroupName);
        x = 7 * GUI_GRID_W + GUI_GRID_X;
        y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 10 * GUI_GRID_W;
        h = 1 * GUI_GRID_H;
    };
    class GroupNameText: RscText
    {
        idc = 1001;
        text = CSTRING(name);
        x = 7 * GUI_GRID_W + GUI_GRID_X;
        y = 12 * GUI_GRID_H + GUI_GRID_Y;
        w = 4 * GUI_GRID_W;
        h = 1 * GUI_GRID_H;
    };
    class GroupNameEdit: RscEdit
    {
        idc = 1400;
        x = 11 * GUI_GRID_W + GUI_GRID_X;
        y = 12 * GUI_GRID_H + GUI_GRID_Y;
        w = 15 * GUI_GRID_W;
        h = 1 * GUI_GRID_H;
    };
    class Button: RscButton
    {
        idc = 1600;
        text = CSTRING(ok); //--- ToDo: Localize;
        x = 19 * GUI_GRID_W + GUI_GRID_X;
        y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 4 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        action = QUOTE([] spawn FUNC(changeGroupNameDialogCallback));
    };
    class CancelButton: RscButton
    {
        idc = 1601;
        text = CSTRING(cancel);
        x = 29 * GUI_GRID_W + GUI_GRID_X;
        y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
        w = 4 * GUI_GRID_W;
        h = 1.5 * GUI_GRID_H;
        action = "closeDialog 2";
    };

};
