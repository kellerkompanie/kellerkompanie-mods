#include "\a3\3DEN\UI\macros.inc"

//Controls
#define EDIT_W 10

// close dialog values
#define IDC_OK				1
#define IDC_CANCLE			2

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_HITZONES         17
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_OBJECT_CONT_ANIM 83
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_ITEMSLOT         103
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER
#undef ST_GROUP_BOX
#undef ST_GROUP_BOX2

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0
#define ST_UPPERCASE      0xC0
#define ST_LOWERCASE      0xD0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

// Import from editor defines
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)

// Default grid
#define GUI_GRID_WAbs			((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_HAbs			(GUI_GRID_WAbs / 1.2)
#define GUI_GRID_H				(GUI_GRID_HAbs / 25)

// Default text sizes
#define TEXT_SIZE				(GUI_GRID_H * 1)
#define GUI_TEXT_SIZE_SMALL		(GUI_GRID_H * 0.8)
#define GUI_TEXT_SIZE_LARGE		(GUI_GRID_H * 1.2)

#define COLOUR_USER_PRESET {\
			"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",\
			"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",\
			"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",\
			1}

// Forward declare some default base classes.
class IGUIBack;
class RscFrame;
class RscEdit;
class RscTitle;
class RscText;
class RscStructuredText;
class RscToolbox;
class RscCheckbox;
class RscCombo;
class RscListBox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonImages;
class RscSlider;
class RscXSliderH;
class ScrollBar;
class RscProgress;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscMapControl;
class RscActivePicture;
class RscPicture;
class RscTree;
class RscTreeSearch: RscTree {};

// Forward declare some 3den base classes.
class ctrlActivePicture;
class ctrlActivePictureKeepAspect;
class ctrlActiveText;
class ctrlButton;
class ctrlButtonCancel;
class ctrlButtonClose;
class ctrlButtonFilter;
class ctrlButtonOK;
class ctrlButtonPicture;
class ctrlButtonPictureKeepAspect;
class ctrlButtonSearch;
class ctrlButtonToolbar;
class ctrlCheckbox;
class ctrlCheckboxBaseline;
class ctrlCheckboxes;
class ctrlCheckboxToolbar;
class ctrlComboToolbar;
class ctrlControlsGroupHighlight;
class ctrlControlsGroupNoHScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlControlsGroupTutorial;
class ctrlDefault;
class ctrlDefaultText: ctrlDefault {};
class ctrlDefaultButton;
class ctrlCombo: ctrlDefaultText {};
class ctrlEdit: ctrlDefaultText {};
class ctrlStatic: ctrlDefaultText {};
class ctrlStaticFrame: ctrlStatic {};
class ctrlStaticPicture: ctrlStatic {};
class ctrlXSliderV: ctrlDefault {};
class ctrlXSliderH: ctrlXSliderV {};
class ctrlControlsGroup: ctrlDefault {};
class ctrlControlsGroupNoScrollbars: ctrlControlsGroup {};
class ctrlEditMulti;
class ctrlHTML;
class ctrlListbox;
class ctrlListNBox;
class ctrlMap;
class ctrlMapEmpty;
class ctrlMapMain;
class ctrlMenu;
class ctrlMenuStrip;
class ctrlObject;
class ctrlObjectContainer;
class ctrlObjectZoom;
class ctrlProgress;
class ctrlShortcutButton;
class ctrlSliderH;
class ctrlSliderV;
class ctrlStaticBackground;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticFooter;
class ctrlStaticPictureKeepAspect;
class ctrlStaticPictureTile;
class ctrlStaticTitle;
class ctrlStructuredText;
class ctrlToolbox;
class ctrlToolboxPicture;
class ctrlToolboxPictureKeepAspect;
class ctrlTree;
class ctrlXListbox;
class ctrlStaticLine;
class ctrlStaticMulti;
class ctrlStaticOverlay;



