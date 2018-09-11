// How to use STUI_drawLine3d:
/*
drawLineTest =
{
    {
        _source = positionCameraToWorld [0,0,1];
        _dest = ASLtoATL(visiblePositionASL(_x));
        [_source, _dest, [1,0,0,0.5]] call STUI_drawLine3d;
    } forEach(vehicle(player) nearEntities ["All", 40]);
};
"drawLineTest" call STUI_Canvas_Add;
*/

#define GET_CANVAS (uiNamespace getVariable "STUI_Canvas")
#define CANVAS_BORDER 0.02

if (isNil "STUI_Canvas_Funcs") then
{
    STUI_Canvas_Funcs = [];
};


// functionName call STUI_Canvas_Add
STUI_Canvas_Add =
{
    params ["_funcName"];

    if !(_funcName isEqualType "") exitWith
    {
        diag_log ["STUI Error: Only function names are to be passed into STUI_Canvas_Add. Bad Value:", _funcName];
        false;
    };

    if (isNil _funcName) exitWith
    {
        diag_log ["STUI Error: Undefined function name given to STUI_Canvas_Add", _funcName];
        false;
    };

    if !((missionNamespace getVariable [_funcName, ""]) isEqualType {}) exitWith
    {
        diag_log ["STUI Error: Only function names are to be passed into STUI_Canvas_Add. Bad Value:", _funcName];
        false;
    };

    // Check if already registered this name

    if (_funcName in STUI_Canvas_Funcs) exitWith {true};
    STUI_Canvas_Funcs pushBack(_funcName);
    true;
};

// functionName call STUI_Canvas_Remove
STUI_Canvas_Remove =
{
    params ["_funcName"];
    STUI_Canvas_Funcs = STUI_Canvas_Funcs - [_funcName];
};

STUI_drawIcon3d =
{
    params ["_screen_pos", "_colour", "_texture", "_angle"];
    if (isNil "_screen_pos") exitWith {};
	if (isNil "_colour") exitWith {};
	if (isNil "_texture") exitWith {};
	if (isNil "_angle") exitWith {};

    if (count _screen_pos != 2) exitWith {};
	if (count _colour != 4) exitWith {};

    private _canvas = GET_CANVAS;
    private _draw_pos = _canvas ctrlMapScreenToWorld _screen_pos;

    _canvas drawIcon [
        _texture,
        _colour,
        _draw_pos,
        24, 24,
        _angle,
        "",
        false
    ];
};

// If you already have 2d screen coordinates
STUI_drawLine2d =
{
    params ["_start", "_end", "_colour"];

    private _canvas = GET_CANVAS;
    private _draw_start_pos = _canvas ctrlMapScreenToWorld _start;
    private _draw_end_pos = _canvas ctrlMapScreenToWorld _end;

    _canvas drawLine [
        _draw_start_pos,
        _draw_end_pos,
        _colour
    ];
};

// Takes world space coordinates
STUI_drawLine3d =
{
	params ["_startPos", "_endPos", "_colour"];
    if (count _startPos != 3) exitWith {};
    if (count _endPos != 3) exitWith {};
    if (count _colour != 4) exitWith {};

    private _start = worldToScreen _startPos;
    if (count _start != 2) exitWith {};

    private _end = worldToScreen _endPos;
    if (count _end != 2) exitWith {};

    private _canvas = GET_CANVAS;
    private _draw_start_pos = _canvas ctrlMapScreenToWorld _start;
    private _draw_end_pos = _canvas ctrlMapScreenToWorld _end;

    _canvas drawLine [
        _draw_start_pos,
        _draw_end_pos,
        _colour
    ];
};


// These numbers were chosen based on Nou's CCIP Canvas, STHUD and further testing
#define STUI_Canvas_ConstZoom 0.0001
#define STUI_Canvas_ConstCentre [25, 26, 0]

STUI_Canvas_Profile = false;
STUI_Canvas_ProfileData = [];

STUI_Canvas_OnLoad =
{
    params ["_canvas"];
    // Remove existing draw handles to prevent onload running more than once
    _canvas ctrlRemoveAllEventHandlers "draw";
    uiNamespace setVariable ["STUI_Canvas", _canvas];

    _canvas ctrlMapAnimAdd [0, STUI_Canvas_ConstZoom, STUI_Canvas_ConstCentre];
    ctrlMapAnimCommit _canvas;

    // ctrlMapScreenToWorld doesn't give useful results until the map is
    // stable. Sadly this isn't immediately after ctrlMapAnimCommit returns
    // even if the time is zero.
    [] spawn
    {
        disableSerialization;
        private _canvas = GET_CANVAS;

        waitUntil {ctrlMapAnimDone _canvas};

        // De-offset the map so it's visible now the anim has finished
        // This avoids a flicker within the first few frames of the game caused
        // by the map visibly scrolling to the right place.
        private _map_pos = ctrlPosition _canvas;
        _map_pos set [1, (_map_pos select 1) + 100];
        _canvas ctrlSetPosition _map_pos;
        _canvas ctrlCommit 0;

        // Find the top edge of the map control in screen space, slightly inset.
        // We want to find it relative to where the map control is centered so
        // when we find the distance between these two points later on, we
        // cancel out certain rounding errors.
        private _top_s = _canvas ctrlMapWorldToScreen STUI_Canvas_ConstCentre;
        private _half_height = 0.5 * (_map_pos select 3);
        _top_s set [1, (_top_s select 1) + _half_height - CANVAS_BORDER];

        // Project this point back into the world
        private _top_w = _canvas ctrlMapScreenToWorld _top_s;

        // This seemingly redundant step is to ensure our world space
        // coordinates have experienced the same form of rouding error.
        private _mid_s = _canvas ctrlMapWorldToScreen STUI_Canvas_ConstCentre;
        private _mid_w = _canvas ctrlMapScreenToWorld _mid_s;

        _canvas ctrlAddEventHandler ["Draw", "if (visibleMap) exitWith {}; _this call STUI_Canvas_Update"];
    };
};


STUI_Canvas_Update =
{
    {
        private "_start";
        private _funcName = _x;
        if (STUI_Canvas_Profile) then
        {
            _start = diag_tickTime;
        };

        _this call (missionNamespace getVariable _funcName);

        if (STUI_Canvas_Profile) then
        {
            STUI_Canvas_ProfileData pushBack [_funcName, diag_tickTime - _start];
            if ((diag_frameno % 10) isEqualTo 0) then
            {
                diag_log STUI_Canvas_ProfileData;
                STUI_Canvas_ProfileData = [];
            };
        };
    } forEach STUI_Canvas_Funcs;
};

STUI_Canvas_ShownHUD =
{
    if (!alive(player)) exitWith {false};
    if (!isNull(missionNamespace getVariable ["BIS_DEBUG_CAM", objNull])) exitWith {false};
    if (!isNull(missionNamespace getVariable ["BIS_fnc_camera_cam", objNull])) exitWith {false};
    true;
};
