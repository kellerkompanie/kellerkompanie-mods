class snow_menu{
    idd = 1000;
    movingEnable = 1;
    onLoad = QUOTE([] spawn FUNC(snow_menuOnload));
    class Controls
    {
        class c_objects
        {
            idc = 2100; // Control identification (without it, the control won't be displayed)
            type = CT_COMBO; // Type is 4
            style = ST_LEFT + LB_TEXTURES; // Style
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

            x = 0.443281 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022 * safezoneH;

            colorBackground[] = {0,0,0,1}; // Fill color
            colorSelectBackground[] = {1,1,1,1}; // Selected item fill color

            sizeEx = 0.02/ (getResolution select 5);
            font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
            shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
            colorText[] = {1,1,1,1}; // Text and frame color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text color
            colorSelect[] = {0,0,0,1}; // Text selection color

            pictureColor[] = {1,0.5,0,1}; // Picture color
            pictureColorSelect[] = {1,1,1,1}; // Selected picture color
            pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color

            arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
            arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

            wholeHeight = 5 * GUI_GRID_CENTER_H; // Maximum height of expanded box (including the control height)
            maxHistoryDelay = 1; // Time since last keyboard type search to reset it

            soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
            soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
            soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

            // Scrollbar configuration (applied only when LB_TEXTURES style is used)
            class ComboScrollBar
            {
                width = 0; // width of ComboScrollBar
                height = 0; // height of ComboScrollBar
                scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

                color[] = {1,1,1,1}; // Scrollbar color
            };
        };
        class c_breath
        {
            idc = 2101; // Control identification (without it, the control won't be displayed)
            type = CT_COMBO; // Type is 4
            style = ST_LEFT + LB_TEXTURES; // Style
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

            x = 0.649531 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022 * safezoneH;

            colorBackground[] = {0,0,0,1}; // Fill color
            colorSelectBackground[] = {1,1,1,1}; // Selected item fill color

            sizeEx = 0.02/ (getResolution select 5);
            font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
            shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
            colorText[] = {1,1,1,1}; // Text and frame color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text color
            colorSelect[] = {0,0,0,1}; // Text selection color

            pictureColor[] = {1,0.5,0,1}; // Picture color
            pictureColorSelect[] = {1,1,1,1}; // Selected picture color
            pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color

            arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
            arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

            wholeHeight = 5 * GUI_GRID_CENTER_H; // Maximum height of expanded box (including the control height)
            maxHistoryDelay = 1; // Time since last keyboard type search to reset it

            soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
            soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
            soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

            // Scrollbar configuration (applied only when LB_TEXTURES style is used)
            class ComboScrollBar
            {
                width = 0; // width of ComboScrollBar
                height = 0; // height of ComboScrollBar
                scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

                color[] = {1,1,1,1}; // Scrollbar color
            };
        };
        class c_clientserver
        {
            idc = 2102; // Control identification (without it, the control won't be displayed)
            type = CT_COMBO; // Type is 4
            style = ST_LEFT + LB_TEXTURES; // Style
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

            x = 0.443281 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022 * safezoneH;

            colorBackground[] = {0,0,0,1}; // Fill color
            colorSelectBackground[] = {1,1,1,1}; // Selected item fill color

            sizeEx = 0.02/ (getResolution select 5);
            font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
            shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
            colorText[] = {1,1,1,1}; // Text and frame color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text color
            colorSelect[] = {0,0,0,1}; // Text selection color

            pictureColor[] = {1,0.5,0,1}; // Picture color
            pictureColorSelect[] = {1,1,1,1}; // Selected picture color
            pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color

            arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
            arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

            wholeHeight = 5 * GUI_GRID_CENTER_H; // Maximum height of expanded box (including the control height)
            maxHistoryDelay = 1; // Time since last keyboard type search to reset it

            soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
            soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
            soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

            // Scrollbar configuration (applied only when LB_TEXTURES style is used)
            class ComboScrollBar
            {
                width = 0; // width of ComboScrollBar
                height = 0; // height of ComboScrollBar
                scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

                color[] = {1,1,1,1}; // Scrollbar color
            };
        };
        class c_fog
        {
            idc = 2103; // Control identification (without it, the control won't be displayed)
            type = CT_COMBO; // Type is 4
            style = ST_LEFT + LB_TEXTURES; // Style
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

            x = 0.649531 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022 * safezoneH;

            colorBackground[] = {0,0,0,1}; // Fill color
            colorSelectBackground[] = {1,1,1,1}; // Selected item fill color

            sizeEx = 0.02/ (getResolution select 5);
            font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
            shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
            colorText[] = {1,1,1,1}; // Text and frame color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text color
            colorSelect[] = {0,0,0,1}; // Text selection color

            pictureColor[] = {1,0.5,0,1}; // Picture color
            pictureColorSelect[] = {1,1,1,1}; // Selected picture color
            pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color

            arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
            arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

            wholeHeight = 5 * GUI_GRID_CENTER_H; // Maximum height of expanded box (including the control height)
            maxHistoryDelay = 1; // Time since last keyboard type search to reset it

            soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
            soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
            soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

            // Scrollbar configuration (applied only when LB_TEXTURES style is used)
            class ComboScrollBar
            {
                width = 0; // width of ComboScrollBar
                height = 0; // height of ComboScrollBar
                scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

                color[] = {1,1,1,1}; // Scrollbar color
            };
        };
        class s_direction
        {
            type = CT_XSLIDER; // Type
            style = SL_HORZ; // Style
            idc = 1900;
            x = 0.443281 * safezoneW + safezoneX;
            y = 0.478 * safezoneH + safezoneY;
            w = 0.185625 * safezoneW;
            h = 0.022 * safezoneH;
            onSliderPosChanged = QUOTE(sliderNr = 0; [] spawn FUNC(snow_setSliderValue); false);
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.
            color[] = {1,1,1,1}; // Text and arrow color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text and arrow color
            colorActive[] = {1,1,1,1}; // Text selection color
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
            border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture
            thumb = "#(argb,8,8,3)color(1,1,1,1)"; // Dragging element (stretched vertically)
            class Title // Link to a title (obsolete?)
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
            class Value // Link to a control which will show slider value
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                format = "%.f"; // Text format, value is represented by variable %g (float) or %.f (integer)
                type = SPTPlain; // Format, can be SPTPlain or SPTPercents (multiplies the value by 100)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
        };
        class s_duration
        {
            type = CT_XSLIDER; // Type
            style = SL_HORZ; // Style
            idc = 1901;
            x = 0.443281 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.185625 * safezoneW;
            h = 0.022 * safezoneH;
            onSliderPosChanged = QUOTE(sliderNr = 1; [] spawn FUNC(setSliderValue); false);
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.
            color[] = {1,1,1,1}; // Text and arrow color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text and arrow color
            colorActive[] = {1,1,1,1}; // Text selection color
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
            border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture
            thumb = "#(argb,8,8,3)color(1,1,1,1)"; // Dragging element (stretched vertically)
            class Title // Link to a title (obsolete?)
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
            class Value // Link to a control which will show slider value
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                format = "%.f"; // Text format, value is represented by variable %g (float) or %.f (integer)
                type = SPTPlain; // Format, can be SPTPlain or SPTPercents (multiplies the value by 100)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
        };
        class s_delay
        {
            type = CT_XSLIDER; // Type
            style = SL_HORZ; // Style
            idc = 1902;
            x = 0.443281 * safezoneW + safezoneX;
            y = 0.61 * safezoneH + safezoneY;
            w = 0.185625 * safezoneW;
            h = 0.022 * safezoneH;
            onSliderPosChanged = QUOTE(sliderNr = 2; [] spawn FUNC(snow_setSliderValue); false);
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.
            color[] = {1,1,1,1}; // Text and arrow color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text and arrow color
            colorActive[] = {1,1,1,1}; // Text selection color
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
            border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture
            thumb = "#(argb,8,8,3)color(1,1,1,1)"; // Dragging element (stretched vertically)
            class Title // Link to a title (obsolete?)
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
            class Value // Link to a control which will show slider value
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                format = "%.f"; // Text format, value is represented by variable %g (float) or %.f (integer)
                type = SPTPlain; // Format, can be SPTPlain or SPTPercents (multiplies the value by 100)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
        };
        class s_intensity
        {
            type = CT_XSLIDER; // Type
            style = SL_HORZ; // Style
            idc = 1903;
            x = 0.443281 * safezoneW + safezoneX;
            y = 0.676 * safezoneH + safezoneY;
            w = 0.185625 * safezoneW;
            h = 0.022 * safezoneH;
            onSliderPosChanged = QUOTE(sliderNr = 3; [] spawn FUNC(snow_setSliderValue); false);
            default = 0; // Control selected by default (only one within a display can be used)
            blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.
            color[] = {1,1,1,1}; // Text and arrow color
            colorDisabled[] = {1,1,1,0.5}; // Disabled text and arrow color
            colorActive[] = {1,1,1,1}; // Text selection color
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
            border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture
            thumb = "#(argb,8,8,3)color(1,1,1,1)"; // Dragging element (stretched vertically)
            class Title // Link to a title (obsolete?)
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
            class Value // Link to a control which will show slider value
            {
                idc = -1; // Control IDC (has to be defined ABOVE the slider control)
                format = "%.f"; // Text format, value is represented by variable %g (float) or %.f (integer)
                type = SPTPlain; // Format, can be SPTPlain or SPTPercents (multiplies the value by 100)
                colorBase[] = {1,1,1,1}; // Text color
                colorActive[] = {1,1,1,1}; // Text color when the slider is active
            };
        };
        class b_close
        {
            idc = 1600;
            type = CT_BUTTON;
            style = 14;
            default = false;
            sizeEx = GUI_GRID_CENTER_H;
            font = GUI_FONT_BOLD;
            colorBackground[] = {1,1,1,1}; // Fill color
            colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
            colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
            colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
            colorText[] = {0.15,0.25,0.55,1}; // Text color
            colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
            soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
            soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
            soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
            soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
            x = 0.659844 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.044 * safezoneH;
            borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
            colorBorder[] = {1,1,1,1}; // Left border color
            colorShadow[] = {0,0,0,0}; // Background frame color
            offsetX = 0.0075; // Horizontal background frame offset
            offsetY = 0.01; // Vertical background frame offset
            offsetPressedX = 0.0075; // Horizontal background offset when pressed
            offsetPressedY = 0.01; // Horizontal background offset when pressed
            text = "Close";
            tooltip = "Abort / close the Snow Storm Spawn Menu";
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            action = "closeDialog 0;";
        };
        class b_confirm
        {
            idc = 1601;
            type = CT_BUTTON;
            style = 14;
            default = false;
            sizeEx = GUI_GRID_CENTER_H;
            font = GUI_FONT_BOLD;
            colorBackground[] = {1,1,1,1}; // Fill color
            colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
            colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
            colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
            colorText[] = {0.15,0.25,0.55,1}; // Text color
            colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
            soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
            soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
            soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
            soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
            x = 0.474219 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.0515625 * safezoneW;
            h = 0.044 * safezoneH;
            borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
            colorBorder[] = {1,1,1,1}; // Left border color
            colorShadow[] = {0,0,0,0}; // Background frame color
            offsetX = 0.0075; // Horizontal background frame offset
            offsetY = 0.01; // Vertical background frame offset
            offsetPressedX = 0.0075; // Horizontal background offset when pressed
            offsetPressedY = 0.01; // Horizontal background offset when pressed
            text = "Confirm";
            tooltip = "Confirm the settings and initialize snow storm";
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            action = QUOTE([] spawn FUNC(snow_storm_init); false);
        };
        class b_abort
        {
            idc = 1602;
            type = CT_BUTTON;
            style = 14;
            default = true;
            sizeEx = GUI_GRID_CENTER_H;
            font = GUI_FONT_BOLD;
            colorBackground[] = {1,1,1,1}; // Fill color
            colorBackgroundDisabled[] = {1,1,1,0.5}; // Disabled fill color
            colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
            colorFocused[] = {0,0,0,1}; // Selected fill color (oscillates between this and colorBackground)
            colorText[] = {0.15,0.25,0.55,1}; // Text color
            colorDisabled[] = {0.15,0.25,0.55,1}; // Disabled text color
            soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
            soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
            soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
            soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
            x = 0.298906 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.095 * safezoneW;
            h = 0.044 * safezoneH;
            borderSize = 0.01; // Left color width (border is a stripe of the control height on the left side)
            colorBorder[] = {1,1,1,1}; // Left border color
            colorShadow[] = {0,0,0,0}; // Background frame color
            offsetX = 0.0075; // Horizontal background frame offset
            offsetY = 0.01; // Vertical background frame offset
            offsetPressedX = 0.0075; // Horizontal background offset when pressed
            offsetPressedY = 0.01; // Horizontal background offset when pressed
            text = "Terminate snow storm";
            tooltip = "Terminate currently running snow storm";
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            action = QUOTE([] spawn FUNC(snow_terminateSnow); false);
        };
    };
    class ControlsBackground
    {
        class background
        {
            idc = 1000;
            text = QPATHTOF(ui\tablet.paa);
            type = CT_STATIC;
            style = 48;//ST_PICTURE
            colorBackground[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            x = 0.145625 * safezoneW + safezoneX;
            y = 0.14 * safezoneH + safezoneY;
            w = 0.675 * 1.05 * safezoneW;
            h = 0.9 * 0.8 * 1.05 * safezoneH;
            font = "EtelkaMonospacePro";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
            shadow = 0;
        };
        class t_header_bg
        {
            type = 0;
            idc = 1002;
            colorBackground[] = {1,1,1,1};
            colorText[] = {1,1,1,1};
            text = "";
            fixedWidth = 0;
            x = 0.4175 * safezoneW + safezoneX;
            y = 0.236 * safezoneH + safezoneY;
            w = 0.165 * safezoneW;
            h = 0.066 * safezoneH;
            style = 2;
            shadow = 2;
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
            font = GUI_FONT_NORMAL;
            sizeEx = "0.02/ (getResolution select 5)";
        };
        class t_header
        {
            type = 0;
            idc = 1001;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,1};
            sizeEx = "0.03/ (getResolution select 5)";
            text = "Snow Storm Menu";
            x = 0.422657 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltip = ""; // Tooltip text
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_objects
        {
            type = 0;
            idc = 1003;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Effect on objects:";
            tooltip = "Occasionally a random object will be thrown in the air (NOTE: Object can also be the player!)";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.324 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_breath
        {
            type = 0;
            idc = 1004;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Breath vapor:";
            tooltip = "Will enable breath vapors for all units, however if you have many units in your mission you should disable this to diminish the impact on frames.";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.324 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_clientserver
        {
            type = 0;
            idc = 1005;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Execute gusts on:";
            tooltip = "If enabled snow will be whirled up by gusts. Will add to server load if executed on server, however gust will be different for each player if executed on client.";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_fog
        {
            type = 0;
            idc = 1006;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Change fog settings?";
            tooltip = "If enabled fog will be managed by the script, otherwise the values will remain unchanged.";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_direction
        {
            type = 0;
            idc = 1007;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Snow storm direction:";
            tooltip = "From 1 to 360, direction towards the wind blows expressed in compass degrees.";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.456 * safezoneH + safezoneY;
            w = 0.1237495 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_duration
        {
            type = 0;
            idc = 1008;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Snow storm duration:";
            tooltip = "Duration how long the snow storm will last expressed in minutes.";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.1237495 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_delay
        {
            type = 0;
            idc = 1009;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Ambient sound delay:";
            tooltip = "Maximum delay in minutes between random ambient sounds. Minimum delay is set to one minute.";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.1237495 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_intensity
        {
            type = 0;
            idc = 1010;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "Snow intensity:";
            tooltip = "Snow intensity: Higher percentage results in more snowflakes but less frames.";
            x = 0.309219 * safezoneW + safezoneX;
            y = 0.654 * safezoneH + safezoneY;
            w = 0.1237495 * safezoneW;
            h = 0.044 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_s_direction
        {
            type = 0;
            idc = 19000;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            text = "360°";
            tooltip = "";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.456 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_s_duration
        {
            type = 0;
            idc = 19001;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            tooltip = "";
            text = "5 min";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_s_delay
        {
            type = 0;
            idc = 19002;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            tooltip = "";
            text = "1 min";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
        class t_s_intensity
        {
            type = 0;
            idc = 19003;
            colorText[] = {1,1,1,1};
            fixedWidth = 0;
            font = GUI_FONT_BOLD;
            colorBackground[] = {0.059,0.098,0.216,0};
            sizeEx = "0.02/ (getResolution select 5)";
            tooltip = "";
            text = "25%";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.654 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
            style = 2;
            shadow = 2;
            tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
            tooltipColorText[] = {1,1,1,1}; // Tooltip text color
            tooltipColorBox[] = {0.15,0.25,0.55,1}; // Tooltip frame color
        };
    };
};