class GVAR(ScrollBar)
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
	border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
	thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
};
class GVAR(RscListBox)
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_LISTBOX;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0.2,0.2,0.2,0.8};
	canDrag = 0;
	drawSideArrows = true;
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
	class ListScrollBar: GVAR(ScrollBar)
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = LB_TEXTURES;
	font = FONT2_NORMAL;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 1.2;
	maxHistoryDelay = 1;
};
class GVAR(IGUIBack)
{
	type = 0;
	idc = -1;
	style = 128;
	text = "";
	colorText[] = {0,0,0,0};
	font = FONT2_NORMAL;
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorBackground[] = {0.2,0.2,0.2,0.8};
	moving = 1;
};
class GVAR(RscButton)
{
	access = 0;
	idc = -1;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = COLOUR_USER_PRESET;
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {255,255,255,0.7};
	colorFocused[] = {0,0,0,0.7};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0,9,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = 0;
	tooltipMaxWidth = 0.5;
	tooltipColorShade[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {0,0,0,0};
	font = FONT2_NORMAL;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class GVAR(RscEdit)
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	colorBackground[] = {COLOR_OVERLAY_RGBA};
	colorText[] = {COLOR_TEXT_RGBA};
	colorSelection[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		1
	};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = 16 + 512;//No Border
	font = FONT2_NORMAL;
	shadow = 2;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,1};
	canModify = 1;
};
class GVAR(RscText)
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {1,1,1,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0};
	font = FONT2_NORMAL;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
	linespacing = 1;
	moving = 1;
};
class GVAR(RscStructuredText)
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_STRUCTURED_TEXT;
	idc = -1;
	style = ST_LEFT;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.2,0.2,0.2,0.8};
	class Attributes
	{
		font = FONT2_NORMAL;
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = GUI_TEXT_SIZE_SMALL;
	shadow = 1;
};
class GVAR(RscSlider)
{
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	deletable = 0;
	fade = 0;
	access = 0;
	style = 1024;
	type = 43;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	shadow = 0;
	tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
	x = 0;
	y = 0;
	w = 0;
	h = 0;
};
class GVAR(RscPicture)
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_STATIC;
	idc = -1;
	style = ST_MULTI + ST_TITLE_BAR;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
};
class GVAR(RscHTML)
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_HTML;
	idc = -1;
	style = ST_LEFT;
	filename = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	colorBold[] = {1,1,1,1};
	colorLink[] = {1,1,1,0.75};
	colorLinkActive[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureLink[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureBorder[] = {0,0,0,0};
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
	class H1
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL * 1.5;
		align = "left";
	};
	class H2
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL * 1.4;
		align = "right";
	};
	class H3
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL * 1.3;
		align = "left";
	};
	class H4
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL * 1.2;
		align = "left";
	};
	class H5
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL * 1.1;
		align = "left";
	};
	class H6
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL;
		align = "left";
	};
	class P
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = GUI_TEXT_SIZE_SMALL;
		align = "left";
	};
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.1;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	prevPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";
	nextPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";
	shadow = 2;
};
class GVAR(RscControlsGroup)
{
	deletable = 0;
	fade = 0;
	class VScrollbar: GVAR(ScrollBar)
	{
		color[] = {1,1,1,1};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar: GVAR(ScrollBar)
	{
		color[] = {1,1,1,1};
		height = 0.028;
	};
	class Controls
	{
	};
	type = CT_CONTROLS_GROUP;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = ST_MULTI;
};
class GVAR(RscCombo)
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_COMBO;
	colorBackground[] = {0.05,0.05,0.05,1};
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	maxHistoryDelay = 1;
	class ComboScrollBar: GVAR(ScrollBar)
	{
		color[] = {1,1,1,1};
	};
	style = ST_MULTI + ST_NO_RECT;
	font = FONT2_NORMAL;
	sizeEx = GUI_TEXT_SIZE_SMALL;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
};
class GVAR(RscCheckBox)
{
	idc = -1;
	type = CT_CHECKBOX;
	deletable = 0;
	style = ST_LEFT;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundEnter[] =
	{
		"",
		0.1,
		1
	};
	soundPush[] =
	{
		"",
		0.1,
		1
	};
	soundClick[] =
	{
		"",
		0.1,
		1
	};
	soundEscape[] =
	{
		"",
		0.1,
		1
	};
};