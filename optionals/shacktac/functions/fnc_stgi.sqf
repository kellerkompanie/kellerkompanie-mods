#include "script_component.hpp"

// TODO:
// - handle when worldToScreen freaks out
// - incorporate into STHUD

STGI_ColourRed = [1, 0, 0, 1];
STGI_ColourGreen = [0, 1, 0, 1];
STGI_ColourBlue = [0, 0, 1, 1];

STGI_ColourPaleGreen = [0.4, 0.8, 0.2, 1];
STGI_ColourLightBlue = [0, 0.6, 1, 1];

STGI_ColourYellow = [0.85, 0.85, 0, 1];
STGI_ColourOrange = [0.85, 0.4, 0, 1];
STGI_ColourLightGrey = [0.7, 0.7, 0.7, 1];
STGI_ColourWhite = [1, 1, 1, 1];
STGI_MaxDist = 30;
STGI_EdgeStep = 30;
STGI_FadeEdge = STGI_MaxDist + STGI_EdgeStep;

STGI_Colours =
[
     STGI_ColourLightGrey
    ,STGI_ColourRed
    ,STGI_ColourGreen
    ,STGI_ColourLightBlue
    ,STGI_ColourYellow
];

STGI_NightAlpha = 0.15;
STGI_DayAlphaDelta = 0.15; // Extra alpha on from night
STGI_AlphaClamp = 0; // Updated every frame

#define CANVAS_BORDER 0.02

// Allow the STHUD user menu to enable/disable this
STGI_Enabled = profileNamespace getVariable ["STGI_Enabled", true];

STGI_GetColour =
{
    params ["_unit", "_distance"];

    if ((vehicle(_unit) != vehicle(player)) && (_distance < STHud_Close)) exitWith
    {
        STGI_ColourOrange;
    };

    private _colour = STGI_ColourPaleGreen;
    private _alpha = linearConversion [STGI_MaxDist, STGI_FadeEdge, _distance, STGI_AlphaClamp, 0, true];
    [_colour select 0, _colour select 1, _colour select 2, _alpha];
};

STGI_GetColour_FromTeams =
{
    params ["_unit", "_distance"];

    if ((vehicle(_unit) != vehicle(player)) && (_distance < STHud_Close)) exitWith
    {
        STGI_ColourOrange;
    };

    private _index = _unit call STUI_assignedTeamIndex;
    private _colour = STGI_Colours select _index;
    private _alpha = linearConversion [STGI_MaxDist, STGI_FadeEdge, _distance, STGI_AlphaClamp, 0, true];
    [_colour select 0, _colour select 1, _colour select 2, _alpha];
};

STGI_Update =
{
    if (!STGI_Enabled) exitWith {};
    if (!call STUI_Canvas_ShownHUD) exitWith {};

    private _units = units(player) - [player];
    if (_units isEqualTo []) exitWith {};

    params ["_canvas"];

    // Adjust the maximum alpha based on day/night
    STGI_AlphaClamp = STGI_NightAlpha + sunOrMoon * STGI_DayAlphaDelta;
    STGI_ColourOrange set [3, STGI_AlphaClamp + 0.2];

    private "_colourFunc";
    private _isUsingTeams = call STUI_UsingTeams;
    if (_isUsingTeams) then
    {
        _colourFunc = STGI_GetColour_FromTeams;
    }
    else
    {
        _colourFunc = STGI_GetColour;
    };

    {
        private _unit = _x;

        // TODO: You sometimes get a nice visualisation of where units sit
        // if you omit the vehicle. However, this isn't smoothly interpolated
        // so judders around in MP.
        private _icon_pos = ASLtoAGL(visiblePositionASL(vehicle(_unit)));

        private _height_adjust = 0.2;
        if (vehicle(_unit) == _unit) then
        {
            _height_adjust = _height_adjust + (_unit selectionPosition "pelvis" select 2);
        }
        else
        {
            _height_adjust = _height_adjust + 0.7;
        };
        _icon_pos set [2, (_icon_pos select 2) + _height_adjust];

        private _screen_pos = worldToScreen(_icon_pos);

        if (count(_screen_pos) == 2) then
        {
            _clip_left  = (_screen_pos select 0) <= (SafeZoneX + CANVAS_BORDER);
            _clip_right = (_screen_pos select 0) >= (SafeZoneX + SafeZoneW - CANVAS_BORDER);
            _clip_top = (_screen_pos select 1) <= (SafeZoneY + CANVAS_BORDER);
            _clip_bottom = (_screen_pos select 1) >= (SafeZoneY + SafeZoneH - CANVAS_BORDER);
            _clipped = _clip_left || _clip_right || _clip_top || _clip_bottom;

            _distance = _icon_pos distance vehicle(player);

            _colour = [_unit, _distance] call _colourFunc;

            private "_texture";
            if (_clipped) then
            {
                _texture = "\A3\ui_f\data\igui\cfg\cursors\outarrow_ca.paa";
            }
            else
            {
                _texture = "\A3\ui_f\data\igui\cfg\cursors\select_ca.paa";
            };
            private _angle = 0;

            switch (true) do
            {
            case _clip_left: {_screen_pos set [0, SafeZoneX + CANVAS_BORDER]};
            case _clip_right: {_screen_pos set [0, SafeZoneX + SafeZoneW - CANVAS_BORDER]; _angle = 180;};
            };
            switch (true) do
            {
            case _clip_top: {_screen_pos set [1, SafeZoneY + CANVAS_BORDER]; _angle = 90;};
            case _clip_bottom: {_screen_pos set [1, SafeZoneY + SafeZoneH - CANVAS_BORDER]; _angle = 270;};
            };

            if (STUI_Occlusion && (player distance _x < STGI_FadeEdge)) then
            {
                private _vis = [(vehicle _x), "VIEW"] checkVisibility [eyePos player,  AGLToASL (_x modelToWorldVisual (_x selectionPosition "Spine3"))];
                private _alphaPre = _colour select 3;

                private _fadetime = 1.5;
                private _fadeDegree = _x getVariable ["STUI_Occlude_Fade",0];

                _alphaDiff = STUI_DeltaT / _fadetime;
                _fadeState = _x getVariable ["STUI_Occlude_Fade",0];

                if (_fadeState > 1) then {_fadeState = 1};
                if (_fadeState < 0) then {_fadeState = 0};

                if (_vis == 0 && _alphaPre > 0) then
                {
                    _curAlpha = _fadeState;
                    _newAlpha = (_curAlpha - _alphaDiff )min _alphaPre;
                    _x setVariable ["STUI_Occlude_Fade",_newAlpha];
                    _colour set [3,_newAlpha];
                }
                else
                {
                    _curAlpha = _fadeState;
                    _newAlpha = (_curAlpha + _alphaDiff) min _alphaPre;
                    _x setVariable ["STUI_Occlude_Fade",_newAlpha];
                    _colour set [3,_newAlpha];
                };
            };

            [
                _screen_pos,
                _colour,
                _texture,
                _angle
            ] call STUI_drawIcon3d;

            if (leader(player) == _unit) then
            {
                [
                    _screen_pos,
                    _colour,
                    "\A3\ui_f\data\igui\cfg\cursors\leader_ca.paa",
                    0
                ] call STUI_drawIcon3d;
            };
        };
    } foreach(_units);
};
