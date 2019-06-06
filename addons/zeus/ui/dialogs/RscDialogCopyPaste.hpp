class GVAR(CopyPaste_Dialog)
{
    idd = 123;
    movingEnable = true;
    onLoad = "((_this select 0) displayCtrl 1400) ctrlSetText (uiNamespace getVariable ['keko_zeus_CopyPaste_Dialog_Text', '']);";
    onUnload = "uiNamespace setVariable ['keko_zeus_CopyPaste_Dialog_Text', ctrlText ((_this select 0) displayCtrl 1400)];";

    class controls
    {
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by Zarg, v1.063, #Gocypi)
        ////////////////////////////////////////////////////////

        class GVAR(Title): RscText
        {
            idc = 1000;
            moving = 1;

            text = "$STR_keko_zeus_COPY_PASTE_DIALOG"; //--- ToDo: Localize;
            x = 2 * GUI_GRID_W_FIX + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W - 2 * GUI_GRID_W_FIX;
            h = 1.5 * GUI_GRID_H_FIX;
            size = TITLE_FONT_SIZE;
            sizeEx = TITLE_FONT_SIZE;
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class GVAR(Main_Background): IGUIBack
        {
            idc = 2000;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 1.5 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 20.5 * GUI_GRID_H;
            colorBackground[] = {0.2,0.2,0.2,0.8};
        };
        class GVAR(Dialog_Bottom_Bar): IGUIBack
        {
            idc = 2010;
            x = 1 * GUI_GRID_W + 6 * GUI_GRID_W_FIX + GUI_GRID_X;
            y = 20 * GUI_GRID_H + GUI_GRID_Y;
            w = 38 * GUI_GRID_W - 10 * GUI_GRID_W_FIX;
            h = 1.5 * GUI_GRID_H_FIX;
            colorBackground[] = {0,0,0,0.6};
        };
        class GVAR(Ok_Button): RscButtonMenuOK
        {
            onButtonClick = "uiNamespace setVariable ['keko_zeus_CopyPaste_Dialog_Result', 1]; closeDialog 1;";
            idc = 3000;
            x = 39.5 * GUI_GRID_W - 4 * GUI_GRID_W_FIX + GUI_GRID_X;
            y = 20 * GUI_GRID_H + GUI_GRID_Y;
            w = 4 * GUI_GRID_W_FIX;
            h = 1.5 * GUI_GRID_H_FIX;
            size = DEFAULT_FONT_SIZE;
            sizeEx = DEFAULT_FONT_SIZE;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class GVAR(Cancle_Button): RscButtonMenuCancel
        {
            onButtonClick = "uiNamespace setVariable ['keko_zeus_CopyPaste_Dialog_Result', -1]; closeDialog 2;";
            idc = 3010;
            x = 0.5 * GUI_GRID_W + GUI_GRID_X;
            y = 20 * GUI_GRID_H + GUI_GRID_Y;
            w = 6 * GUI_GRID_W_FIX;
            h = 1.5 * GUI_GRID_H_FIX;
            size = DEFAULT_FONT_SIZE;
            sizeEx = DEFAULT_FONT_SIZE;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class GVAR(Background_Edit): IGUIBack
        {
            idc = 2040;

            x = 0.5 * GUI_GRID_W + GUI_GRID_X;
            y = 0.5 * GUI_GRID_H + 1.5 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 39 * GUI_GRID_W;
            h = 19 * GUI_GRID_H - 1.5 * GUI_GRID_H_FIX;
            colorBackground[] = {0,0,0,0.6};
        };
        class GVAR(Paragraph_edit): RscText
        {
            idc = 1020;

            text = "$STR_keko_zeus_COPY_PASTE_CLIPBOARD_CONTENTS_USING_KEYS"; //--- ToDo: Localize;
            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 0.5 * GUI_GRID_H + 1.5 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 39 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H_FIX;
            size = DEFAULT_FONT_SIZE;
            sizeEx = DEFAULT_FONT_SIZE;
        };
        class GVAR(Edit): RscEdit
        {
            idc = 1400;
            style = 16;
            linespacing = 1;
            default = 1;

            autocomplete = "scripting";

            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 0.5 * GUI_GRID_H + 3 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 38 * GUI_GRID_W;
            h = 18.5 * GUI_GRID_H - 3 * GUI_GRID_H_FIX;
            size = DEFAULT_FONT_SIZE;
            sizeEx = DEFAULT_FONT_SIZE;
            colorText[] = {0.5,0.5,0.5,1};
            colorBackground[] = {0,0,0,0.5};
        };
        class GVAR(Icon_Background): IGUIBack
        {
            idc = 2020;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 2 * GUI_GRID_W_FIX;
            h = 1.5 * GUI_GRID_H_FIX;
            colorBackground[] = {0.518,0.016,0,0.8};
        };
        class GVAR(Icon): RscPicture
        {
            idc = 2030;
            style = 48;
            text = QPATHTOF(ui\icons\icon_keko_zeus_dialog.paa);
            x = 0.2 * GUI_GRID_W_FIX + GUI_GRID_X;
            y = 0.15 * GUI_GRID_H_FIX + GUI_GRID_Y;
            w = 1.6 * GUI_GRID_W_FIX;
            h = 1.2 * GUI_GRID_H_FIX;
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
    };
};
