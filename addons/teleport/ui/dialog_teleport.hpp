class GVAR(mainDialog) {

    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;

    onLoad = QUOTE(_this spawn FUNC(dialogTeleportInit));

    controls[] = {
        "Back",
        "Frame",
        "List",
        "ListPlayers",
        "Text",
        "TextPlayers",
        "ButtonJump",
        "ButtonJumpGroup",
        "ButtonTeleport",
        "ButtonTeleportGroup",
        "ButtonJIP",
        "ButtonCancel",
        "ButtonTeleportToPlayer"
    };

    class Back: IGUIBack
    {
        idc = 2200;
        x = QUOTE(0.06 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(0.99 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(40 * GUI_GRID_W);
        h = QUOTE(24 * GUI_GRID_H);
        moving = 1;
    };

    class Frame: RscFrame
    {
        idc = 1800;
        text = "Teleport-Auswahlmenü";
        x = QUOTE(0 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(0.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(40 * GUI_GRID_W);
        h = QUOTE(24.5 * GUI_GRID_H);
        sizeEx = QUOTE(1 * GUI_GRID_H);
    };

    class List: RscListbox
    {
        idc = 1500;
        text = "Wegpunkte";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(3 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(16 * GUI_GRID_W);
        h = QUOTE(9 * GUI_GRID_H);

        colorSelectBackground[] =
        {
            0.03,
            0.42,
            0.53,
            1
        };
    };

    class ListPlayers: RscListbox
    {
        idc = 1501;
        text = "Spieler";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(14 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(16 * GUI_GRID_W);
        h = QUOTE(9 * GUI_GRID_H);

        colorSelectBackground[] =
        {
            0.03,
            0.42,
            0.53,
            1
        };
    };

    class Text: RscText
    {
        idc = 1000;
        text = "Wegpunkte";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(1.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(15.5 * GUI_GRID_W);
        h = QUOTE(2 * GUI_GRID_H);
    };

    class TextPlayers: RscText
    {
        idc = 1001;
        text = "Spieler";
        x = QUOTE(1 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(12.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(15.5 * GUI_GRID_W);
        h = QUOTE(2 * GUI_GRID_H);
    };

    class ButtonJump: RscButton
    {
        idc = 1600;
        text = "Parajump";
        x = QUOTE(18 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_1(lbData [ARR_2(1500, lbCurSel 1500)])] spawn FUNC(dialogJump));
    };
    class ButtonJumpGroup: RscButton
    {
        idc = 1601;
        text = "Parajump Group";
        x = QUOTE(28.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(9 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1500, lbCurSel 1500)])] remoteExec [ARR_3(QQFUNC(dialogJumpGroup), 2, false)]);
    };

    class ButtonTeleport: RscButton
    {
        idc = 1602;
        text = "Teleport";
        x = QUOTE(18 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_1(lbData [ARR_2(1500, lbCurSel 1500)])] spawn FUNC(dialogTeleport));
    };
    class ButtonTeleportGroup: RscButton
    {
        idc = 1603;
        text = "Teleport Group";
        x = QUOTE(28.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(6.5 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1500, lbCurSel 1500)])] remoteExec [ARR_3(QQFUNC(dialogTeleportGroup), 2, false)]);
    };

    class ButtonJIP: RscButton
    {
        idc = 1604;
        text = "Teleport to Leader";
        x = QUOTE(28.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(4.0 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_1(player)] spawn FUNC(dialogTeleportToLeader));
    };

    class ButtonCancel: RscButton
    {
        idc = 1605;
        text = "Abbrechen";
        x = QUOTE(28.5 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(21 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = "closeDialog 2";
    };

    class ButtonTeleportToPlayer: RscButton
    {
        idc = 1606;
        text = "Teleport to Player";
        x = QUOTE(18 * GUI_GRID_W + GUI_GRID_X);
        y = QUOTE(14 * GUI_GRID_H + GUI_GRID_Y);
        w = QUOTE(9 * GUI_GRID_W);
        h = QUOTE(1.5 * GUI_GRID_H);
        action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1501, lbCurSel 1501)])] spawn FUNC(dialogTeleportToPlayer));
    };
};
