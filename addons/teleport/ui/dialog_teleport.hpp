class GVAR(mainDialog) {

	idd = -1;
	movingEnable = true;
	enableSimulation = true;

	onLoad = QUOTE(_this spawn FUNC(dialogTeleportInit));

	controls[] = {
		Back,
		Frame,
		List,
		ListPlayers,
		Text,
		TextPlayers,
		ButtonJump,
		ButtonJumpGroup,
		ButtonTeleport,
		ButtonTeleportGroup,
		ButtonJIP,
		ButtonCancel,
		ButtonTeleportToPlayer
	};

	class Back: IGUIBack
	{
		idc = 2200;
		x = 0.06 * GUI_GRID_W + GUI_GRID_X;
		y = 0.99 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24 * GUI_GRID_H;
		moving = 1;
	};

	class Frame: RscFrame
	{
		idc = 1800;
		text = "Teleport-Auswahlmenü";
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 24.5 * GUI_GRID_H;
		sizeEx = 1 * GUI_GRID_H;
	};

	class List: RscListbox
	{
		idc = 1500;
		text = "Wegpunkte";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 3 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 9 * GUI_GRID_H;

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
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 14 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 9 * GUI_GRID_H;

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
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 15.5 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};

	class TextPlayers: RscText
	{
		idc = 1001;
		text = "Spieler";
		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 15.5 * GUI_GRID_W;
		h = 2 * GUI_GRID_H;
	};

	class ButtonJump: RscButton
	{
		idc = 1600;
		text = "Parajump";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_1(lbData [ARR_2(1500, lbCurSel 1500)])] spawn FUNC(dialogJump));
	};
	class ButtonJumpGroup: RscButton
	{
		idc = 1601;
		text = "Parajump Group";
		x = 28.5 * GUI_GRID_W + GUI_GRID_X;
		y = 9 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1500, lbCurSel 1500)])] remoteExec [ARR_3(QQFUNC(dialogJumpGroup), 2, false)]);
	};

	class ButtonTeleport: RscButton
	{
		idc = 1602;
		text = "Teleport";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_1(lbData [ARR_2(1500, lbCurSel 1500)])] spawn FUNC(dialogTeleport));
	};
	class ButtonTeleportGroup: RscButton
	{
		idc = 1603;
		text = "Teleport Group";
		x = 28.5 * GUI_GRID_W + GUI_GRID_X;
		y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1500, lbCurSel 1500)])] remoteExec [ARR_3(QQFUNC(dialogTeleportGroup), 2, false)]);
	};

	class ButtonJIP: RscButton
	{
		idc = 1604;
		text = "Teleport to Leader";
		x = 28.5 * GUI_GRID_W + GUI_GRID_X;
		y = 4.0 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_1(player)] spawn FUNC(dialogTeleportToLeader));
	};

	class ButtonCancel: RscButton
	{
		idc = 1605;
		text = "Abbrechen";
		x = 28.5 * GUI_GRID_W + GUI_GRID_X;
		y = 21 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = "closeDialog 2";
	};

	class ButtonTeleportToPlayer: RscButton
	{
		idc = 1606;
		text = "Teleport to Player";
		x = 18 * GUI_GRID_W + GUI_GRID_X;
		y = 14 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		action = QUOTE(closeDialog 1; [ARR_2(player, lbData [ARR_2(1501, lbCurSel 1501)])] spawn FUNC(dialogTeleportToPlayer));
	};
};
